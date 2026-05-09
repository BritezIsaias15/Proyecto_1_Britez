#define led 10

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite( led, 50);
  delay(1000);
  analogWrite( led, 100);
  delay(1000);
  analogWrite( led, 150);
  delay(1000);
  analogWrite( led, 200);
  delay(1000);
  analogWrite( led, 255);
  delay(1000);
}