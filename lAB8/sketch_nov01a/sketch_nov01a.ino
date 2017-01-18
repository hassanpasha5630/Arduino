
// Hassan Pasha
// Ibrahim 






int Button1 = 9;
//int Button2 = 11 ; 
int LED1 =  8  ; 
//int LED2 = 7 ;
int buttonstate1 = 0 ; 
//int buttonstate2 =0 ;
void setup(){

  pinMode(Button1,INPUT );
 // pinMode(Button2,INPUT);
 pinMode(LED1 ,OUTPUT);
 // pinMode(LED2,OUTPUT);
  Serial.begin(9600);
         digitalWrite(LED1,LOW);
}


void loop(){
  //  buttonstate1 = digitalRead(Button1);
//      buttonstate2 = digitalRead(Button2);



  if(digitalRead(Button1) == HIGH){
    while(digitalRead(Button1)==HIGH){
    }
    Serial.println(1);
    
   }
//
//  if(buttonstate2 == HIGH){
//    Serial.println(1);
//    
//    
//  }




  if(Serial.available() > 0){
     if(Serial.parseInt() == 1){
      if (digitalRead(LED1)==LOW){
     digitalWrite(LED1,HIGH);
     }
     else {
       digitalWrite(LED1,LOW);
     }
    
    }
//  delay(2000);
}
}
