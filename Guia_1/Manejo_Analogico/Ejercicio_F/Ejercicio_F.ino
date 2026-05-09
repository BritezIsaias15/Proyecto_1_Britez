#define led 13
#define pote A0

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pote, INPUT);
}

void loop()
{
  int pot = analogRead(pote);
  int newPot = map(pot, 0, 1024, 0, 10000);
  digitalWrite(led, 1);
  delay(newPot);
  digitalWrite(led, 0);
  delay(newPot);
}