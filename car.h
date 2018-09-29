/*
 * car.h
 *
 * Created: 9/29/2018 4:14:28 PM
 *  Author: Hussein Hossam
 */ 


#ifndef CAR_H_
#define CAR_H_
#include "motor.h"
void PWM_vd_Car_Forward(uint_8  Duty_Cycle);
void PWM_vd_Car_Reverse(uint_8  Duty_Cycle);
 void PWM_vd_Car_TurnRight(uint_8  Duty_Cycle);
 void PWM_vd_Car_TurnLeft(uint_8  Duty_Cycle);
 void PWM_vd_Car_stop();

#endif /* CAR_H_ */
