/*
 * CFile1.c
 *
 * Created: 9/29/2018 4:09:59 PM
 *  Author: Hussein Hossam
 */ 
#include "car.h"
void PWM_vd_Car_Forward(uint_8  Duty_Cycle) // Moving car forward
{
	PWM_vd_Motor_Forward(Left_Motor,Duty_Cycle);
	PWM_vd_Motor_Forward(Right_Motor,Duty_Cycle);
}
void PWM_vd_Car_Reverse(uint_8  Duty_Cycle) // Moving card reverse 
{
	PWM_vd_Motor_Reverse(Left_Motor,Duty_Cycle);
	PWM_vd_Motor_Reverse(Right_Motor,Duty_Cycle);
}
void PWM_vd_Car_TurnRight(uint_8  Duty_Cycle) // Turning car right
{
	PWM_vd_Motor_Forward(Left_Motor,Duty_Cycle);
	PWM_vd_Motor_Reverse(Right_Motor,Duty_Cycle);
}
void PWM_vd_Car_TurnLeft(uint_8 Duty_Cycle) // Turning car left
{
	PWM_vd_Motor_Forward(Right_Motor,Duty_Cycle);
	PWM_vd_Motor_Reverse(Left_Motor,Duty_Cycle);
}
void PWM_vd_Car_stop() // Stop car
{
	CLEAR_BIT(PORTB,PB1);
	CLEAR_BIT(PORTB,PB2);
	CLEAR_BIT(PORTD,PD5);
	CLEAR_BIT(PORTD,PD6);
}
