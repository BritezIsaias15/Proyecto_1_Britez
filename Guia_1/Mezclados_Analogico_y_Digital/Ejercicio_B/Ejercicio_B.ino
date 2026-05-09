#define rgb_r 11
#define rgb_b 10
#define rgb_g 9
#define pote A0
#define button 2

void setup()
{
  pinMode(rgb_r, OUTPUT);
  pinMode(rgb_g, OUTPUT);
  pinMode(rgb_b, OUTPUT);
  pinMode(pote, INPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

  bool estadoLed = false;
  bool ultimaVez = HIGH;
  int verde;

void loop()
{
  bool boton = digitalRead(button);
  int pot = analogRead(pote);
  int pot1 = map(pot, 0, 1023, 255, 0); // Rojo
  int pot2 = map(pot, 0, 1023, 0, 255); // Azul
  
  
 if (pot <= 341) 
{
   verde = map(pot, 0, 341, 0, 255); 
} 
 else if (pot > 341 && pot <= 682) 
{
   verde = map(pot, 342, 682, 255, 0);
} 
else 
{
   verde = 0; 
}
  
  
   if (boton == 0 && ultimaVez == HIGH)
  {
    estadoLed = !estadoLed;
    delay(150);
  }
  ultimaVez = boton;
  
  if (!estadoLed)
  {
    analogWrite(rgb_r, pot1);
    analogWrite(rgb_b, pot2);
    analogWrite(rgb_g, verde);
  }
  else
  {
    analogWrite(rgb_r, 0);
    analogWrite(rgb_b, 0);
    analogWrite(rgb_g, 0);
  }
  
  Serial.print("pot1 - ");
  Serial.print(pot1);
  Serial.print("pot2 - ");
  Serial.print(pot2);
  Serial.print("pot - ");
  Serial.print(pot);
  Serial.print(estadoLed);
  Serial.println(verde);
}