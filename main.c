/*
 */

/*
 * File Name : main.c
 * Description : Main code 
 *  Created on: 29/09/2018
 *      Author: Hussein Hossam
 *
 */
#include "motor.h"
int main (void)
{


	while(1)
	{
		PWM_vd_Motor_init(); // initialize PWM
		PWM_vd_Car_Forward(10); 
		_delay_ms(3000);
		PWM_vd_Car_Forward(50);
		_delay_ms(3000);
		PWM_vd_Car_Reverse(20);
		_delay_ms(3000);
		PWM_vd_Car_Reverse(90);
		_delay_ms(3000);
		PWM_vd_Car_stop();
		_delay_ms(2000);
		PWM_vd_Car_TurnRight(10);
		_delay_ms(6000);
		PWM_vd_Car_stop();
		_delay_ms(3000);
		PWM_vd_Car_TurnLeft(70);
		_delay_ms(6000);



	}
	return 0;
}
