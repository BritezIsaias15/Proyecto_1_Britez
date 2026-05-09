#define buzzer 11
#define pote A0

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(pote, INPUT);
}

void loop()
{
  int pot = analogRead(pote);
  int newPot = map(pot, 0, 1024, 0, 5000);
  analogWrite(buzzer, newPot);
}