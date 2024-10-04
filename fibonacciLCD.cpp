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

void numeros(int p, int num){
	switch (num) {
      	case 0:
            lcd.setCursor(p, 0);
            lcd.write(2);
            lcd.setCursor(p, 1);
            lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(4);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
      		break;
        case 1:
            lcd.setCursor(p+1, 0);
            lcd.write(3);
            lcd.setCursor(p+1, 1);
            lcd.write(3);
            break; 
        case 2:
            lcd.setCursor(p, 0);
            lcd.write(6);
            lcd.setCursor(p+1, 0);
            lcd.write(7);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p, 1);
            lcd.write(2);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p+2, 1);
            lcd.write(5);
            break;
        case 3:
            lcd.setCursor(p, 0);
            lcd.write(6);
            lcd.setCursor(p+1, 0);
            lcd.write(7);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p, 1);
            lcd.write(8);
            break; 
      	case 4:
      		lcd.setCursor(p, 0);
            lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(5);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
      		break;
      	case 5:
      		lcd.setCursor(p, 0);
            lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(7);
            lcd.setCursor(p+2, 0);
            lcd.write(9);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p, 1);
            lcd.write(8);
      		break;
      	case 6:
      		lcd.setCursor(p, 0);
            lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(7);
            lcd.setCursor(p+2, 0);
            lcd.write(9);
            lcd.setCursor(p, 1);
            lcd.write(2);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
      		break;
      	case 7:
      		lcd.setCursor(p, 0);
    		lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(4);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
      		break;
      	case 8:
      		lcd.setCursor(p, 0);
            lcd.write(2);
            lcd.setCursor(p, 1);
            lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(7);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
      		break;
      	case 9:
      		lcd.setCursor(p, 0);
            lcd.write(2);
            lcd.setCursor(p+1, 0);
            lcd.write(7);
            lcd.setCursor(p+2, 0);
            lcd.write(3);
            lcd.setCursor(p+2, 1);
            lcd.write(3);
            lcd.setCursor(p+1, 1);
            lcd.write(5);
            lcd.setCursor(p, 1);
            lcd.write(8);
      		break;
        default:
            break;
    }
}

int primeiroDigito = 0;
int segundoDigito = 0;
int terceiroDigito = 0;
int quartoDigito = 0;

void loop(){
  int temp = 0;
  int valor = 0;
  int next = 1;
  
  for(int i = 0; i< 15; i++){
    temp = valor+next;
    valor = next;
    next = temp;
    Serial.println(valor);
    
    if(valor > 9 && valor <= 99){
      	primeiroDigito = valor / 10;
      	segundoDigito = valor % 10;
      
      	numeros(1, primeiroDigito);
      	numeros(4, segundoDigito);
      
    }else if(valor > 99 && valor < 999){
      	primeiroDigito = (valor / 10) / 10;
      	segundoDigito = (valor / 10) % 10;
      	terceiroDigito = (valor % 100) / 10;
      
    	numeros(1, primeiroDigito);
      	numeros(4, segundoDigito);
      	numeros(7, terceiroDigito);
      
    }else if(valor > 999 && valor < 9999){
      Serial.println("ENTROU");
      	primeiroDigito = valor / 1000;
      	segundoDigito = (valor % 1000) / 100;
      	terceiroDigito = ((valor % 1000) / 100) / 10;
      	quartoDigito = ((valor % 1000) / 100) % 10;
      
    	numeros(1, primeiroDigito);
      	numeros(4, segundoDigito);
      	numeros(7, terceiroDigito);
      	numeros(10, quartoDigito);
      
    }else{
    	numeros(1, valor);
    }
    
    delay(500);
    lcd.clear();
    
    
    
    
    
  }
  
}


















