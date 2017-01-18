#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,7,6,5,4);
// button set up below 
int LED = 12 ;
int Button = 2 ; 
int LED2 = 11 ;
int Button2 = 3 ;
// Lcd 

int width =16; 
int height =2 ;

int X = 0 ;
int state = 0 ;
void setup(){
pinMode(LED,OUTPUT);
pinMode(Button,OUTPUT);
pinMode(Button2,OUTPUT);
pinMode(LED2,OUTPUT);
Serial.begin(9560);
pinMode(2, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(3), blink2, CHANGE);
attachInterrupt(digitalPinToInterrupt(2), blink, CHANGE);
}

void loop(){


if(state == 1){
 Serial.println("Intereupt Has Been Recived");
 Serial.println("Press button 2 to contunue");
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Interupt!Press 2");
}else {
   lcd.clear();
  Serial.println("WE HAVE BEEN WAITINGFOR :" );
  Serial.println(X); 
  lcd.setCursor(0,0);
  lcd.print("Time Elasped:");
  lcd.setCursor(13,0);
  lcd.print(X);
  delay(600);
  X = X+1;
}
}

void blink(){
  state = 1 ;
}
void blink2(){
  X= 0 ;
  state = 0 ;
 // X = 0 ;
}


