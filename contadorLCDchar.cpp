// C++ code
//

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte cheio[8] {B11111,
               B11111,
               B11111,
               B11111,
               B11111,
               B11111,
               B11111,
               B11111};
byte lateralEsquerdo[8] {B00111,
                         B01111,
                         B01111,
                         B01111,
                         B01111,
                         B01111,
                         B01111,
                         B00111};
byte lateralDireito[8] {B11100,
                       B11110,
                       B11110,
                       B11110,
                       B11110,
                       B11110,
                       B11110,
                       B11100};
byte doisCima[8] {B11111,
                  B11111,
                  B00000,
                  B00000,
                  B00000,
                  B00000,
                  B00000,
                  B00000};
byte doisBaixo[8] {B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B11111,
                   B11111};
byte meioCimaBaixo[8] {B01111,
                       B00111,
                       B00000,
                       B00000,
                       B00000,
                       B00000,
                       B00011,
                       B00111};
byte meioCimaBaixo2[8] {B11110,
                        B11100,
                        B00000,
                        B00000,
                        B00000,
                        B00000,
                        B11000,
                        B11100};
byte cimaBaixo[8] {B11111,
                   B11111,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B11111,
                   B11111};
byte baixoMeio[8] {B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00000,
                   B00111,
                   B01111};
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.createChar(1, cheio);
  lcd.createChar(2, lateralEsquerdo);
  lcd.createChar(3, lateralDireito);
  lcd.createChar(4, doisCima);
  lcd.createChar(5, doisBaixo);
  lcd.createChar(6, meioCimaBaixo);
  lcd.createChar(7, cimaBaixo);
  lcd.createChar(8, baixoMeio);
  lcd.createChar(9, meioCimaBaixo2);
}

void loop()
{
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(4);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(9, 1);
  lcd.write(3);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8, 0);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(3);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(6);
  lcd.setCursor(8, 0);
  lcd.write(7);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(9, 1);
  lcd.write(5);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(6);
  lcd.setCursor(8, 0);
  lcd.write(7);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(9, 1);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(7, 1);
  lcd.write(8);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(5);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(9, 1);
  lcd.write(3);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(7);
  lcd.setCursor(9, 0);
  lcd.write(9);
  lcd.setCursor(9, 1);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(7, 1);
  lcd.write(8);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(7);
  lcd.setCursor(9, 0);
  lcd.write(9);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(9, 1);
  lcd.write(3);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(9, 1);
  lcd.write(3);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(7);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(9, 1);
  lcd.write(3);
  delay(500);
  lcd.clear();
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(7);
  lcd.setCursor(9, 0);
  lcd.write(3);
  lcd.setCursor(9, 1);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(5);
  lcd.setCursor(7, 1);
  lcd.write(8);
  delay(500);
  lcd.clear();
}


















