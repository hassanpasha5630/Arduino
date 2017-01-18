//Hassan Pasha
//Hpasha2


#include <Time.h>
#include <TimeLib.h>
#include<LiquidCrystal.h>

String Time = "Enter Time in format Hrs/Min/Sec 12hr ";
String Date = "Enter Date in format as mm/dd/yyyy";

String Date_userinput ; 
int Time_userinput;
String Time2;

int Hours ;
int Min;
int Sex;


int months ;
int years;
int days ;

int width = 16;
int height = 2 ; 


LiquidCrystal lcd(12,11,5,4,3,2);



void setup() {
  // put your setup code here, to run once:
  lcd.begin(width,height);
  Serial.begin(9600);
 //setTime(Hours,Min,Sex,months,days,years); 
}


void loop(){

//setTime(Hours,Min,Sex,months,years,days);
 Serial.println(Date);
  // delaying until the input has been entered 
    while(1){
      if(Serial.available()==1){
        break ;
    }
  
    }
    if(Serial.available()==1){
  Date_userinput = Serial.readString();
  Parse_input_Date(Date_userinput);
//  Serial



     Serial.println(months);
  Serial.println(days);
  Serial.println(years);
  
   //Funtions(Hours,Min,Sex,months,days,years); 
  //Serial.println(months);
  //Serial.println(month());
 
  lcd.setCursor(0,0);
  lcd.print(month());
  lcd.print("/");
  lcd.print(day());
  lcd.print("/");
  lcd.print(year());
  delay(300);

  Serial.print(month());
  Serial.print("/");
  Serial.print(day());
  Serial.print("/");
  Serial.print(year());
  delay(300);
  
  }
 // delay(1000);

   Serial.println(Time);
  // delaying until the input has been entered 
    while(1){
       // delay(10000);
      if(Serial.available()==1){
        break ;
    }

    
   // setTime(Hours,Min,Sex,months,days,years); 
         Time2 = Serial.readString();
        Parse_inout(Time2);
        Serial.println(Hours);
        Serial.println(Min);
        Serial.println(Sex);
        lcd.setCursor(0,1);
        lcd.print(hour());
        lcd.print("/");
        lcd.print(minute());
        lcd.print("/");
        lcd.print(second());
  
    
    if(Sex == 60){
      lcd.setCursor(0,1);
      lcd.clear();
      
    }
  setTime(Hours,Min,Sex,days,months,years);
}

 // setTime(Hours,Min,Sex,months,days,years); 
}
void Parse_input_Date(String Date){
  String Month ;
  String Day ;
  String Year;

Serial.println(Date);
  Month = Date.substring(0, 2);//Date.indexOf("/"));
  Day = Date.substring(3,5); //Date.indexOf("/")+1);
  Year=Date.substring(6);
  
  months=Month.toInt();
  days =Day.toInt();
  years = Year.toInt();


}

void Parse_inout(String someinput){

  String Mins ; 
  String Hrs ; 
  String Sec;

  Hrs = someinput.substring(0,someinput.indexOf("/"));
  Mins =someinput.substring(5,someinput.indexOf("/")+1);
  Sec = someinput.substring(6);
 
  /*
  Serial.println(Hrs);
  Serial.println(Mins);
  Serial.println(Sec);
*/
  Hours = Hrs.toInt();
  Min = Mins.toInt();
  Sex = Sec.toInt();

//  Serial.println(Hours);
//  Serial.println(Min);
//  Serial.println(Sex);
}


void Funtions( int a , int b , int c , int d ,int e ,int f ){
        
        setTime(a,b,c,d,e,f); 
        

}

