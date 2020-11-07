#include<iostream>
#include<math.h>

bool is_leap_year(int year){
    if(year%400 == 0 || (year%4 ==0 && year%100 != 0))
    {
        return true;
    }
    return false;
}

int calculate_leap_years_before_current_year(int year){
    int years_multiple_of_400 = year/400;
    int years_multiple_of_100 = year/100;
    int years_multiple_of_4 = year/4;

    return years_multiple_of_4 + years_multiple_of_400 - years_multiple_of_100;

}



int days_in_month(int month,int year){
    if (month == 7 || month == 8 )
    {
        return 31;
    }
    else if (month == 2)
    {
        if (is_leap_year(year))
        {
            return 29;
        }
        return 28;
        
    }
    else if ( month < 7)
    {
        if (month%2 == 0)
        {
            return 30;
        }
        
        return 31;
    }
    else 
    {
         if (month%2 == 0)
        {
            return 31;
        }
        
        return 30;
    }
    
    
    
    
}
int calculate_days_from_start_of_current_year(int day, int month,int year)
{
    if (month == 1 )
    {
        return 0 + day;
    }
    else if (month == 2)
    {
        return days_in_month(1,year) + day;
    }
    else if (month == 3)
    {
        return days_in_month(1,year) + days_in_month(2,year) + day;
    }
    else if (month == 4)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) + day;
    }
    else if (month == 5)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) + days_in_month(4,year) + day;
    }
    else if (month == 6)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) + days_in_month(4,year) + days_in_month(5,year) + day;
    }
    else if (month == 7)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) 
        + days_in_month(4,year) + days_in_month(5,year) + days_in_month(6,year)+ day;
    }
    else if (month == 8)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) 
        + days_in_month(4,year) + days_in_month(5,year) + days_in_month(6,year) + days_in_month(7,year) + day;
    }
    else if (month == 9)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) 
        + days_in_month(4,year) + days_in_month(5,year) + days_in_month(6,year) + days_in_month(7,year) + days_in_month(8,year) + day;
    }
    else if (month == 10)
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) 
        + days_in_month(4,year) + days_in_month(5,year) + days_in_month(6,year) + days_in_month(7,year) + days_in_month(8,year) 
        + days_in_month(9,year) + day;
    }
    else if (month == 11)
    {
       return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) 
        + days_in_month(4,year) + days_in_month(5,year) + days_in_month(6,year) + days_in_month(7,year) + days_in_month(8,year) 
        + days_in_month(9,year) + days_in_month(10,year) + day;
    }
    else
    {
        return days_in_month(1,year) + days_in_month(2,year) + days_in_month(3,year) 
        + days_in_month(4,year) + days_in_month(5,year) + days_in_month(6,year) + days_in_month(7,year) + days_in_month(8,year) 
        + days_in_month(9,year) + days_in_month(10,year) + days_in_month(11,year) + day;
    }
       
}

int calculate_days_from_0_years(int day, int month, int year)
{
    int leap_years = calculate_leap_years_before_current_year(year);
    int days_before_current_year = 365*year + leap_years;
    return days_before_current_year + calculate_days_from_start_of_current_year(day,month,year);

    

}
int seconds_from_start_of_the_day(int hour, int minute, int second){
    return hour * 60 * 60 + minute * 60 + second;
}


