
// include the library
#include <LiquidCrystal.h>

// init the lcd display according to the circuit
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


int screenWidth = 16;
int screenHeight = 2;

// the two lines
// line1 = scrolling
String line1 = "Hassan Pasha";
// line2 = static
String line2 = " After Hardship comes ease ";

// just some reference flags
int stringStart, stringStop = 0;
int scrollCursor = screenWidth;

// most of the part is pretty basic
void setup() {
  lcd.begin(screenWidth,screenHeight);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print(line1);
  delay(300);
 lcd.clear();
 lcd.setCursor(scrollCursor,1);
 lcd.print(line2.substring(stringStart,stringStop));
  if(stringStart == 0 && scrollCursor > 0){
    scrollCursor--;
    stringStop++;
  } else if (stringStart == stringStop){
    stringStart = stringStop = 0;
    scrollCursor = screenWidth;
   // stringStart = 0 ; 
   // scrollCursor = 0;
  }else if (stringStop == line2.length() && scrollCursor == 0) {
    stringStart++;
  } else {
    stringStart++;
     stringStop++;
  }
 }

