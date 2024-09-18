// C++ code
//

int led1 = 2;
int led2 = 3;
int led3 = 4;

int botao = 7;

int var = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  int estado_botao = digitalRead(botao);
  
  Serial.print("State: ");
  Serial.println(estado_botao);
  Serial.print("Var: ");
  Serial.println(var);
  delay(100);
  
  
  if(estado_botao==1){
    if(var < 3){
      var ++;
    }else{
      var = 1;
    }
  }
  
  if(var == 1){
  	digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }else if(var == 2){
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
  	delay(1000);
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
  	delay(1000);
  }else {
   	digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
  	delay(200);
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
  	delay(200);
  }
  
  
}
