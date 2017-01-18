//#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#include<LiquidCrystal_I2C.h>

char array1[] ="Hassan";
char array2[]= "Hello World";
int tim = 250 ; 

LiquidCrystal_I2C led(0x27,16,2) ; 

void setup(){
  led.init() ; 
  led.backlight();
}

void loop (){ 
   led.setCursor (15,0);

   for(int positionCounter1 = 0 ; positionCounter1 < 12, ; positionCounter1++){

       led.scrollDisplayLeft();
       led.print(array1[positionCounter1]) ; 
       delay(tim);
       led.clear();
       led.setCursor(15,1);  
       
   }
   for( int positionCounter = 0 ; positionCounter < 12 ; positionCounter++ ) {
      led.scrollDisplayLeft();
      led.print(array2[positionCounter]);
      delay(tim);
      led.clear();
   } 
   }


