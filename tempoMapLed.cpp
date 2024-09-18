// C++ code
//

int led1 = 4;
int led2 = 2;
int led3 = 3;

int time = 0;

int tensao = 0;

int porta = A5;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(porta, INPUT);
}

void loop()
{
  time = map(analogRead(porta),0,1023,10,1000);
  tensao = map(time,0,1023,0,5);
  
  Serial.println(time);
  Serial.print(tensao);
  Serial.println('V');
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(time);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(time);
}
