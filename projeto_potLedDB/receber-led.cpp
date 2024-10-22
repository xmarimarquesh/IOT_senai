#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
}

void loop() {
    if (Serial.available()) { 
        char comando = Serial.read();

        if (comando == '1') {
            digitalWrite(3, HIGH);
            delay(100);
            digitalWrite(3, LOW); 
            delay(500);
        } else if (comando == '2') {
            digitalWrite(4, HIGH);
            delay(100);
            digitalWrite(4, LOW); 
            delay(500);
        } else if (comando == '3') {
            digitalWrite(5, HIGH);
            delay(100);
            digitalWrite(5, LOW); 
            delay(500);
        } else if (comando == '4') {
            digitalWrite(6, HIGH);
            delay(100);
            digitalWrite(6, LOW); 
            delay(500);
        } else if (comando == '5') {
            digitalWrite(7, HIGH);
            delay(100);
            digitalWrite(7, LOW); 
            delay(500);
        }
    }
}
