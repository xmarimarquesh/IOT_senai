#include <Arduino.h>

const int pinoSensor = 2; 
const int pinoLed = 3; 
 
void setup() {
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  if (digitalRead(pinoSensor) == HIGH){ 
    digitalWrite(pinoLed, HIGH);
    Serial.println("Ligado");
  }
  else{ 
    digitalWrite(pinoLed,LOW); 
    Serial.println("Desligado");
  } 
  delay(200);
}