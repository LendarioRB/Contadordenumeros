


#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20, 16, 2);
int delay_t = 500;
int j;


void setup()
{
	lcd.init();
  	lcd.backlight();
  
}

void loop()
{
 	
   for(j=1; j<=400; j= j+1)
   {
     lcd.setCursor(0, 0);
     lcd.print(j);
     delay(delay_t);
   }
  
    
  	
}