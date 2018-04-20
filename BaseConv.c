#include "BaseConv.h"
#include "Common.h"

void twelveToSixten(U16 *raw_data, S16 *converted_data, U16 num_of_elements)
{
    S16 converted_word;

    for(U16 i = 0; i < num_of_elements; i++)
    {
        //take 12 bit word, shift it by 4 bit to the left, then divide by 4 this should convert to 
        converted_word = (S16) (*(raw_data+i) << 4 )/(1<<4);
       *(converted_data+i) = converted_word;
    }

}
