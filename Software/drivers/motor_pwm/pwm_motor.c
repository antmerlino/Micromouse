#include "pwm_motor.h"

#define PWM_PIN_OUT(x) 1<<x
#define CALC_CYCLES(us)   (PWM_TIMER_FREQ/1000000)*us
#define CALC_USEC(cycles) (1000000/PWM_TIMER_FREQ)*cycles

void pwm_gpio_init(void) {

	int i;

	// Set Pins to output/PWM in GPIO
	SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);
	SysCtlPWMClockSet(SYSCTL_PWMDIV_64);
	GPIOPinConfigure(GPIO_PF2_M1PWM6);
	GPIOPinConfigure(GPIO_PF3_M1PWM7);
	GPIOPinTypePWM(GPIO_PORTF_BASE, GPIO_PIN_2 | GPIO_PIN_3);

	// Configure the PWM for each pin:
	// Turn on the generators and set the PW to 0
	// The output is still OFF. Turn on with set_motor_pwm_state
	for (i = 0; i < NUM_MOTORS; i++) {
		PWMGenConfigure(pwm_motors[i].pwm_base_module, pwm_motors[i].pwm_generator, PWM_GEN_MODE_DOWN | PWM_GEN_MODE_NO_SYNC);
		PWMGenPeriodSet(pwm_motors[i].pwm_base_module, pwm_motors[i].pwm_generator, CALC_CYCLES(MOTOR_PERIOD));
		PWMPulseWidthSet(pwm_motors[i].pwm_base_module, pwm_motors[i].pwm_pin, 0);
		PWMGenEnable(pwm_motors[i].pwm_base_module, pwm_motors[i].pwm_generator);
	}
}

void set_pulse_width(uint8_t motorIndex, uint16_t *uSec) {
	uint32_t cycles = CALC_CYCLES(*uSec);
	if(cycles > 0xFFFF){
		// Overflow! Set to MAX Value
		cycles = 0xFFFF;
	}

	// set uSec as closest value as possible with Timer settings
	*uSec = CALC_USEC(cycles);

	PWMPulseWidthSet(pwm_motors[motorIndex].pwm_base_module, pwm_motors[motorIndex].pwm_pin, cycles);
}

void set_motor_pwm_state(bool isOn) {
	uint32_t pin_mask;
	int i;
	for (i = 0; i < NUM_MOTORS; i++) {
		pin_mask = 1 << (0x0000000F & pwm_motors[i].pwm_pin);
		PWMOutputState(pwm_motors[i].pwm_base_module, pin_mask, isOn);
	}
}
