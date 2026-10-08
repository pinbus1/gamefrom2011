#include <Arduino.h>
#include <LiquidCrystal.h> 

LiquidCrystal lcd(2,3, 4,5, 11, 12 );

void setup() {
     lcd.begin(16, 2);
    lcd.print("Hello!");
    lcd.setCursor(0, 1);
    lcd.print("LCD is working!! :)");
}

void loop() {
}

