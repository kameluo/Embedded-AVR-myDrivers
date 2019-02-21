#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "UART_Reg.h"
#include "UART_priv.h"
#include "UART_config.h"
#include "UART_init.h"

void UART_voidInit(void)
{
	u8 Local_u8UCSRC = 0x80;
	UBRRL=BR;
	UCSRA=0;
	UCSRB=0;

	#if DOUBLE_UART_RATE==ENABLE
		SETBIT(UCSRA,U2X);
	#endif

	/*choose UCSRC to write on it*/

	SETBIT(Local_u8UCSRC,URSEL);
	UCSRC |= (PARITY_SELECT<<UPM1);

	#if NUM_OF_STOP_BITS==STOP_2
		SETBIT(Local_u8UCSRC,USBS);
	#endif
	#if OP_MODE==Synch_OP
		SETBIT(Local_u8UCSRC,UMSEL);
	#endif

	#if CHAR_SIZE==CHAR_SIZE_6
		SETBIT(Local_u8UCSRC,UCSZ0);
	#elif CHAR_SIZE==CHAR_SIZE_7
		SETBIT(Local_u8UCSRC,UCSZ1);
	#elif CHAR_SIZE==CHAR_SIZE_8
		SETBIT(Local_u8UCSRC,UCSZ1);
		SETBIT(Local_u8UCSRC,UCSZ0);
	#elif CHAR_SIZE==CHAR_SIZE_9
		SETBIT(Local_u8UCSRC,UCSZ1);
		SETBIT(Local_u8UCSRC,UCSZ0);
		SETBIT(UCSRB,UCSZ2);
	#endif

	#if	TX_ENABLE==ENABLE
		SETBIT(UCSRB,TXEN);
	#endif
	#if RX_ENABLE==ENABLE
		SETBIT(UCSRB,RXEN);
	#endif

	UCSRC=Local_u8UCSRC;
}
 
void UART_voidSend(u8 Data)
{
	UDR=Data;
	/*wait until transmission complete*/
	while((GETBIT(UCSRA,6))==0);
	/*clear flag as it isn't cleared by HW*/
	SETBIT(UCSRA,6);
	return;
}

u8 UART_voidReceive(void)
{
	while((GETBIT(UCSRA,7))==0);
	return UDR;
}
