#include "BaseConv.h"
#include "Common.h"

/*This function takes 16 bit Unsigned array holding 12bit data then, convert and store the data as 16 bit signed*/

void twelveToSixten(U16 *raw_data, S16 *converted_data, U16 num_of_elements)
{
    S16 converted_word;

    for(U16 i = 0; i < num_of_elements; i++)
    {
        //Shift 12 bit word by 4 bit to the left, then divide by 4 to set the MSB if value is negative. 
        converted_word = (S16) (*(raw_data+i) << 4 )/(1<<4);
       *(converted_data+i) = converted_word;
    }

}
