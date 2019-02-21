/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 24/2/2018		                     */
/* version : V01		                     */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/io.h"

//#include "EXTI_reg.h"
#include "EXTI_int.h"
#include "EXTI_priv.h"
#include"EXTI_config.h"


/* Define Callback Variable */
static void (*EXTI_u8Int0CallBack) (void);
//kamel
static void (*EXTI_u8Int1CallBack) (void);
static void (*EXTI_u8Int2CallBack) (void);

/* Description : Initialize EXTI mode   */
void EXTI_voidInitialize(void)
{
	/* set external interrrupt mode as configured  */
	MCUCR = (MCUCR & EXTI_u8_MODE_CLEAR) | EXTI_u8_INT0_MODE;  
	//kamel
	MCUCR = (MCUCR & EXTI_u8_MODE_CLEAR) | EXTI_u8_INT1_MODE;
	MCUCR = (MCUCR & EXTI_u8_MODE_CLEAR) | EXTI_u8_INT2_MODE;
	
	/* Initialize the state   */
	#if EXTI_u8_INT0_INIT_STATE == EXTI_u8_ENABLE_STATE
	SETBIT(GICR, EXTI_u8_INT0_PIE);
	#else
		CLRBIT(GICR, EXTI_u8_INT0_PIE);
	#endif
		SETBIT(GIFR, EXTI_u8_INT0_PIF);		//b3mel clear lel flag m3 eno initialzed clear bs ana brdo msh ha trust
		
	//kamel INT1
	/* Initialize the state   */
	#if EXTI_u8_INT1_INIT_STATE == EXTI_u8_ENABLE_STATE
	SETBIT(GICR, EXTI_u8_INT1_PIE);
	#else
		CLRBIT(GICR, EXTI_u8_INT1_PIE);
	#endif
		SETBIT(GIFR, EXTI_u8_INT1_PIF);

	//kamel INT2
	/* Initialize the state   */
	#if EXTI_u8_INT2_INIT_STATE == EXTI_u8_ENABLE_STATE
	SETBIT(GICR, EXTI_u8_INT2_PIE);
	#else
		CLRBIT(GICR, EXTI_u8_INT2_PIE);
	#endif
		SETBIT(GIFR, EXTI_u8_INT2_PIF);
}


/* Description : enable EXTI  0 ISR  */
void EXTI_voidEnableInt0(void)
{
		SETBIT(GICR, EXTI_u8_INT0_PIE);
}
//kamel  enable EXTI 1
void EXTI_voidEnableInt1(void)
{
		SETBIT(GICR, EXTI_u8_INT1_PIE);
}
//kamel  enable EXTI 2
void EXTI_voidEnableInt2(void)
{
		SETBIT(GICR, EXTI_u8_INT2_PIE);
}


/* Description : disable EXTI  0  ISR  */
void EXTI_voidDisableInt0(void)
{
	CLRBIT(GICR, EXTI_u8_INT0_PIE);
}
//kamel disable EXTI 1
void EXTI_voidDisableInt1(void)
{
	CLRBIT(GICR, EXTI_u8_INT1_PIE);
}
//kamel disable EXTI 2
void EXTI_voidDisableInt2(void)
{
	CLRBIT(GICR, EXTI_u8_INT2_PIE);
}

/* Description : Set call back function   */
void EXTI_voidSetInt0CallBack(void(*Copy_pfCallBack)(void))
{
	EXTI_u8Int0CallBack = Copy_pfCallBack; 
}
//kamel set call EXTI 1
void EXTI_voidSetInt1CallBack(void(*Copy_pfCallBack)(void))
{
	EXTI_u8Int1CallBack = Copy_pfCallBack;
}
//kamel set call EXTI 2
void EXTI_voidSetInt2CallBack(void(*Copy_pfCallBack)(void))
{
	EXTI_u8Int2CallBack = Copy_pfCallBack;
}

/* Description : ISR function  */
void __vector_1(void) __attribute__((signal, used));		// el attribute lazm m3 el prototype

void __vector_1(void)
{
	EXTI_u8Int0CallBack();
}
//kamel ISR for EXTI 1
/* Description : ISR function  */
void __vector_2(void) __attribute__((signal, used));		// el attribute lazm m3 el prototype

void __vector_2(void)
{
	EXTI_u8Int1CallBack();
}

//kamel ISR for EXTI 2
/* Description : ISR function  */
void __vector_3(void) __attribute__((signal, used));		// el attribute lazm m3 el prototype

void __vector_3(void)
{
	EXTI_u8Int2CallBack();
}
