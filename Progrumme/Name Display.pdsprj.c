#include <16F877A.H>
#use delay (clock=20MHz)
#fuses HS
#include <lcd.c>
#define use_portb_lcd

void main ()
   {
      lcd_init();
      while (TRUE) 
      {
         printf(lcd_putc, "ILove You Shanta");
         delay_ms (6000);
         printf(lcd_putc, "\f");
         delay_ms (500);
         printf(lcd_putc, "\nCodewithashim");
         delay_ms (6000);
         printf(lcd_putc, "\f");
         delay_ms (500);
      }
   
   }


