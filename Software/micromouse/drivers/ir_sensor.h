#ifndef IR_ADC_SENSOR_H
#define IR_ADC_SENSOR_H


typedef union {

	uint32_t adc_data[6];

	struct{
		union{
			uint32_t left_front;
			Char left_front_char[4];
		};
		union{
			uint32_t right_back;
			Char right_back_char[4];
		};
		union{
			uint32_t right_front;
			Char right_front_char[4];
		};
		union{
			uint32_t left_back;
			Char left_back_char[4];
		};

		uint32_t junk1;
		uint32_t junk2;
	};

} side_ir_data_t;


void ir_sensor_init(void);
void side_poll(side_ir_data_t * side_ir_data);
void side_poll_resume(void);

#endif