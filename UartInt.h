
#ifndef	UartInt_h

#define	UartInt_h


#include "Common.h"
#include "Board.h"

#define ascii_minus 45
#define ascii_num_offset 48
U8 int_buffer[32];
void uputInt(S32 a, USART_TypeDef* USARTx);

#endif
