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
  Serial.begin(9560);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Date);
  // delaying until the input has been entered 
    while(1){
      if(Serial.available()==1){
        break ;
    }
  
  
  }
  if(Serial.available()==1){

       //lcd.setCursor(1,4);
       //lcd.print("/");
       //lcd.setCursor(1,6);
       //lcd.print("/");
  
       Date_userinput = Serial.readString();
       int size_Date = Date_userinput.length();
       Parse_input_Date(Date_userinput);
       if(size_Date ==10){
          Serial.println(Date_userinput);
       
         // Dates_Function(months,days,years);
        //  lcd.setCursor(0,0);
         // lcd.print(Date_userinput);
      }
        if(size_Date != 10 ){
        Serial.println("Date was input , but was not in the write format , Please reEnter");
        Serial.println("Date will stay the same till format Entered Correct");
        }
  
  }
  Serial.println(Time);
  // delaying until the input has been entered 
    while(1){
      if(Serial.available()==1){
        break ;
    }
  }
  if(Serial.available()==1 ){
    Time2 = Serial.readString();
    //Serial.println(Time2);
    Parse_inout(Time2);


  //  Serial.println(Time2);
    //---------------------------//
    Serial.print("Hours:");
    Serial.println( Hours);
      Serial.print("Mins:");
    Serial.println( Min);
      Serial.print("Secs:");
      Serial.println( Sex);
   // lcd.setCursor(1,3);
  //  lcd.print("/");
 //   lcd.setCursor(1,5);
   Clock(Sex,Min,Hours);
    
 }
}

void Parse_input_Date(String Date){
  String Month ;
  String Day ;
  String Year;

  Month = Date.substring(0,Date.indexOf("/"));
  Day = Date.substring(5,Date.indexOf("/")+1);
  Year=Date.substring(6);

  /* 
  Serial.println(Month);
  Serial.println(Day);
  Serial.println(Year);
*/
 // int yr = Serial.parseInt();
//  int d = Serial.parseInt();
 // 1993 2

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
}


//void Clock(int someinput, int someinput1, int someinput2){
  void Clock(int i , int j , int k){
    byte  someinput = (byte) i;
    byte someinput1 = (byte) j ;
    byte someinput2 = (byte) k;

   


    
//   int i = 0 ; 
   while(1){
      // if(someinput > 60 ) {
      //  Serial.println("Sec over 60 reEnter");
      //  break ;
      // }
  //  if(someinput1 > 60){
      //  Serial.println("Min over 60 reEnter");
     // break;
   // }
    //if(someinput2  > 24){
    //    Serial.println("Hr over 12 reEnter");
   //   break;
 //   }

     Dates_Function(months,days,years);
    
     Serial.print("Sec");
      Serial.println(someinput);
//break;
       Serial.print("min:");
      Serial.println(someinput1);
    
      Serial.print("Hrs:");
      Serial.println(someinput2);
       
         lcd.setCursor(10,1);
         lcd.print(someinput);
         delay(600);
       lcd.setCursor(9,1);
         lcd.print("/");
        
         
       lcd.setCursor(7,1);
       lcd.print(someinput1);
       //delay(200);

       lcd.setCursor(5,1);
       lcd.print("/");

       lcd.setCursor(3,1);
       lcd.print(someinput2);

       //  Serial.println(Date_userinput);
         //break;
      //someinput = 1;
      someinput = someinput+1;
   //   someinput++;
      if(someinput == 60){
        // someinput = 0;
         lcd.setCursor(10,1);
         lcd.print(someinput);
         lcd.clear();
         lcd.setCursor(0,0);
        // lcd.print(Date_userinput);
      //  Dates_Function(months,days,years);
        someinput = 0;
         someinput1 = someinput1 +1 ;
         //someinput= 000;
        
      }
      
      if(someinput1 == 60 && someinput2 <= 24 ){
        someinput2 = someinput2 + 1 ;
        someinput1 = 00;
        
        
      }

      if(someinput2 > 24 ){
          someinput2 = 0;
          someinput1 = 00;
          someinput = 00;
          

        //  break;
         }



  
      if(Hours == 0 && Min==0 && Sex == 0){

               days = days+1 ;
                 lcd.setCursor(10,0);
                 lcd.clear();
                 Dates_Function(months,days,years);
                         
             }
      
  
  }

        Serial.println("ERROR TIME NOT RIGHT");
          someinput2 = 00;
          someinput1 = 00;
          someinput = 00;
  
     
 }


 void Dates_Function(int m , int d, int y ){

  
     Serial.print("Month");
      Serial.println(m);

     Serial.print("Day:");
      Serial.println(d);
    
  //    Serial.print("Year:");
      Serial.println(y);
       
         lcd.setCursor(10,0);
         lcd.print(y);
//         delay(600);
       lcd.setCursor(9,0);
         lcd.print("/");
        
         
       lcd.setCursor(7,0);
       lcd.print(d);
       //delay(200);

       lcd.setCursor(5,0);
       lcd.print("/");

       lcd.setCursor(3,0);
       lcd.print(m);



//      if(Hours == 0 && Min==0 && Sex == 0){

              //   days = days+1 ;
              //   lcd.setCursor(10,0);
             //    lcd.clear();
           //      Dates_Function(months,days+1,years);
                         
          //   }
          
      
       //  Serial.println(Date_userinput);
         //break;
      //someinput = 1;
   //   someinput = someinput+1;
   //   someinput++; 
  }
    

  


