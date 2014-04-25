/*
 * sysem.c
 *
 *  Created on: Mar 18, 2014
 *      Author: Anthony Merlino and Brad Ebinger
 */
#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_types.h>

#include <driverlib/sysctl.h>

#include "drivers/motor.h"
#include "drivers/ir_sensor.h"
#include "drivers/bluetooth.h"

#include "drivers/led.h"

#include "services/maze_solver.h"

#include "system.h"

void system_init(){


	// Allow access to all GPIO port registers
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    //Initialize Motor Control
    motors_init();

    //Initialize IR Sensor Control
    ir_sensor_init();

    //Initialize Encoders
    encoder_init();

    //Initialize RGB LED
    led_init();

    //Initialize Bluetooth Module
    bluetooth_init();

    //Initialize UART in TI-RTOS
	UART_init();

    //Open Bluetooth Communication
    bluetooth_open();

    //Initialize Maze Solving Algorithm
    maze_solver_init();

    //Initialize Control Module
    control_init();

    //Initialize GPIO in TI-RTOS
    GPIO_init();

    //Open Control (Sets up switch GPIO Interrupt)
    control_open();

    // Configure the GPIO Callbacks
    GPIO_setupCallbacks(&portACallbacks); // Setup interrupts
    //GPIO_setupCallbacks(&portECallbacks); // Setup interrupts
}
