#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int red =4;
const int yellow=5;
const int green=6;

void setup()
{
  lcd.init();
  lcd.backlight();
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
 
  lcd.setCursor(0, 0);
  lcd.print("Traffic Light");
  delay(3000);
}

void loop()
{
  digitalWrite(red, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Stop.");
  delay(5000);
  
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Ready...");
  delay(5000);
  
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Let's GO");
  delay(5000);
  
  digitalWrite(green, LOW);
}