/*
 * control.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#define SETPOINT 0

void drive_straight();
void control_init();
void control_open();

// UART Callbavks
void set_pid_kp(char* val);
void set_pid_ki(char* val);
void set_pid_kd(char* val);
void set_motor_speed(char* val);

// Switch HWI
void ctrlSwitchFxn(void);

#endif /* CONTROL_H_ */
