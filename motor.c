/*
 * File Name : motor.c
 * Description : Motor driver 
 *  Created on: 29/9/2018
 *      Author: Hussein Hossam
 */
#include "motor.h"

void PWM_vd_Motor_init() // initialization PWM function
{
	/*	PWM configuration
	*	FAST PWM 
	*/
	SET_BIT(TCCR0,WGM01); 
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR2,WGM21);
	SET_BIT(TCCR2,WGM20);
	
	// Non- inverting 
	SET_BIT(TCCR0,COM01);
	SET_BIT(TCCR2,COM21);
	
	// Left Motor Prescaling ( /256 )
	SET_BIT(TCCR2,CS22);
	SET_BIT(TCCR2,CS21);
	
	// Right Motor Prescaling 
	SET_BIT(TCCR0,CS02);
 
	SET_BIT(DDRD,PD7); // PD7 : PWM enable pin of H-bridge for Left Motor
	SET_BIT(DDRB,PB3); // PB3 : PWM enable pin of H-bridge for Right Motor 
	 
	OCR2 = 0; // Output Compare Register of Left Motor ( MOTOR 1 ) = 0
	OCR0 = 0; // Output Compare Register of Right Motor ( MOTOR 2 ) = 0
	
	//Left Motor selections
	SET_BIT(DDRD,PD5);
	SET_BIT(DDRD,PD6);
	
	//Right Motor selections
	SET_BIT(DDRB,PB1);
	SET_BIT(DDRB,PB2);
}
void PWM_vd_Motor_Forward(uint_8 Motor, uint_8 Duty_Cycle) // Moving motor forward
{
	if (Motor == Left_Motor)
	{
		TCNT2 = 0; // Timer 2 for Left Motor = 0
		SET_BIT(PORTD,PD6);
		CLEAR_BIT(PORTD,PD5);
		OCR2 = ((Duty_Cycle*256/100)); // Output Compare equation for Left Motor depending on Duty_Cycle
	} 
	else if (Motor == Right_Motor)
	{
		TCNT0 = 0; // Timer 0 for Right Motor = 0
		SET_BIT(PORTB,PB1);
		CLEAR_BIT(PORTB,PB2);
		OCR0 = ((Duty_Cycle*256/100)); // Output Compare equation for Right Motor depending on Duty_Cycle
	}

}
void PWM_vd_Motor_Reverse(uint_8 Motor , uint_8  Duty_Cycle) // Moving motor reverse  
{
	
	if (Motor == Left_Motor)
	{
		TCNT2 = 0; // Timer 2 for Left Motor = 0
		SET_BIT(PORTD,PD5);
		CLEAR_BIT(PORTD,PD6);
		OCR2 = ((Duty_Cycle*256/100)); // Output Compare equation for Left Motor depending on Duty_Cycle
	}
	else if (Motor == Right_Motor)
	{
		TCNT0 = 0; // Timer 0 for Right Motor = 0
		SET_BIT(PORTB,PB2);
		CLEAR_BIT(PORTB,PB1);
		OCR0 = ((Duty_Cycle*256/100)); // Output Compare equation for Right Motor depending on Duty_Cycle
	}
}
