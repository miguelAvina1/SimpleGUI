/*
 * common.h
 *
 *  Created on: Nov 14, 2020
 *      Author: migue
 */

#ifndef APPLICATION_SOURCE_COMMON_H_
#define APPLICATION_SOURCE_COMMON_H_

#include "FreeRTOS.h"
#include <stdint.h>
#include <stdint.h>
#include "queue.h"


typedef struct {
	uint16_t potValue;
	uint8_t userButtonState;
	uint8_t touchButtonState;
} sensorsInfo;

#endif /* APPLICATION_SOURCE_COMMON_H_ */
