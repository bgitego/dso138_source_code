#include "UartInt.h"


//This code tekes in a 32bit Signed Integer and output, the value to the UART as a string of char.

void uputInt(S32 a,USART_TypeDef* USARTx)
{
    volatile S8 index = 0;
    volatile U8 isNegative = 0;

   if (a < 0)
    {
        isNegative = 1;
        a = -1*a;
    }

    while(a >= 10)
    {
        *(int_buffer + index) = ((a%10) + ascii_num_offset );
         index++;
         a = a/10;
    }
    
    *(int_buffer + index) = ((a) + ascii_num_offset );
    
    if(isNegative)
    {
        index++;
        *(int_buffer + index) = ascii_minus;
    }    
    for(index; index >= 0; index--) 
    {
        UartPutc(int_buffer[index],USARTx);
    }
    

}