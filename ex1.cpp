#include<iostream>
#include<math.h>
int main(){
    int rect1_x, rect1_y, rect1_l, rect1_h, rect2_x, rect2_y, rect2_l, rect2_h;
    int output_l = 0, output_h = 0, output_area;
    std::cin >> rect1_x >> rect1_y;
    std::cin >> rect1_l >> rect1_h;

    std::cin >> rect2_x >> rect2_y;
    std::cin >> rect2_l >> rect2_h;

    //check for x intersection
    //
    if (rect1_x < rect2_x && rect2_x < rect1_x + rect1_l)
    {
        if (rect2_x + rect2_l < rect1_x + rect1_x + rect1_l)
        {
            output_l = rect2_l; 
        }
        else
        {
            output_l = std::abs(rect1_x + rect1_l - rect2_x);
        }
        
    } 
    else if(rect1_x < rect2_x + rect2_l && rect2_x + rect2_l < rect1_x+rect1_l)
    {
       if (rect2_x > rect1_x)
       {
           output_l = rect2_l;
       }
       else
       {
           output_l = std::abs(rect2_x + rect2_l - rect1_x);
       }
       
       
    }
    else if (rect2_x < rect1_x && rect1_x + rect1_l < rect2_x + rect2_l)
    {
        output_l = rect1_l;
    }
    
    if (rect1_y < rect2_y && rect2_y < rect1_y + rect1_h)
    {
        if (rect2_y + rect2_h < rect1_y + rect1_y + rect1_h)
        {
            output_h = rect2_h;
        }
        else
        {
            output_h = std::abs(rect1_y + rect1_h - rect2_y);
        }
        
    } 
    else if(rect1_y < rect2_y + rect2_h && rect2_y + rect2_h < rect1_y + rect1_h)
    {
       if (rect2_y > rect1_y)
       {
           output_h = rect2_h;
       }
       else
       {
           output_h = std::abs(rect2_y + rect1_y - rect1_h);
       }
       
       
    }
    else if (rect2_y < rect1_y && rect1_y + rect1_h < rect2_y + rect2_h)
    {
        output_h = rect1_h;
    }
    std::cout << output_h * output_l << std::endl;

    return 0;
}