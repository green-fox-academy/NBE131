################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/s5k5cag/s5k5cag.c 

OBJS += \
./Drivers/BSP/Components/s5k5cag/s5k5cag.o 

C_DEPS += \
./Drivers/BSP/Components/s5k5cag/s5k5cag.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/s5k5cag/s5k5cag.o: C:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/s5k5cag/s5k5cag.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Inc -IC:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -IC:/Users/Dell/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/s5k5cag/s5k5cag.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

