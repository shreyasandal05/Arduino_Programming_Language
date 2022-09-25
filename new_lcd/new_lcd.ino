# include <LiquidCrystal.h>

int Contrast=75;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
 analogWrite(6,Contrast);
    lcd.begin(16,2);
//    pinMode(A0,INPUT);
//  lcd.print("Hello World");
//  delay(1000);
}
//
void loop(){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("It's me");
//    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("Hello World");
//    delay(500);
}
/*
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // Turn off the display:
  lcd.noDisplay();
  delay(500);
  // Turn on the display:
  lcd.display();
  delay(500);
}*/
