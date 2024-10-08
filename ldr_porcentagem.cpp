// C++ code
//

int tensao;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(1000);
  tensao = map(analogRead(A0), 0, 1023, 0, 100);
  Serial.print(tensao);
  Serial.println('%');
}
