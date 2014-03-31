/*
 * bluesmirf.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "drivers/control.h"
#include "drivers/ir_sensor.h"
#include "drivers/encoder.h"


typedef struct fun_ptr_t {
	char func_name[16];
	void (*funcptr)(char* val);
} fun_ptr_t;

void uart_ctrl(char* val);

#define NUM_REG_FUNCS 12
static fun_ptr_t reg_funcs[NUM_REG_FUNCS] = {
	{"str_pid_kp",set_pid_kp},
	{"str_pid_ki",set_pid_ki},
	{"str_pid_kd",set_pid_kd},
	{"motor_speed",set_motor_speed},
	{"stream_ir",stream_ir},
	{"uart_ctrl", uart_ctrl},
	{"ir_duty", update_ir_duty},
	{"stream_encoder", stream_encoder},
	{"stream_walls", stream_walls},
	{"stream_motor", stream_motor},
	{"stream_ctl", stream_control},
	{"move_delay", move_delay_tog}
};
void bluetooth_init();

void bluetooth_open();

int bluetooth_transmit(Char *data, int len);

#endif /* BLUETOOTH_H_ */
