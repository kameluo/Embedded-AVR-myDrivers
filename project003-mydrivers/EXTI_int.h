/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 24/2/2018		                     */
/* version : V01		                     */

#ifndef _EXTI_INIT_H
#define _EXTI_INIT_H
/* Description : Initialize EXTI mode   */
void EXTI_voidInitialize(void);


/* Description : enable EXTI  0   */
void EXTI_voidEnableInt0(void);


/* Description : disable EXTI  0   */
void EXTI_voidDisableInt0(void);

/* Description : Set call back function   */
void EXTI_voidSetInt0CallBack(void(*Copy_pfCallBack)(void));




#endif
