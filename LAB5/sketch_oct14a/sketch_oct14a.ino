

void setup() {
  // put your setup code here, to run once:

  pinMode(2,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT); // 12
  pinMode(8,OUTPUT);//8
    
}

void loop() {
  // put your main code here, to run repeatedly:
 int Pointer = A1;
 int Light = analogRead(Pointer);
 int BUZZER = analogRead(A0);

if(Light > 670)
{
  digitalWrite(2,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

else if(Light < 150 )
{
  // Dark 
  digitalWrite(12,OUTPUT);
  digitalWrite(2,OUTPUT);
  digitalWrite(8,OUTPUT);
  digitalWrite(11,OUTPUT);
}

 else if (Light >150 && Light < 410)
  {
 //   lcd.print("Partially Dark");
//        lcd.print(Light);
    //    led.


  digitalWrite(2,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);

    
  }

  else if (Light >= 410 && Light < 540)
  {
    //lcd.print("Medium Lighting");
      //  lcd.print(Light);
 
    digitalWrite(12,LOW);
    digitalWrite(2,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(11,HIGH);
  
  
 }


 
  else if (Light >= 540 && Light < 640)
  {
    //lcd.print("Medium Lighting");
      //  lcd.print(Light);
 
    digitalWrite(12,LOW);
    digitalWrite(2,LOW);
    digitalWrite(8,LOW);
    digitalWrite(11,HIGH);
  
  
 }

  int cal = 0 ; 
  cal = BUZZER * 5/1023 ;
  analogWrite(9,cal);
// delay(300);

}
