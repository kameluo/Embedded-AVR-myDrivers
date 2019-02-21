/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 24/2/2018		                     */
/* version : V01		                     */

#ifndef _EXTI_CONFIG_H
#define _EXTI_CONFIG_H

/* Description: External int 0 mode    */

/* Rannge:
EXTI_u8_LOW_MODE    
EXTI_u8_IOC_MODE    	//interrupt on change
EXTI_u8_FAL_MODE    
EXTI_u8_RIS_MODE    */

#define EXTI_u8_INT0_MODE  EXTI_u8_IOC_MODE
//kamel
#define EXTI_u8_INT1_MODE  EXTI_u8_IOC_MODE
#define EXTI_u8_INT2_MODE  EXTI_u8_IOC_MODE

/* Description: External Interrupt 0 Initial state */
/* Rannge:
	EXTI_u8_ENABLE_STATE 
    EXTI_u8_DISABLE_STATE							*/
#define EXTI_u8_INT0_INIT_STATE   EXTI_u8_DISABLE_STATE
//kamel
#define EXTI_u8_INT1_INIT_STATE   EXTI_u8_DISABLE_STATE
#define EXTI_u8_INT2_INIT_STATE   EXTI_u8_DISABLE_STATE

#endif
