#include<LiquidCrystal.h>
// Hassan Pasha
// Hpasha2
//global Variables 
int screen_size = 16;
int screen_size_hight= 2;
int Pointer = 1 ;
int Light ; 
LiquidCrystal lcd(12, 11, 10, 9, 8, 7); // aurdrnio connection set up 
void setup() 
{
  // put your setup code here, to run once:

  lcd.begin(screen_size,screen_size_hight);

 
}

void loop() 
{
  Light = analogRead(Pointer);
  // setting cursor below 
  lcd.setCursor(0,1);

 
  // conditions for different light settings 

  if (Light < 150)
  {
    lcd.print("Dark");
    lcd.print(Light);
  }

  else if (Light >= 150 && Light < 410)
  {
    lcd.print("Partially Dark");
        lcd.print(Light);
  }

  else if (Light >= 540 && Light < 670)
  {
    lcd.print("Partially lit");
        lcd.print(Light);
  }

  else if (Light >= 410 && Light < 540)
  {
    lcd.print("Medium Lighting");
        lcd.print(Light);
  }

  else if (Light >= 670)
  {
     lcd.print("Full Light");
        lcd.print(Light);
  }
  
  
  delay(1000);
  lcd.clear();


  
  // put your main code here, to run repeatedly:

}
