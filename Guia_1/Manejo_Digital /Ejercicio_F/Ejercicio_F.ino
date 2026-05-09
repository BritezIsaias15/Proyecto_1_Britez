#define button 8
#define buzer 3

void setup()
{
  pinMode(button, INPUT);
  pinMode(buzer, OUTPUT);
}

void loop()
{
  int pulso = digitalRead(button);
  analogWrite(buzer , pulso);
}