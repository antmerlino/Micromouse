/*
 * control.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#define PI 3.14159265359

#define SETPOINT 0
#define TURN_SPEED 85

//#define MOTOR_SPEED_OFFSET 12.5 //~Full Battery
#define MOTOR_SPEED_OFFSET 15

#define WHEEL_RADIUS 15.0
#define WHEEL_BASE 70.0
#define NUM_TICKS_PER_REVOLUTION 150.0
#define MM_PER_TICK (2*PI*WHEEL_RADIUS/NUM_TICKS_PER_REVOLUTION)

#define INITIAL_WALLS 0x07

#define NUMTICKS_PER_BLOCK 279
#define HALF_BLOCK NUMTICKS_PER_BLOCK/2.0
#define NUMTICKS_FULL_TURN 235
#define NUMTICKS_HALF_TURN 118

#define TRANSITION_THRESHOLD 50

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
