#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,5,4,3,2);
int back=13;

void setup() {
pinMode(back, OUTPUT);
digitalWrite(back, HIGH);
lcd.begin(16,2);
}

void loop() {
lcd.setCursor(0,0);
lcd.print("Hello YouTube");
lcd.setCursor(0,1);
lcd.print(millis()/1000);
}