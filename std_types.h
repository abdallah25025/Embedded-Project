/******************************************************************************
 *
 * Module: Common - Platform Types Abstraction
 *
 * File Name: std_types.h
 *
 * Description: types for AVR
 *
 * Author: Mohamed Tarek
 *
 *******************************************************************************/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_


#define HIGH        (1)
#define LOW         (0)
#define Left_Motor 1
#define Right_Motor 2

typedef unsigned char         uint_8;          /*           0 .. 255             */
typedef signed char           sint_8;          /*        -128 .. +127            */
typedef unsigned short        uint_16;         /*           0 .. 65535           */
typedef signed short          sint_16;         /*      -32768 .. +32767          */
typedef unsigned long         uint_32;         /*           0 .. 4294967295      */
typedef signed long           sint_32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint_64;         /*       0..18446744073709551615  */
typedef signed long long      sint_64;
typedef float                 float_32;
typedef double                float_64;

#endif /* STD_TYPE_H_ */
