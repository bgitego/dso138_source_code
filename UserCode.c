#include "UserCode.h"
#include "libdso138.h"
#include "BaseConv.h"

volatile U32  currentTickVal,previousTickVal,deltaTickValue;

void UsrCode()
{
    if(BitTest(GetDsoStatus(),DSO_CaptureDone))
    {
        twelveToSixten(&SampleBuf[0], &conv_record_buffer[0], GetRecLen());

        for(U16 i = 0; i< RecLenMax; i++)
        {
         uputDec(i, USART1);   
         uputs((U8 *) ":", USART1);
         uputDec(*(conv_record_buffer+i), USART1);   
         uputs((U8 *) "\n\r", USART1);
        }
    }
    //Current Voltage Sensitivity
   /* uputs((U8 *)"\rCurrent Voltage Sensitivity: 0x", USART1);
    uputHex(GetVSen(), USART1);    
    uputs((U8 *) "\n\r", USART1);

    //Current Couple Setting
    uputs((U8 *)"\rCurrent Couple Setting: ", USART1);
    uputDec(GetCpl(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Vertical Position
    uputs((U8 *)"\rCurrent Vertical Position: ", USART1);
    uputDec(GetVPos(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Time Base 
    uputs((U8 *)"\rCurrent Time Base: ", USART1);
    uputDec(GetTimebase(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Horizontal Position
    uputs((U8 *)"\rCurrent Horizontal Position: ", USART1);
    uputDec(GetHPos(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Trigger Mode
    uputs((U8 *)"\rCurrent Trigger Mode: ", USART1);
    uputDec(GetTrigMode(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Trigger Slope
    uputs((U8 *)"\rCurrent Trigger Slope: ", USART1);
    uputDec(GetTrigEdge(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Trigger Level
    uputs((U8 *)"\rCurrent Trigger Level: ", USART1);
    uputDec(GetTrigLvl(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Record Length
    uputs((U8 *)"\rCurrent Record Length: ", USART1);
    uputDec(GetRecLen(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Vertical Position Offeset
    uputs((U8 *)"\rCurrent Position Offeset: ", USART1);
    uputDec(GetVPosOfs(), USART1);    
    uputs((U8 *) "\n\r", USART1);   
  
    //Current DSO Engine Status
    uputs((U8 *)"\rCurrent DSO Engine Status: 0x", USART1);
    uputHex(GetDsoStatus(), USART1);    
    uputs((U8 *) "\n\r", USART1);   

    //Current Sample in Buffer only Rolling Mode
    uputs((U8 *)"\rValue of Current Buffer: ", USART1);
    uputDec((*CurrentSample), USART1);    
    uputs((U8 *) "\n\r", USART1);   
    
   
    // extern	U16	*SampleBuf;
    //extern	U16	*CurrentSample;

    //End Of Records
    uputs((U8 *)"****************", USART1);
    uputs((U8 *) "\n\r", USART1);         
*/
}
