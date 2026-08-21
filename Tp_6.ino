#define tmp A0
#define nmos 3
#define motor 5
#define pir 13

void setup()
{
  pinMode(tmp, INPUT);
  pinMode(pir, INPUT);
  pinMode(nmos, OUTPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float temperatura = (analogRead(tmp) * 5.0/1024)*100-50;
  bool mov = digitalRead(pir);
  Serial.println(temperatura);
  
  if(temperatura > 50)
  {
    analogWrite(motor, 255);
  }
  else
  {
    if(mov == true)
    {
      if(temperatura <= 15)
      {
        analogWrite(motor, 50);
      }
      else if(temperatura == 30)
      {
        analogWrite(motor, 150);
      }
      else
      {
        analogWrite(motor, 255);
      }
    }
    else
    {
      analogWrite(motor, 0);
    }
  }
  
}