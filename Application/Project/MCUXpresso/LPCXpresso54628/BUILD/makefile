################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang/subdir.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F/subdir.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/str/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/debug_console/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC54628/utilities/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC54628/drivers/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC54628/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/uart/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/serial_manager/subdir.mk
-include TargetSpecific/Drivers/subdir.mk
-include TargetSpecific/subdir.mk
-include PlatformPackage/RTE/subdir.mk
-include PlatformPackage/RGB565/subdir.mk
-include Application/Source/subdir.mk
-include Application/GeneratedCode/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: EmbeddedWizard-LPCXpresso54628.axf

# Tool invocations
EmbeddedWizard-LPCXpresso54628.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../ThirdParty/MCUXpressoSDK/devices/LPC54628/mcuxpresso" -L"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RTE" -L"C:/Users/migue/OneDrive/Documents/Embedded Wizard 10.00/LPCXpresso54628/Application/Project/MCUXpresso/LPCXpresso54628/../../../../PlatformPackage/RGB565" -Xlinker -Map="EmbeddedWizard-LPCXpresso54628.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -T LPCXpresso54628_BUILD.ld -o "EmbeddedWizard-LPCXpresso54628.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) EmbeddedWizard-LPCXpresso54628.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "EmbeddedWizard-LPCXpresso54628.axf"; # arm-none-eabi-objcopy -v -O binary "EmbeddedWizard-LPCXpresso54628.axf" "EmbeddedWizard-LPCXpresso54628.bin" ; # checksum -p LPC54628J512 -d "EmbeddedWizard-LPCXpresso54628.bin";
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
