

//Hassan Pasha
//Hpasha2
// button wired below

int button1_on=11;
int button2_off=12;

// pins below

int lp =  3;      // the number of  pin
int lp1 =  2;      // the number of  pin
int lp2 =  7;      // the number of the  pin

int count=0;
// variables will change:

int buttonState = 0;         

 int buttonPressedOn=LOW; // button when pressed 
 
 int buttonPressedOff=LOW; // when button is not pressed 
 void setup() {
  
  pinMode(lp, OUTPUT);     
  pinMode(lp1, OUTPUT); 
  pinMode(lp2, OUTPUT); 
   
  pinMode(button1_on, INPUT); // assinging wire pin to the button 1 
  pinMode(button2_off, INPUT); //assinging button pin to button 2 
    
   
}
void loop(){
 
  int buttonOnState, buttonOffState; // the button states   
  int ledState, ledState1, ledState2; // the led states 
  
  ledState = digitalRead(lp);
  ledState1 = digitalRead(lp1);
  ledState2 = digitalRead(lp2);
  
  buttonOnState = digitalRead(button1_on);  // assigning local Variable
  buttonOffState = digitalRead(button2_off); // assignning locla Variable 
 
  
  
  Serial.println(count);
  if(buttonOnState != buttonPressedOn || buttonOffState !=buttonPressedOff){
    if(buttonOnState==HIGH) {
      count++;    // counting once high  
      Serial.print(count);
    }
    if(buttonOffState==HIGH){ 
      count--; // decrementing 
      Serial.print(count); 
    }

// if statments for different cases 
  if(count==1){
    Serial.println(count);
    digitalWrite(lp, HIGH);
    digitalWrite(lp1, LOW);
    digitalWrite(lp2, LOW);
  }
   else if(count==2){
    digitalWrite(lp, LOW);
    digitalWrite(lp1, HIGH);
    digitalWrite(lp2, LOW);
  }
   else if(count==3){
    digitalWrite(lp, HIGH);
    digitalWrite(lp1, HIGH);
    digitalWrite(lp2, LOW);
  }
   else if(count==4){
    digitalWrite(lp, LOW);
    digitalWrite(lp1, LOW);
    digitalWrite(lp2, HIGH);
  }
   else if(count==5){
    digitalWrite(lp, HIGH);
    digitalWrite(lp1, LOW);
    digitalWrite(lp2, HIGH);
  }
   else if(count==6){
    digitalWrite(lp, LOW);
    digitalWrite(lp1, HIGH);
    digitalWrite(lp2, HIGH);
  }
   else if(count==7){
    digitalWrite(lp, HIGH);
    digitalWrite(lp1, HIGH);
    digitalWrite(lp2, HIGH);
  }
   else if(count==0){ //when count = 0
    digitalWrite(lp, LOW);
    digitalWrite(lp1, LOW);
    digitalWrite(lp2, LOW);
  }
  else if(count < 0 || count > 7){
    count=0;
  }
   delay(100); 
  
    }
  button1_on=buttonOnState;
  button2_off=buttonOffState;
}
