// Hassan Pasha 



int pin ;
int pin2 ; 
int pin3 ; 

void setup(){

 Serial.begin(9600);
  
}

void loop(){

  pin = analogRead(A0);

  Serial.println(pin);

  delay (10) ; 

  
  pin2 = analogRead(A1); 

  Serial.println("The sensor : " ) ; 
  Serial.println(pin2);

  delay(60);


// pin3 = analogRead(A2);
//
// Serial.println("Sensor 2 :");
// Serial.println(pin3 ) ; 
//
// delay(100);

 
 // delay(200);
}

