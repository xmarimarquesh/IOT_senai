#include <LiquidCrystal.h>

// C++ code
//

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);



int qualOperacao;
int primeiroValor;
int segundoValor;

String operacao;
String op;

int resultado;
float resultadoDivisao;

int pot = A0;
int pot2 = A1;
int pot3 = A2;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  
  pinMode(analogRead(pot), INPUT);
  pinMode(analogRead(pot2), INPUT);
  pinMode(analogRead(pot3), INPUT);
}

void loop()
{
  qualOperacao = map(analogRead(pot), 0, 1023, 1, 5);
  primeiroValor = map(analogRead(pot2), 0, 1023, 1, 99);
  segundoValor = map(analogRead(pot3), 0, 1023, 1, 99);
  
  if(qualOperacao == 1) {
    lcd.clear();
    lcd.print("ESCOLHA OPERACAO");
  	delay(1000);
  }else{
    switch (qualOperacao) {
      case 2:
          operacao = "Soma";
          op = " + ";
          resultado = primeiroValor + segundoValor;
          break;
      case 3:
          operacao = "Subtracao";
          op = " - ";
          resultado = primeiroValor - segundoValor;
          break;
      case 4:
          operacao = "Multiplicacao";
          op = " * ";
          resultado = primeiroValor * segundoValor;
          break;
      case 5:
          operacao = "Divisao";
          op = " / ";
          resultadoDivisao = float(primeiroValor) / segundoValor;
          break;
      default:
          break;
    }
    
    if (qualOperacao == 5){
      lcd.clear();
      lcd.print(operacao);
      lcd.setCursor(0, 1);
      lcd.print(primeiroValor);
      lcd.print(op);
      lcd.print(segundoValor);
      lcd.print(" = ");
      lcd.print(resultadoDivisao);
      delay(1000);
    } else {
      lcd.clear();
      lcd.print(operacao);
      lcd.setCursor(0, 1);
      lcd.print(primeiroValor);
      lcd.print(op);
      lcd.print(segundoValor);
      lcd.print(" = ");
      lcd.print(resultado);
      delay(1000);
    
    }
    
    
  }
   
  
}
