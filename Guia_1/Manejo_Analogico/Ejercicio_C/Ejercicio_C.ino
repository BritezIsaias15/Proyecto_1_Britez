#define lr 11
#define lg 9
#define lb 10

void setup()
{
  pinMode(lr, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(lb, OUTPUT);
}

void loop()
{
  //Cian
  analogWrite(lg , 255);
  analogWrite(lb , 255);
  delay(1000);
  analogWrite(lg , 100);
  delay(1000);
  analogWrite(lb , 100);
  delay(1000);
  //Rojo
  analogWrite(lg , 0);
  analogWrite(lb , 0);
  analogWrite(lr , 255);
  delay(1000);
  analogWrite(lr , 150);
  delay(1000);
  analogWrite(lr , 75);
  delay(1000);
  //Amarillo
  analogWrite(lr , 255);
  analogWrite(lg , 255);
  delay(1000);
  analogWrite(lr , 150);
  delay(1000);
  analogWrite(lg , 125);
  delay(1000);
  analogWrite(lr , 0);
}