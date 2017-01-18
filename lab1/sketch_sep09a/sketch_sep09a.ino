// Hassan Pasha 
// UIN 650378806

void setup() {
  // put your setup code here, to run once:

pinMode(2,OUTPUT);
pinMode(8 , OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH); 
  delay(500);
  digitalWrite(13,LOW);
  delay(1000);
 
  // 13 line above end 
  
  digitalWrite (12,HIGH);                                                                                                                                                                      
  delay(500);
  digitalWrite(12,LOW);
  delay(1000);

  // red above
  // put your main code here, to run repeatedly:

digitalWrite(8,HIGH);
delay(200);
digitalWrite(8,LOW);
delay(200);
 
}


//void greenLight(){
 //  pinMode(8,OUTPUT);
//}

//void greenloop(){
 // digitalWrite(8,HIGH);
 // delay(500);
//}


