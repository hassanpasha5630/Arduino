// thid code was given from the lab link
// Hassan Pasha


import processing.serial.*;

Serial myPort ; 

int xPos = 1 ; 
String val; 
float inByte = 0 ;
void setup(){
  
  size(500,500);
  
  String portName ;
  myPort = new Serial(this, Serial.list()[1], 9600);
 
  myPort.bufferUntil('\n');
  //myPort.clear();
  
}

void draw(){
 
   //if(myPort.available()> 0){
   //    val = myPort.readStringUntil('\n');
   //}

  stroke(127, 34, 50);
  line(xPos, height, xPos, height - inByte);

  // at the edge of the screen, go back to the beginning:
  if (xPos >= width) {
    xPos = 0;
    background(0);
  } else {
    // increment the horizontal position:
    xPos++;
  }





   // println(val);
}


void serialEvent (Serial myPort) {
  // get the ASCII string:
  String inString = myPort.readStringUntil('\n');

  if (inString != null) {
    // trim off any whitespace:
    inString = trim(inString);
    // convert to an int and map to the screen height:
    inByte = float(inString);
    println(inByte);
    inByte = map(inByte, 0, 1023, 0, height);
  }
}