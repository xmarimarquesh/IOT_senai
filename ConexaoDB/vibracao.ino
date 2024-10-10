#define pinoLed 2
#define pinoSensor 3

int ler = 0; 
void setup(){
  Serial.begin(9600);
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLed, OUTPUT);
}

void loop(){
  ler = digitalRead(pinoSensor);
  Serial.println(ler);
  if(ler == HIGH){ 
      digitalWrite(pinoLed, HIGH);
      Serial.println("Ligado");
  }else
  {
    digitalWrite(pinoLed, LOW);
      Serial.println("Desligado");
  }
}