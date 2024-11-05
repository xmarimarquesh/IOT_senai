//"Sensor de Presença com Iluminação Ambiente e Som de Boas-Vindas"? Esse projeto detecta a presença de uma pessoa em um ambiente e, ao entrar no cômodo, ativa uma série de ações que incluem:

//Iluminação suave que se ajusta ao nível de luz do ambiente usando um LED RGB.
//Som de boas-vindas, como uma melodia breve, usando um buzzer.
//Indicador de proximidade que pisca diferentes cores conforme a distância medida.
//Componentes necessários
//Sensor de proximidade (HC-SR04)
//LED RGB
//LDR (sensor de luminosidade)
//Buzzer ativo
//Arduino (UNO ou similar)
//Resistores de 220Ω (para o LED RGB) e 10kΩ (para o LDR)
//Funcionamento
//Quando o sensor de proximidade detecta uma pessoa a menos de 50 cm, o Arduino ativa uma animação de boas-vindas no LED RGB, ajustando a cor de acordo com a luminosidade ambiente.
//O buzzer toca uma melodia curta para simular uma saudação.
//Dependendo da distância da pessoa, o LED pisca em diferentes cores para indicar o grau de proximidade.

#include <NewPing.h>  // Biblioteca para o sensor de ultrassom

// Definições de pinos
#define TRIGGER_PIN 7
#define ECHO_PIN 6
#define MAX_DISTANCE 100  // Distância máxima em cm

// Pinos do LED RGB
#define LED_R 9
#define LED_G 10
#define LED_B 11

// Pino do buzzer
#define BUZZER_PIN 8

// Pino do LDR
#define LDR_PIN A0

// Objeto para o sensor de proximidade
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int distance = sonar.ping_cm();  // Mede a distância
  int lightLevel = analogRead(LDR_PIN);  // Lê o nível de luz ambiente

  // Ajuste da cor do LED RGB com base na luz ambiente
  int red = map(lightLevel, 0, 1023, 0, 255);
  int green = map(lightLevel, 0, 1023, 255, 0);
  int blue = 128;  // Intensidade fixa para o azul

  analogWrite(LED_R, red);
  analogWrite(LED_G, green);
  analogWrite(LED_B, blue);

  // Ação de saudação quando alguém se aproxima
  if (distance > 0 && distance < 50) {
    playWelcomeTune();
    blinkLEDByDistance(distance);
  }
  
  delay(200);
}

void playWelcomeTune() {
  tone(BUZZER_PIN, 523, 200);  // Nota C
  delay(200);
  tone(BUZZER_PIN, 659, 200);  // Nota E
  delay(200);
  tone(BUZZER_PIN, 784, 200);  // Nota G
  delay(200);
  noTone(BUZZER_PIN);
}

void blinkLEDByDistance(int distance) {
  int blinkDelay = map(distance, 0, 50, 100, 500);  // Ajusta a velocidade de piscar
  
  digitalWrite(LED_R, HIGH);
  delay(blinkDelay);
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, HIGH);
  delay(blinkDelay);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, HIGH);
  delay(blinkDelay);
  digitalWrite(LED_B, LOW);
}
