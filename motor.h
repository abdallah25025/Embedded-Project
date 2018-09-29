/*
 * File Name : motor.h
 *
 *  Created on: 29/09/2018
 *  Description : Libraries and Prototyping
 *      Author: Hussein Hossam
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "micro_config.h"
#include "common_macros.h"
#include "std_types.h"
#include "car.h"
 void PWM_vd_Motor_init();
 void PWM_vd_Motor_Forward(uint_8 Motor , uint_8 Duty_Cycle);
 void PWM_vd_Motor_Reverse(uint_8 Motor , uint_8  Duty_Cycle);



#endif /* MOTOR_H_ */
