// constants won't change. They're used here to
// set pin numbers:
//const int buttonPin[] = {2,3};     // the number of the pushbutton pins
const int buttonPinOn=2;
const int buttonPinOff=5;
const int ledPin =  13;      // the number of the LED pin
const int ledPin1 =  12;      // the number of the LED pin
const int ledPin2 =  11;      // the number of the LED pin
int count=0;


// variables will change:
//int buttonState = 0;         // variable for reading the pushbutton status
 int buttonPressedOn=LOW;
  int buttonPressedOff=LOW;

void setup() {
  // initialize the LED pin as an output:
  //int count=0;
  pinMode(ledPin, OUTPUT);     
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  // initialize the pushbutton pin as an input:
 /* for(int x=0; x<3; x++)
  {
    pinMode(buttonPin[x], INPUT); 
  } */ 
  pinMode(buttonPinOn, INPUT);
  pinMode(buttonPinOff, INPUT);
    //pinMode(buttonPinOff, INPUT_PULLUP);

   
}

void loop(){
//  int pressed = True;
  // read the state of the pushbutton value:
  /*for(int x=0; x<3; x++)
  {
    buttonState = digitalRead(buttonPin[x]);

    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH:
    if (buttonState == HIGH && buttonPin[x] == 2) {    
      // turn LED on:   
      digitalWrite(ledPin, HIGH); 
    }
    if (buttonState == HIGH && buttonPin[x] == 3) {
      // turn LED off:
      digitalWrite(ledPin, LOW);
    }
  }*/
  int buttonOnState, buttonOffState;
  int ledState, ledState1, ledState2;
  
  ledState = digitalRead(ledPin);
  ledState1 = digitalRead(ledPin1);
  ledState2 = digitalRead(ledPin2);
  
  buttonOnState = digitalRead(buttonPinOn);
  buttonOffState = digitalRead(buttonPinOff);
 // cout << count;
  //delay(500);
  
  
  Serial.println(count);
  if(buttonOnState != buttonPressedOn || buttonOffState !=buttonPressedOff){
    if(buttonOnState==HIGH) 
    {
      count++;
      Serial.print(count);
    }
    if(buttonOffState==HIGH)
    {
      count--;
      Serial.print(count); 
    }
//  }
  //buttonPressedOn=buttonOnState;
  //buttonPressedOff=buttonOffState;
  

  if(count==1){
      Serial.println(count);
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }

   else if(count==2){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

   else if(count==3){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

   else if(count==4){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==5){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==6){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==7){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==0){ //when count = 0
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
  else if(count < 0 || count > 7){
    count=0;
  }
   delay(50); 
  
    } buttonPressedOn=buttonOnState;
  buttonPressedOff=buttonOffState;
  
 
}
