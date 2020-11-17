/*******************************************************************************
 *
 * E M B E D D E D   W I Z A R D   P R O J E C T
 *
 *                                                Copyright (c) TARA Systems GmbH
 *                                    written by Paul Banach and Manfred Schweyer
 *
 ********************************************************************************
 *
 * This software is delivered "as is" and shows the usage of other software
 * components. It is provided as an example software which is intended to be
 * modified and extended according to particular requirements.
 *
 * TARA Systems hereby disclaims all warranties and conditions with regard to the
 * software, including all implied warranties and conditions of merchantability
 * and non-infringement of any third party IPR or other rights which may result
 * from the use or the inability to use the software.
 *
 ********************************************************************************
 *
 * DESCRIPTION:
 *   This file implements the main.c module for running Embedded Wizard
 *   generated GUI applications on a dedicated target with or without the usage
 *   of an operating system.
 *
 *   Important: Please be aware that every Embedded Wizard GUI application
 *   requires the execution in a single GUI task!
 *   If you are working with an operating system and your software is using
 *   several threads/tasks, please take care to access your GUI application
 *   only within the context of your GUI thread/task. Use operating system
 *   services to exchange data or events between the GUI thread/task and other
 *   worker threads/tasks.
 *
 *   For more information concerning the integration of an Embedded Wizard
 *   generated GUI application into your main application, please see
 *   https://doc.embedded-wizard.de/main-loop
 *
 *******************************************************************************/

#include "ewmain.h"
#include "ewrte.h"
#include "ew_bsp_system.h"
#include "ew_bsp_console.h"
#include "common.h"
#include <stdlib.h>

#include "fsl_i2c.h"

#ifdef __GNUC__
#define PACKED  __attribute__((__packed__))
#endif

#define I2C_BAUDRATE               100000U

#define I2C_MASTER ((I2C_Type *)(I2C8_BASE))
#define I2C_PAYLOAD_LENGTH            4U

#define I2C_DATA_LENGTH            3U
#define I2C_SLAVE_PAYLOAD_LENGTH            4U
#define I2C_MASTER_PAYLOAD_LENGTH            4U

#define I2C_MASTER_SLAVE_ADDR_7BIT 0x7EU


#define I2C_MASTER_CLOCK_FREQUENCY (12000000)

#if EW_USE_FREE_RTOS == 1

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"


#define semtstSTACK_SIZE    configMINIMAL_STACK_SIZE * 10
#define sensorTaskSTACK_SIZE    configMINIMAL_STACK_SIZE



static void GuiThread( void* arg );
static void SensingThread( void* arg );


#endif


#if EW_USE_FREE_RTOS == 0

/*******************************************************************************
 * FUNCTION:
 *   main
 *
 * DESCRIPTION:
 *   The main function for running Embedded Wizard generated GUI applications on
 *   a dedicated target without using any operating system (bare metal).
 *
 * ARGUMENTS:
 *   None
 *
 * RETURN VALUE:
 *   Zero if successful.
 *
 *******************************************************************************/
int main( void )
{
	/* initialize system */
	EwBspSystemInit();

	/* initialize console interface for debug messages */
	EwBspConsoleInit();

	/* initialize Embedded Wizard application */
	if ( EwInit() == 0 )
		return 1;

	EwPrintSystemInfo();

	/* process the Embedded Wizard main loop */
	while( EwProcess())
		;

	/* de-initialize Embedded Wizard application */
	EwDone();

	/* restore console */
	EwBspConsoleDone();

	/* terminate the system */
	EwBspSystemDone();

	return 0;
}

#endif

#if EW_USE_FREE_RTOS == 1

typedef union {		// Payload from slave to master
	struct PACKED {
		uint16_t adc_val;
		uint8_t tactile_switch;
		uint8_t touch_button;
	} data;
	uint8_t payload_arr[4];
} i2c_payload_slave_t;

typedef union {
	struct PACKED leds {
		unsigned red_led : 1;
		unsigned green_led : 1;
		unsigned blue_led : 1;
		unsigned reserved : 5;
	} led_state_bit;
	uint8_t leds_state;
} leds_state_t;

typedef struct {
	uint8_t rgb_red;
	uint8_t rgb_green;
	uint8_t rgb_blue;
} rgb_info_t;

typedef union {		// Payload from slave to master
	struct PACKED {
		leds_state_t leds_state;	// 1 byte. Each bit is Active/Inactive
		rgb_info_t rgb_info;  // Not implemented yet
	} data;
	uint8_t payload_arr[4];
} i2c_payload_master_t;

QueueHandle_t xQueueSensors = NULL;
QueueHandle_t xQueueLEDs = NULL;


uint8_t g_master_txBuff[3] = {0x01, 0x02, 0x03};


/*******************************************************************************
 * FUNCTION:
 *   main
 *
 * DESCRIPTION:
 *   The main function for running Embedded Wizard generated GUI applications on
 *   a dedicated target using the FreeRTOS operating system.
 *
 * ARGUMENTS:
 *   None
 *
 * RETURN VALUE:
 *   None
 *
 *******************************************************************************/
