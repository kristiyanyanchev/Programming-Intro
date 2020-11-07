#include <iostream>
#include <math.h>
int main()
{
   
    int input1, input2;
    int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12;
    int hour1=0, hour2=0;
    int hour_output1, hour_output2, min_output1,min_output2;
    bool input1_invalid_time, input2_invalid_time;
    int isError = scanf("%4i %4i",&input1,&input2);

    //Format check
    if (input1 < 999 || input1 > 10000 || input2 < 999 || input2 > 10000 || isError != 2)
    {
        printf("Wrong Format! \n");
        printf("Right Format is \"<four number digit> <four number digit>\" \n");

    }

    else
    {
        //TODO Check format
        std::cout << isError;

        bit0 = input1%2;
        input1 /=2;
        bit1 = input1%2;
        input1 /=2;
        bit2 = input1%2;
        input1 /=2;
        bit3 = input1%2;
        input1 /=2;
        bit4 = input1%2;
        input1 /=2;
        bit5 = input1%2;
        input1 /=2;
        bit6 = input1%2;
        input1 /=2;
        bit7 = input1%2;
        input1 /=2;
        bit8 = input1%2;
        input1 /=2;
        bit9 = input1%2;
        input1 /=2;
        bit10 = input1%2;
        input1 /=2;
        bit11 = input1%2;
        input1 /=2;
        bit12 = input1%2;
        input1 /=2;

        if (bit12 == 0)
        {
            hour1 = 2 * bit11+ 1 * bit10;
            hour2 = 8 * bit9 + 4 * bit8 + 2 * bit7 + 1 * bit6;
            hour_output1 = hour1 *10 + hour2;
            min_output1 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;

            //validating time
            if (hour_output1 > 23 || min_output1 > 59)
            {
                input1_invalid_time = true;
            }
            else
            {
                if (hour_output1 > 12)
                {
                    hour_output1 -= 12;
                }
            }
            
            

            

            

            
            
        }
        else
        {
            

            hour1 = 2*bit11+ 1*bit10;
            hour2 = 8*bit9 + 4*bit8+ 2*bit7+1*bit6;
            hour_output1 = hour1 *10 + hour2;
            min_output1 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;
            //validating time
             if (hour_output1 > 12 || min_output1 > 59)
            {
                input1_invalid_time = true;
            }
            
        }
        

        bit0 = input2%2;
        input2 /=2;
        bit1 = input2%2;
        input2 /=2;
        bit2 = input2%2;
        input2 /=2;
        bit3 = input2%2;
        input2 /=2;
        bit4 = input2%2;
        input2 /=2;
        bit5 = input2%2;
        input2 /=2;
        bit6 = input2%2;
        input2 /=2;
        bit7 = input2%2;
        input2 /=2;
        bit8 = input2%2;
        input2 /=2;
        bit9 = input2%2;
        input2 /=2;
        bit10 = input2%2;
        input2 /=2;
        bit11 = input2%2;
        input2 /=2;
        bit12 = input2%2;
        input1 /=2;

        if (bit12 == 0)
        {
            hour1 = 2 * bit11+ 1 * bit10;
            hour2 = 8 * bit9 + 4 * bit8 + 2 * bit7 + 1 * bit6;
            hour_output2 = hour1 *10 + hour2;
           
            min_output2 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;

            //validating time
            if (hour_output2 > 23 || min_output2 > 59)
            {
                input2_invalid_time = true;
            }
            else
            {
                if (hour_output2 > 12)
                {
                    hour_output2 -= 12;
                }
            }
            
            
        }
        else
        {
            hour1 = 2*bit11+ 1*bit10;
            hour2 = 8*bit9 + 4*bit8+ 2*bit7+1*bit6;
            hour_output2 = hour1 *10 + hour2;
            min_output2 = 32 * bit5  + 16 * bit4 + 8 * bit3 + 4 * bit2 + 2 * bit1 + 1 * bit1;
            if (hour_output2 > 12 || min_output2 > 59)
            {
                input2_invalid_time = true;
            }
        }
        if (input1_invalid_time || input2_invalid_time)
        {
            printf("Invalid Time");
        }
        else
        {
            std::cout<<hour_output1<<":"<< min_output1 <<std::endl;
            std::cout<<hour_output2<<":"<< min_output2 <<std::endl;
             //printing in format

        printf("diff %02u:%02u \n", abs(hour_output1 - hour_output2), abs(min_output1 - min_output2));
        }
       
    }
    return 0;
}