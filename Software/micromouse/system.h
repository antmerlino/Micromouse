/*
 * system.h
 *
 *  Created on: Mar 18, 2014
 *      Author: Anthony
 */

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <ti/drivers/GPIO.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>

#define OFF (0)
#define ON (~0)

typedef enum micromouse_gpio_name{
	LEFT_MOTOR_DIR_1 = 0,
	LEFT_MOTOR_DIR_2,
	RIGHT_MOTOR_DIR_1,
	RIGHT_MOTOR_DIR_2,
	STBY_MOTOR,
	IR_SIDE_1,
	IR_SIDE_2,
	IR_DIAG_LEFT,
	IR_DIAG_RIGHT,
	IR_FRONT_LEFT,
	IR_FRONT_RIGHT,
	INPUT_CTRL_SWITCH,
	INPUT_ENCODER_R,
	INPUT_ENCODER_L,

	MICROMOUSE_GPIO_COUNT
} micromouse_gpio_name_t;

typedef enum micromouse_uart_name {
    //MICROMOUSE_UART0 = 0,
    //DEBUG,
    BLUETOOTH=0,

    MICROMOUSE_UARTCOUNT
} micromouse_uart_name_t;

extern Hwi_Struct portACallbackHwi;
extern const GPIO_Callbacks portACallbacks;

/**
 * Enable Flags for System Peripherals, Drivers, and Services
 */

#define MOTORS_ENABLE
#define IR_ADC_SENSORS_ENABLE
#define BLUETOOTH_ENABLE
#define DEBUG_ENABLE
#define CONTROL_ENABLE
#define ENCODER_ENABLE

void system_init();

#endif /* SYSTEM_H_ */