int main(){
    //date 1;
    int day1, month1, year1, hour1, minute1, second1;
    bool input1_invalid = false;
    if (scanf("%d.%d.%d %d:%d:%d",&day1, &month1, &year1, &hour1, &minute1, &second1) != 6)
    {
        input1_invalid = true;
    }
    
    if (day1 > 31 || day1 < 1 || month1 > 12 || month1 < 1 
    || year1 > 9999 || year1 < 0 || hour1 > 23 || hour1 < 0 
    || minute1 > 59 || minute1 < 0 || second1 > 59 || second1 <0)
    {
        input1_invalid == true;
    }

    int day2, month2, year2, hour2, minute2, second2;
    bool input2_invalid = false;
    if (scanf("%d.%d.%d %d:%d:%d",&day2, &month2, &year2, &hour2, &minute2, &second2) != 6)
    {
        input2_invalid = true;
    }
    
    if (day2 > 31 || day2 < 1 || month2 > 12 || month2 < 1 
    || year2 > 9999 || year2 < 0 || hour2 > 23 || hour2 < 0 
    || minute2 > 59 || minute2 < 0 || second2 > 59 || second2 <0)
    {
        input2_invalid == true;
    }

    int day_output, hour_output, minute_output, second_output;
    if (input1_invalid || input2_invalid)
    {
        printf("Invalid date/time");
    }
    else
    {
        int days_from_0_year1 = calculate_days_from_0_years(day1,month1,year1),days_from_0_year2 = calculate_days_from_0_years(day2,month2,year2);
        int hour_output, minute_output, second_output;
        if (days_from_0_year1 == days_from_0_year2)
        {
            int second_diff = std::abs(seconds_from_start_of_the_day(hour1,minute1,second1) - seconds_from_start_of_the_day(hour2,minute2,second2)); 
            hour_output = second_diff / 3600;
            second_diff = (second_diff / 3600 == 0) ? second_diff: second_diff % 3600;
            minute_output = second_diff / 60;
            second_diff = (second_diff / 60 == 0) ? second_diff : second_diff % 60;
            second_output = second_diff;
            day_output = std::abs(days_from_0_year1 - days_from_0_year2);
        }
        else if (days_from_0_year1 > days_from_0_year2)
        {
            int second_fsd1 = seconds_from_start_of_the_day(hour1,minute1,second1), second_fsd2 = seconds_from_start_of_the_day(hour2,minute2,second2);
            if (second_fsd1 >= second_fsd2)
            {
                int second_diff = second_fsd1 - second_fsd2; 
                hour_output = second_diff / 3600;
                second_diff = (second_diff / 3600 == 0) ? second_diff: second_diff % 3600;
                minute_output = second_diff / 60;
                second_diff = (second_diff / 60 == 0) ? second_diff : second_diff % 60;
                second_output = second_diff;
                day_output = days_from_0_year1 - days_from_0_year2;
            }
            else
            {
                days_from_0_year1--;
                second_fsd1 += 24*60*60;

                int second_diff = second_fsd1 - second_fsd2; 
                hour_output = second_diff / 3600;
                second_diff = (second_diff / 3600 == 0) ? second_diff: second_diff % 3600;
                minute_output = second_diff / 60;
                second_diff = (second_diff / 60 == 0) ? second_diff : second_diff % 60;
                second_output = second_diff;
                day_output = days_from_0_year1 - days_from_0_year2;

            }
            
            
            
        }
        else
        {
            int second_fsd1 = seconds_from_start_of_the_day(hour1,minute1,second1), second_fsd2 = seconds_from_start_of_the_day(hour2,minute2,second2);
            if (second_fsd2 >= second_fsd1)
            {
                int second_diff = second_fsd2 - second_fsd1; 
                hour_output = second_diff / 3600;
                second_diff = (second_diff / 3600 == 0) ? second_diff: second_diff % 3600;
                minute_output = second_diff / 60;
                second_diff = (second_diff / 60 == 0) ? second_diff : second_diff % 60;
                second_output = second_diff;
                day_output = days_from_0_year2 - days_from_0_year1;
            }
            else
            {
                days_from_0_year2--;
                second_fsd2 += 24*60*60;

                int second_diff = second_fsd2 - second_fsd1; 
                hour_output = second_diff / 3600;
                second_diff = (second_diff / 3600 == 0) ? second_diff: second_diff % 3600;
                minute_output = second_diff / 60;
                second_diff = (second_diff / 60 == 0) ? second_diff : second_diff % 60;
                second_output = second_diff;
                day_output = days_from_0_year2 - days_from_0_year1;

            }
        }
        if (day_output == 0)
        {
             printf("%02d:%02d:%02d \n",hour_output,minute_output,second_output);
        }
        else
        {
            printf("%d-%02d:%02d:%02d \n",day_output,hour_output,minute_output,second_output);
        }
        
        
       
    }

   
    
    
    
    return 0;
}