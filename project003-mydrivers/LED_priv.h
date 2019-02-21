/*
 * LED_priv.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: smart
 */
/* to avoid calling ""redefinition"" that file more than one time we use "ifndef" and "def"
 * to define it one and we can write the name that we want as it is considered
 * as what is we called, like in that case "LED_PRIV_H" and the code of that file
 * considered as it is related to the name we call it "LED_PRIV_H" */
#ifndef LED_PRIV_H
#define LED_PRIV_H

/* the modes of leds hardware connection on the kit */
#define LED_u8_REVERSE 0
#define LED_u8_FORWARD 1

#endif//LED_PRIV_H
