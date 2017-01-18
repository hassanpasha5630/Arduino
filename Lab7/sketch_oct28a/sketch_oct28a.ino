//#include <LiquidCrystal.h>
//
//  //Hassan Pasha
//// Hpasha2 

// pins used for lcd , 4 = 14  , 5 = 13 , 5= 12 ,

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
attachInterrupt(digitalPinToInterrupt(3), blink, CHANGE);
attachInterrupt(digitalPinToInterrupt(2), blink, CHANGE);
}

void loop(){


 


//if(digitalRead(Button)==LOW && digitalRead(Button2)==LOW){
  if(state ==0){
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

//if(digitalRead(Button2)==HIGH){
if(state == 1){
 Serial.println("Intereupt Has Been Recived");
 Serial.println("Press button 2 to contunue");
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Interupt!Press 2");

}
 //delay(5000);


//   X =0 ;
//  lcd.clear();
//  Serial.println("WE HAVE BEEN WAITINGFOR :" );
//  Serial.println(X); 
//  lcd.setCursor(0,0);
//  lcd.print("Time Elasped:");
//  lcd.setCursor(13,0);
//  lcd.print(X);



}
  void blink(){
    if(state == 0){
      X=0;
    }
 state = !state;

//    X =0 ;
//  lcd.clear();
//  Serial.println("WE HAVE BEEN WAITINGFOR :" );
//  Serial.println(X); 
//  lcd.setCursor(0,0);
//  lcd.print("Time Elasped:");
//  lcd.setCursor(13,0);
//  lcd.print(X);



 
// Serial.println("Intereupt Has Been Recived");
// Serial.println("Press button 2 to contunue");
// lcd.clear();
// lcd.setCursor(0,0);
// lcd.print("Interupt!Press 2");
// delay(20000);

}



