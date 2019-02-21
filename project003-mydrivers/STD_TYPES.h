/*
 * STD_TYPES.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: smart
 */
/* to avoid calling "redefinition" that file more than one time we use "ifndef" and "def"
 * to define it one and we can write the name that we want as it is considered
 * as what is we called, like in that case "STD_TYPES_H" and the code of that file
 * considered as it is related to the name we call it "STD_TYPES_H" */
#ifndef STD_TYPES_H//file guards
#define STD_TYPES_H//file guards
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
#endif//STD_TYPES_H-file guards
