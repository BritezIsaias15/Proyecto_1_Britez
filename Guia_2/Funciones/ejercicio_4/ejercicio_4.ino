#define pir 2
#define led 4

void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
}

int sensor(int Pir)
{
  bool mov = digitalRead(Pir);
  
  if(mov == true)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void loop()
{
  digitalWrite(led, sensor(pir));
}
