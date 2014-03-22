#ifndef TIME_KEEPER_H
#define TIME_KEEPER_H

#include <stdint.h>
#include <stdbool.h>

#define MICROSECONDS_PER_UPDATE 100

typedef struct sys_time_t {
	uint32_t hours;
	uint8_t minutes;
	uint8_t seconds;
	uint32_t uSec;
} sys_time_t;

typedef sys_time_t* sys_time_handle;

void time_keeper_init(void);

/**
 * Updates time_handle with the current time.
 */
void get_current_time(sys_time_handle time_handle);

/**
 * For those who detest structure... Get the current time since start in uSeconds.
 */
uint64_t get_curr_time_us(void);

/**
 * Returns the number of microseconds since the time_handle has occurred.
 */
uint64_t get_time_lapsed_us(sys_time_handle time_handle);

#endif
