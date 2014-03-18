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

typedef pid_controller_t* pid_controller_handle;

void init_pwm_controller(pid_controller_handle pid_handle, float kp, float ki, float kd, float curr_time_us);

float calc_pid_out(pid_controller_handle pid_handle, float stpt, float meas, float curr_time_us);

#endif
