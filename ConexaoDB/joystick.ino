#include <Arduino.h>

int eixo_X = A0;
int eixo_Y = A1;
int botao = 2;

void setup(){
  pinMode (botao, INPUT_PULLUP); 
  Serial.begin (9600);
}
void loop(){

    if((analogRead(eixo_X)) == 0){
        Serial.println("PARA CIMA"); 
    }else{
          if((analogRead(eixo_X)) == 1023){
              Serial.println("PARA BAIXO"); 
          }else{
                if((analogRead(eixo_Y)) == 0){
                  Serial.println("DIREITA"); 
                }else{
                      if((analogRead(eixo_Y)) == 1023){
                          Serial.println("ESQUERDA"); 
                      }else{
                            if(digitalRead(botao) == LOW){ 
                               Serial.println("BOTAO PRESSIONADO"); 
                            }  
                      }
                }
          }
    }
    delay(200);
}