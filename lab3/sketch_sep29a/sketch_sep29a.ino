  //Hassan Pasha
// Hpasha2 
// include the Liquid lib
#include <LiquidCrystal.h>

// below are the pin locations that are set to transmit date from the aurdrino to the curuit
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// Variables below so we can change the values in them to a different result if want . 
String Name = "HASSAN PASHA";
String Quote = " After Hardship comes ease ";

// below we are setting starting and stoping points 
int Start, Stop = 0;
int Incrementor = 16;

// regular set up depending on the screen 
void setup() {
  lcd.begin(16,2);
}

void loop() {
  //printing out the name below
  
  lcd.setCursor(0, 0);
  lcd.print(Name); // printing out what we have set Name to be 
  delay(300);
  lcd.clear();
 // setting and printing out for the Quote 
 
 lcd.setCursor(Incrementor,1); // setting position for the second Quote
 lcd.print(Quote.substring(Start,Stop));  

  // below is a function that works as the DisplayLeft but is tweaked out so we 
  // can achive the effect needed , e.g forcing the first line of text to stay sill
  // while the second line of text is forced to move(decrement) across the LED
  
   if(Start == 0 && Incrementor > 0){
    Incrementor--; // this technically is decrementing the quote so it can scroll 
    Stop++;
  }
    else if (Start == Stop){
     // force reseting 
    Start = Stop = 0;
    Incrementor = 16;
   
  }
    else if (Stop == Quote.length() && Incrementor == 0) {
    Start++;
  } 
    else {
    Start++;
     Stop++;
  }
 }

