/*
 * control.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#define SETPOINT 0
#define TURN_SPEED 125

#define MOTOR_SPEED_OFFSET 5

#define INITIAL_WALLS 0x0D

#define NUMTICKS_PER_BLOCK 275
#define HALF_BLOCK NUMTICKS_PER_BLOCK/2.0

#define NUMTICKS_FULL_TURN 225
#define NUMTICKS_HALF_TURN 114

#define TRANSITION_THRESHOLD 95


typedef enum {
	RESET = -1,
	STRAIGHT,
	TURN_RIGHT,
	TURN_AROUND,
	TURN_LEFT,
	START
} control_state_t;

void control_loop();
void control_init();
void control_open();

// UART Callbacks
void set_pid_kp(char* val);
void set_pid_ki(char* val);
void set_pid_kd(char* val);
void set_motor_speed(char* val);
void toggle_ctrl_sys(char* val);
void stream_walls(char* val);
void stream_motor(char* val);
void stream_control(char* val);
void move_delay_tog(char* val);
void dead_reckoning_update(void);

// Switch HWI
void ctrlSwitchFxn(void);

#endif /* CONTROL_H_ */
