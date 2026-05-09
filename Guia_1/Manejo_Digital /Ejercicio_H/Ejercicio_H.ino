#define rgb_r 11
#define rgb_b 10
#define rgb_g 9
#define button 2

// int prenderLed = 0

void setup()
{
  pinMode(rgb_r, OUTPUT);
  pinMode(rgb_b, OUTPUT);
  pinMode(rgb_g, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

  bool estadoBoton = LOW;
  bool ultimaVez = HIGH;
  int cont = 0;
  

void loop()
{
  digitalWrite(rgb_r, LOW);
  digitalWrite(rgb_g, LOW);
  digitalWrite(rgb_b, LOW);
  
  bool boton = digitalRead(button);
   if (boton == 1 && ultimaVez == HIGH)
  {
    estadoBoton = !estadoBoton;
     cont ++;
    delay(250);
  }
  
  bool ultimavez = boton;
  
  //Rojo
  if (estadoBoton == HIGH && cont == 1)
  {
    digitalWrite(rgb_r, HIGH);
  }

  
  //Cian
    if (estadoBoton == HIGH && cont == 3)
  {
    digitalWrite(rgb_g, HIGH);
    digitalWrite(rgb_b, HIGH);
  }

  
  //Verde
    if (estadoBoton == HIGH && cont == 5)
  {
    digitalWrite(rgb_g, HIGH);
  }

  
  //Magenta
    if (estadoBoton == HIGH && cont == 7)
  {
    digitalWrite(rgb_r, HIGH);
    digitalWrite(rgb_b, HIGH);
  }

  
  //Azul
    if (estadoBoton == HIGH && cont == 9)
  {
    digitalWrite(rgb_b, HIGH);
  }

  
  //Blanco
    if (estadoBoton == HIGH && cont == 11)
  {
    digitalWrite(rgb_r, HIGH);
    digitalWrite(rgb_g, HIGH);
    digitalWrite(rgb_b, HIGH);
  }

  
  //Amarillo
    if (estadoBoton == HIGH && cont == 13)
  {
    digitalWrite(rgb_r, HIGH);
    digitalWrite(rgb_g, HIGH);
  }

  if (cont > 13)
  {
    cont = 0;
  }
  Serial.println(cont);
}