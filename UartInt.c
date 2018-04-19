#include "UartInt.h"


//This code tekes in a 32bit Signed Integer and output, the value to the UART as a string of char.

void uputDec(S32 a,USART_TypeDef* USARTx)
{
    volatile S8 index = 0;
    volatile U8 isNegative = 0;

   if (a & 0xF0000000)
    {
        isNegative = 1;
	    a =((~(a))+1);
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


//This function takes a decimal number, convert it to hex then ouput to uart

void uputHex(S32 a,USART_TypeDef* USARTx)
{
    volatile S8 index = 0;

    //While number is greater then 16, store the remainder as value (A-F) in array. 

    while(a >= 0x10)
    {
        //If remainder of (number/16) greater then 10, then send letter (A -F), otherwise store value as number(0-9)
        if((a%0x10)  > 0x0A )
        {
           *(int_buffer + index) = (((a%0x10)-0x0A) + ascii_letter_A_offset );
        }
        else
        {
           *(int_buffer + index) = ((a%0x10) + ascii_num_offset );
        }

        index++;
        a = a/0x10;
    }
    // if last value is greater then 10 send letter(A-F) else send (0-9)
    if((a%0x10)  > 0x0A )
    {
        *(int_buffer + index) = (((a%0x10)-0x0A) + ascii_letter_A_offset );
    }
    else
    {
        *(int_buffer + index) = ((a%0x10) + ascii_num_offset );
    }
    
    //Send all values in buffer over uart    
    for(index; index >= 0; index--) 
    {
        UartPutc(int_buffer[index],USARTx);
    }
    
}