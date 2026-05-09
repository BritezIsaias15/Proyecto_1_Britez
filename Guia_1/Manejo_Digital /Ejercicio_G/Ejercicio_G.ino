#define rgb1_r 13
#define rgb1_b 12
#define rgb1_g 11
#define rgb2_r 10
#define rgb2_b 9
#define rgb2_g 8
#define rgb3_r 7
#define rgb3_b 6
#define rgb3_g 5
#define button 2

// int prenderLed = 0

void setup()
{
  pinMode(rgb1_r, OUTPUT);
  pinMode(rgb1_b, OUTPUT);
  pinMode(rgb1_g, OUTPUT);
  pinMode(rgb2_r, OUTPUT);
  pinMode(rgb2_b, OUTPUT);
  pinMode(rgb2_g, OUTPUT);
  pinMode(rgb3_r, OUTPUT);
  pinMode(rgb3_b, OUTPUT);
  pinMode(rgb3_g, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

  bool estadoBoton = LOW;
  bool ultimaVez = HIGH;
  int cont = 0;

void loop()
{
  bool boton = digitalRead(button);
   if (boton == 1 && ultimaVez == HIGH)
  {
    estadoBoton = !estadoBoton;
     cont ++;
    delay(150);
  }
  
  bool ultimavez = boton;
  
  if (estadoBoton == HIGH && cont == 1)
  {
    digitalWrite(rgb1_r, 1);
    // cont ++
  }
  else
    //if cont == 1 rgb1 
  {
    digitalWrite(rgb1_r, 0);
    digitalWrite(rgb1_g, 0);
    digitalWrite(rgb1_b, 0);
  }
  
  if (estadoBoton == HIGH && cont == 3)
  {
    digitalWrite(rgb2_r, 1);
  }
  else
  {
    digitalWrite(rgb2_r, 0);
    digitalWrite(rgb2_g, 0);
    digitalWrite(rgb2_b, 0);
  }
  
  if (estadoBoton == HIGH && cont == 5)
  {
    digitalWrite(rgb3_r, 1);
  }
  else
  {
    digitalWrite(rgb3_r, 0);
    digitalWrite(rgb3_g, 0);
    digitalWrite(rgb3_b, 0);
      if (cont > 5)
    {
      cont = 0;
    }
  }
  Serial.println(cont);
}