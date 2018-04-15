#include "UserCode.h"
#include "libdso138.h"

volatile U32  currentTickVal,previousTickVal,deltaTickValue;

void UsrCode()
{
    //Current Voltage Sensitivity
    uputs((U8 *)"\rCurrent Voltage Sensitivity: ", USART1);
    uputInt(GetVSen(), USART1);    
    uputs((U8 *) "\n\r", USART1);

    //Current Couple Setting
    uputs((U8 *)"\rCurrent Couple Setting: ", USART1);
    uputInt(GetCpl(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Vertical Position
    uputs((U8 *)"\rCurrent Vertical Position: ", USART1);
    uputInt(GetVPos(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Time Base 
    uputs((U8 *)"\rCurrent Time Base: ", USART1);
    uputInt(GetTimebase(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Horizontal Position
    uputs((U8 *)"\rCurrent Horizontal Position: ", USART1);
    uputInt(GetHPos(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Trigger Mode
    uputs((U8 *)"\rCurrent Trigger Mode: ", USART1);
    uputInt(GetTrigMode(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Trigger Slope
    uputs((U8 *)"\rCurrent Trigger Slope: ", USART1);
    uputInt(GetTrigEdge(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Trigger Level
    uputs((U8 *)"\rCurrent Trigger Level: ", USART1);
    uputInt(GetTrigLvl(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Record Length
    uputs((U8 *)"\rCurrent Record Length: ", USART1);
    uputInt(GetRecLen(), USART1);    
    uputs((U8 *) "\n\r", USART1);    

    //Current Vertical Position Offeset
    uputs((U8 *)"\rCurrent Position Offeset: ", USART1);
    uputInt(GetVPosOfs(), USART1);    
    uputs((U8 *) "\n\r", USART1);   

    //End Of Records
    uputs((U8 *)"-----------------------------------------------------------------------------------------------------------", USART1);
    uputs((U8 *) "\n\r", USART1);         

}
