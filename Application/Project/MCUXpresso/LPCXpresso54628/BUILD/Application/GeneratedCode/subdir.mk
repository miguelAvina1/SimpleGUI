################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Application.c \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Core.c \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Effects.c \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Graphics.c \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Resources.c \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Views.c \
C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/WidgetSet.c 

OBJS += \
./Application/GeneratedCode/Application.o \
./Application/GeneratedCode/Core.o \
./Application/GeneratedCode/Effects.o \
./Application/GeneratedCode/Graphics.o \
./Application/GeneratedCode/Resources.o \
./Application/GeneratedCode/Views.o \
./Application/GeneratedCode/WidgetSet.o 

C_DEPS += \
./Application/GeneratedCode/Application.d \
./Application/GeneratedCode/Core.d \
./Application/GeneratedCode/Effects.d \
./Application/GeneratedCode/Graphics.d \
./Application/GeneratedCode/Resources.d \
./Application/GeneratedCode/Views.d \
./Application/GeneratedCode/WidgetSet.d 


# Each subdirectory must supply rules for building sources it contributes
Application/GeneratedCode/Application.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Application.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/GeneratedCode/Core.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Core.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/GeneratedCode/Effects.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Effects.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/GeneratedCode/Graphics.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Graphics.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/GeneratedCode/Resources.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Resources.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/GeneratedCode/Views.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/Views.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/GeneratedCode/WidgetSet.o: C:/Users/migue/OneDrive/Documents/Embedded\ Wizard\ 10.00/LPCXpresso54628/Application/GeneratedCode/WidgetSet.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=c11 -DCPU_LPC54628J512ET180_cm4 -DCPU_LPC54628J512ET180=1 -DCPU_LPC54628 -D__USE_CMSIS -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -D__NEWLIB__ -DSERIAL_PORT_TYPE_UART=1 -DEW_USE_FREE_RTOS=1 -DEW_USE_EXTERNAL_FLASH=1 -DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/GeneratedCode" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../Application/Source" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../TargetSpecific/Drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -I"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

