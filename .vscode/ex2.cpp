#include <iostream>
#include <math.h>
int main()
{
    int input;
    int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12;
    int hour1=0, hour2=0;
    int hour_output1, hour_output2, min_output1,min_output2;
    std::cin>>input;
    bit0 = input%2;
    input /=2;
    bit1 = input%2;
    input /=2;
    bit2 = input%2;
    input /=2;
    bit3 = input%2;
    input /=2;
    bit4 = input%2;
    input /=2;
    bit5 = input%2;
    input /=2;
    bit6 = input%2;
    input /=2;
    bit7 = input%2;
    input /=2;
    bit8 = input%2;
    input /=2;
    bit9 = input%2;
    input /=2;
    bit10 = input%2;
    input /=2;
    bit11 = input%2;
    input /=2;
    bit12 = input%2;
    input /=2;

    if (bit12 == 0)
    {
        hour1 = 2 * bit11+ 1 * bit10;
        hour2 = 8 * bit9 + 4 * bit8 + 2 * bit7 + 1 * bit6;
        hour_output1 = hour1 *10 + hour2;
        if (hour_output1 > 12)
        {
            hour_output1 -= 12;
        }
        min_output1 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;

        
        
    }
    else
    {
        hour1 = 2*bit11+ 1*bit10;
        hour2 = 8*bit9 + 4*bit8+ 2*bit7+1*bit6;
        hour_output1 = hour1 *10 + hour2;
        min_output1 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;
    }
    
    

    std::cin>>input;
    bit0 = input%2;
    input /=2;
    bit1 = input%2;
    input /=2;
    bit2 = input%2;
    input /=2;
    bit3 = input%2;
    input /=2;
    bit4 = input%2;
    input /=2;
    bit5 = input%2;
    input /=2;
    bit6 = input%2;
    input /=2;
    bit7 = input%2;
    input /=2;
    bit8 = input%2;
    input /=2;
    bit9 = input%2;
    input /=2;
    bit10 = input%2;
    input /=2;
    bit11 = input%2;
    input /=2;
    bit12 = input%2;
    input /=2;

    if (bit12 == 0)
    {
        hour1 = 2 * bit11+ 1 * bit10;
        hour2 = 8 * bit9 + 4 * bit8 + 2 * bit7 + 1 * bit6;
        hour_output2 = hour1 *10 + hour2;
        if (hour_output2 > 12)
        {
            hour_output2 -= 12;
        }
        min_output2 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;

        
        
    }
    else
    {
        hour1 = 2*bit11+ 1*bit10;
        hour2 = 8*bit9 + 4*bit8+ 2*bit7+1*bit6;
        hour_output2 = hour1 *10 + hour2;
        min_output2 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;
    }
    std::cout<<hour_output1<<":"<< min_output1 <<std::endl;
    std::cout<<hour_output2<<":"<< min_output2 <<std::endl;
    //printing in format

    printf("diff %02u:%02u \n", abs(hour_output1 - hour_output2), abs(min_output1 - min_output2));

    return 0;
}