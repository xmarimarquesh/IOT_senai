// C++ code
//

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte simbolo[8] {B11111,
                 B11111,
                 B11111,
                 B11111,
                 B11111,
                 B11111,
                 B11111,
                 B11111};

byte esquerdoBaixo[8] { B11111,
                   B11111,
                   B11111,
                   B11111,
                   B01111,
                   B00111,
                   B00011,
                   B00001};


byte esquerdoCima[8] { B00001,
                       B00011,
                       B00111,
                       B01111,
                       B11111,
                       B11111,
                       B11111,
                       B11111};

byte direitoBaixo[8] { B11111,
                       B11111,
                       B11111,
                       B11111,
                       B11110,
                       B11100,
                       B11000,
                       B10000};

byte direitoCima[8] {B10000,
                     B11000,
                     B11100,
                     B11110,
                     B11111,
                     B11111,
                     B11111,
                     B11111};

byte meioCima[8] {B11111,
                  B11111,
                  B11111,
                  B11111,
                  B00000,
                  B00000,
                  B00000,
                  B00000};

byte meioBaixo[8] {B00000,
                  	B00000,
                    B00000,
                    B00000,
                    B11111,
                    B11111,
                    B11111,
                    B11111};

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.createChar(1, simbolo);
  lcd.createChar(2, esquerdoCima);
  lcd.createChar(3, esquerdoBaixo);
  lcd.createChar(4, direitoCima);
  lcd.createChar(5, direitoBaixo);
  lcd.createChar(6, meioCima);
  lcd.createChar(7, meioBaixo);
}

void loop()
{
  delay(500);
  lcd.setCursor(4, 0);
  lcd.write(1);
  lcd.setCursor(4, 1);
  lcd.write(1);
  
  delay(500);
  lcd.setCursor(6, 0);
  lcd.write(2);
  lcd.setCursor(6, 1);
  lcd.write(3);
  lcd.setCursor(7, 0);
  lcd.write(6);
  lcd.setCursor(7, 1);
  lcd.write(7);
  lcd.setCursor(8, 0);
  lcd.write(4);
  lcd.setCursor(8, 1);
  lcd.write(5);
  
  delay(500);
  lcd.setCursor(10, 0);
  lcd.write(6);
  lcd.setCursor(11, 0);
  lcd.write(1);
  lcd.setCursor(11, 1);
  lcd.write(1);
  lcd.setCursor(12, 0);
  lcd.write(6);
  
  delay(500);
  lcd.clear();
}


















