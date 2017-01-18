int BlueLED=9;
int GreenLED=10;
int RedLED=11;
int Button=8;
int Buzzer=6;
int Min=20;
int Max=30000;
int Gap=4996;
int Sound = 0 ; 
 
void setup() {
  // put your setup code here, to run once:

pinMode(BlueLED, OUTPUT);
pinMode(GreenLED, OUTPUT);
pinMode(RedLED, OUTPUT);
pinMode(Button, INPUT);
pinMode(Buzzer, OUTPUT);
Serial.begin(9650);

}

void loop() {
  // put your main code here, to run repeatedly:



  if(digitalRead(Button)==LOW){
    if( Min<=Sound && Sound<=Min+Gap){
  Serial.println("FUCK YOU"); // remove this 
  analogWrite(BlueLED, 125);
  analogWrite(GreenLED, 125);
  analogWrite(RedLED, 0); 
  Serial.println("The Sound stoped at the Fer : ");
  Serial.println(Sound);  
  noTone(Buzzer); // turn off buzzer 
  exit(0); // exit program 
    }
    
 if (Min+Gap<=Sound && Sound<=Min+2*Gap) {
  analogWrite(BlueLED, 125);
  analogWrite(GreenLED, 125);
  analogWrite(RedLED, 0); 
  Serial.println("The Sound stoped at the Fer : ");
  Serial.println(Sound);  
  noTone(Buzzer); // turn off buzzer 
  exit(0); // exit program 
    }
    
 if (Min+2*Gap<=Sound && Sound<=Min+3*Gap){
  analogWrite(BlueLED, 125);
  analogWrite(GreenLED, 125);
  analogWrite(RedLED, 0); 
  Serial.println("The Sound stoped at the Fer : ");
  Serial.println(Sound);  
  noTone(Buzzer); // turn off buzzer 
  exit(0); // exit program   
  }
  
 if (Min+3*Gap<=Sound && Sound<=Min+4*Gap) {
  analogWrite(BlueLED, 125);
  analogWrite(GreenLED, 125);
  analogWrite(RedLED, 0); 
  Serial.println("The Sound stoped at the Fer : ");
  Serial.println(Sound);  
  noTone(Buzzer); // turn off buzzer 
  exit(0); // exit program 
  }
  
  if (Min+4*Gap<=Sound && Sound<=Min+5*Gap){
  analogWrite(BlueLED, 125);
  analogWrite(GreenLED, 125);
  analogWrite(RedLED, 0); 
  Serial.println("The Sound stoped at the Fer : ");
  Serial.println(Sound);  
  noTone(Buzzer); // turn off buzzer 
  exit(0); // exit program 
  }
  
  else if (Min+5*Gap<=Sound && Sound<=Min+6*Gap){
  analogWrite(BlueLED, 125);
  analogWrite(GreenLED, 125);
  analogWrite(RedLED, 0); 
  Serial.println("The Sound stoped at the Fer : ");
  Serial.println(Sound);  
  noTone(Buzzer); // turn off buzzer 
  exit(0); // exit program 
  }
  
}
    if (digitalRead(Button)== HIGH){
    analogWrite(BlueLED, 0);
    analogWrite(GreenLED, 0);
    analogWrite(RedLED, 0);

     tone(Buzzer, Sound) ; 
     Sound = 20<=Sound + 1 && Sound+1<=30000;
     delay(1);
     Serial.println("Sound is :");
     Serial.println(Sound);
    
  }
}

