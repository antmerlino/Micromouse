/*
 * encoder.h
 *
 *  Created on: Mar 22, 2014
 *      Author: Anthony
 */

#ifndef ENCODER_H_
#define ENCODER_H_

#define ENCODER_MAX_LOW 993	// 0.8V
#define ENCODER_MAX_HIGH 1490	// 1.2V

#define NUMTICKS_PER_BLOCK 500
#define WALL_CHECK_ZONE 50



void encoder_init();
void left_encoder_count();
void right_encoder_count();
void check_distance();
void stream_encoder(char* val);


#endif /* ENCODER_H_ */
