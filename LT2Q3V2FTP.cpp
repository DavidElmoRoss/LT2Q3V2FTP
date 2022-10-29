/*
 add code where it says 
 PLACE CODE on this line
 to set up 
 void colour_change(void) 
 as 0.5 sec Periodic Interrupt
*/

// Include Section
#include "mbed.h"                           
#include "Grove_LCD_RGB_Backlight.h"        

// Hardware Definition Section
Grove_LCD_RGB_Backlight sally(D14,D15);                             

// Global Variables
short colour=0;                    

Ticker talker;

void color_change(void)
{
      colour++;                    
} 

int main(void)
{ 
                                        // PLACE CODE on this line

    sally.clear(); 
    for(;;)
    {
       if(colour==0)
       {
           sally.setRGB(0xff,0x00,0x00);
        }
        else
        if(colour==1)
        {
            sally.setRGB(0x00,0xff,0x00);   
        }
        else
         if(colour==2)
          {
             sally.setRGB(0x00,0x00,0xff);  
          }
          else
          {
              colour=0;
          }
    }
}