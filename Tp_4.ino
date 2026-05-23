#define tmp A0
#define ldr A1
#define rgb_r 13
#define rgb_g 8
#define rgb_b 12

void setup()
{
  pinMode(tmp, INPUT);
  pinMode(ldr, INPUT);
  pinMode(rgb_r, OUTPUT);
  pinMode(rgb_g, OUTPUT);
  pinMode(rgb_b, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Temperatura
  float temperatura = (analogRead(tmp) * 5.0/1024)*100-50;
  
  //Luz ambiemntal
  float luz = analogRead(ldr);
  int luzAmb = map (luz, 1, 310, 100, 0);
  
  //Imprimir
  Serial.print("El nivel de luz actual es: ");
  Serial.println(luz);
  Serial.print("La temperatura actual es: ");
  Serial.print(temperatura);
  Serial.println(" ºc");
  
  //Led
  if (luzAmb > 30 && luzAmb < 70 )
  {
  (temperatura >= 90 ? digitalWrite(rgb_r, 1) : digitalWrite(rgb_r, 0));
  (temperatura <= 18 ? digitalWrite(rgb_b, 1) : digitalWrite(rgb_b, 0));
  (temperatura > 18 && temperatura < 90 ? digitalWrite(rgb_g, 1) : digitalWrite(rgb_g, 0));
  }
  else
  {
    digitalWrite(rgb_r, 0);
    digitalWrite(rgb_g, 0);
    digitalWrite(rgb_b, 0);
  }
}