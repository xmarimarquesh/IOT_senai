#include <Arduino.h>

int pot = A0;
 
void setup() {
  pinMode(pot, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  Serial.println(analogRead(pot));
  delay(100);
}
