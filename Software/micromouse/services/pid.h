#ifndef PID_H
#define PID_H

#include <stdint.h>
#include <stdbool.h>

typedef struct pid_controller_t {
	// PID Coefficients
	float kp; // Proportional
	float ki; // Integral
	float kd; // Derivitive
	// Error
	float prev_error;  // Used in Derivitive Calc
	float accum_error; // Used in Integral Calc
	// Integral/Derivitive dt calculation
	float prev_time_us;
} pid_controller_t;

void pid_init(pid_controller_t *pid_handle, float kp, float ki, float kd, float curr_time_us);

float pid_step(pid_controller_t *pid_handle, float stpt, float meas, float curr_time_us);

#endif