int main( void )
{
	BaseType_t retVal;
	/* initialize system */
 	EwBspSystemInit();

	/* initialize console interface for debug messages */
	EwBspConsoleInit();

	/* create thread that drives the Embedded Wizard GUI application... */
	EwPrint( "Create UI thread...                          " );
	xTaskCreate( GuiThread, "EmWi_Task", semtstSTACK_SIZE, NULL, 1, NULL );
	EwPrint( "[OK]\n" );


	retVal = xTaskCreate( SensingThread, "Sensing_Task", sensorTaskSTACK_SIZE, NULL, 2, NULL );
	if (retVal != pdPASS) {
		EwPrint( "Failed to create sensor task\n" );
	}

	xQueueSensors = xQueueCreate(5, sizeof(sensorsInfo));
	xQueueLEDs = xQueueCreate(2, sizeof(uint8_t));

	/* ...and start scheduler */
	vTaskStartScheduler();

	/* restore console */
	EwBspConsoleDone();

	/* terminate the system */
	EwBspSystemDone();

	return 0;
}

static uint16_t get_0to100Scale(uint16_t rawVal) {
	uint16_t retVal;
	retVal = abs(rawVal - 4096);
	retVal = retVal/39;	// Aprox val
	return retVal;
}
/*******************************************************************************
 * FUNCTION:
 *   GuiThread
 *
 * DESCRIPTION:
 *   The EwThread processes the Embeded Wizard application.
 *
 * ARGUMENTS:
 *   arg - not used.
 *
 * RETURN VALUE:
 *   None.
 *
 *******************************************************************************/
static void GuiThread( void* arg )
{
	/* initialize Embedded Wizard application */
	if ( EwInit() == 0 )
		return;

	EwPrintSystemInfo();

	/* process the Embedded Wizard main loop */
	while( EwProcess())
		;

	/* de-initialize Embedded Wizard application */
	EwDone();
}




static void SensingThread( void* arg )
{

	sensorsInfo sensorsData;
	BaseType_t retVal;
	i2c_master_config_t masterConfig;

	i2c_payload_slave_t I2C_Payload_slave;
	i2c_payload_master_t I2C_Payload_master;
	status_t reVal        = kStatus_Fail;

	I2C_Payload_master.data.leds_state.led_state_bit.red_led = 0U;
	I2C_Payload_master.data.leds_state.led_state_bit.green_led = 0U;
	I2C_Payload_master.data.leds_state.led_state_bit.blue_led = 0U;

	srand(1); // Predefined seed

	I2C_MasterGetDefaultConfig(&masterConfig);
	masterConfig.baudRate_Bps = I2C_BAUDRATE;

	I2C_MasterInit(I2C_MASTER, &masterConfig, I2C_MASTER_CLOCK_FREQUENCY);

	uint8_t LED_On;
	while(1) {
		vTaskDelay(100);

		if (uxQueueMessagesWaiting(xQueueLEDs) != 0) {
			retVal = xQueueReceive(xQueueLEDs, (void *) &LED_On, 1);
			if (retVal != pdPASS) {
				EwPrint("Failed to read queue!\n");
			}

			I2C_Payload_master.data.leds_state.led_state_bit.red_led = 0U;
			I2C_Payload_master.data.leds_state.led_state_bit.green_led = 0U;
			I2C_Payload_master.data.leds_state.led_state_bit.blue_led = 0U;
			switch (LED_On) {
			case 0:
				// Nada, REMOVE this
				break;
			case 1:
				I2C_Payload_master.data.leds_state.led_state_bit.red_led = 1U;
				break;

			case 2:
				I2C_Payload_master.data.leds_state.led_state_bit.green_led = 1U;
				break;

			case 3:
				I2C_Payload_master.data.leds_state.led_state_bit.blue_led = 1U;

				break;

			}

		}

		if (kStatus_Success == I2C_MasterStart(I2C_MASTER, I2C_MASTER_SLAVE_ADDR_7BIT, kI2C_Write))
		{
			reVal = I2C_MasterWriteBlocking(I2C_MASTER, I2C_Payload_master.payload_arr, I2C_MASTER_PAYLOAD_LENGTH, kI2C_TransferDefaultFlag);
			if (reVal != kStatus_Success)
			{
			}
			reVal = I2C_MasterStop(I2C_MASTER);
			if (reVal != kStatus_Success)
			{
			}
		}

		vTaskDelay(1);


		reVal = I2C_MasterRepeatedStart(I2C_MASTER, I2C_MASTER_SLAVE_ADDR_7BIT, kI2C_Read);
		if (reVal != kStatus_Success)
		{
		}

		reVal = I2C_MasterReadBlocking(I2C_MASTER, I2C_Payload_slave.payload_arr, I2C_SLAVE_PAYLOAD_LENGTH, kI2C_TransferDefaultFlag);
		if (reVal != kStatus_Success)
		{
		}

		reVal = I2C_MasterStop(I2C_MASTER);
		if (reVal != kStatus_Success)
		{
		}

		// FIlling randomly
		// I2C_MasterInit(base, masterConfig, srcClock_Hz)

		sensorsData.potValue = get_0to100Scale(I2C_Payload_slave.data.adc_val);
		sensorsData.userButtonState = I2C_Payload_slave.data.tactile_switch;
		sensorsData.touchButtonState = I2C_Payload_slave.data.touch_button;


		retVal = xQueueSendToFront(xQueueSensors, (void *) &sensorsData, 10);
		if (retVal != pdPASS) {
			EwPrint( "Failed to queue!\n");
		}

		EwPrint( "Sensing Thread Running\n");

	}



	/* de-initialize Embedded Wizard application */

}

#endif

/* msy, mli */
