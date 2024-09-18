// C++ code
//

int led = 3;
int led2 = 5;
int pot = A0;

int tensao = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  tensao = map(analogRead(pot), 0, 1023, 0, 255);
  
  digitalWrite(led, tensao);
  digitalWrite(led2, 255-tensao);
  delay(500);
  digitalWrite(led, tensao);
  digitalWrite(led2, 255-tensao);
  delay(500);  
}
