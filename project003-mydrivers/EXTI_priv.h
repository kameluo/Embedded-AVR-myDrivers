/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 24/2/2018		                     */
/* version : V01		                     */

#ifndef _EXTI_PRIV_H
#define _EXTI_PRIV_H

/* Description: Operation modes      */

#define EXTI_u8_LOW_MODE    0
#define EXTI_u8_IOC_MODE    1	//interrupt on change
#define EXTI_u8_FAL_MODE    2
#define EXTI_u8_RIS_MODE    3


/* Description: Enable/Disable State*/

#define EXTI_u8_ENABLE_STATE  1
#define EXTI_u8_DISABLE_STATE  0


/*********mode clear mask**********/
#define EXTI_u8_MODE_CLEAR   0b11111100

/*  PIE bit index  */
#define EXTI_u8_INT0_PIE    6
//kamel
#define EXTI_u8_INT1_PIE    7
#define EXTI_u8_INT2_PIE    5


/*  PIF bit index  */
#define EXTI_u8_INT0_PIF	6
//kamel
#define EXTI_u8_INT1_PIF    7
#define EXTI_u8_INT2_PIF    5

#endif
