#include <Adafruit_NeoPixel.h>

#define NEOPIN 3
#define CANT_PIXEL 12
#define pote A0
#define button 2

                                     //// cant , pin ,conf (NEO_GRB + NEO_KHZ800)
Adafruit_NeoPixel neo = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);


void setup()
{
  pinMode(NEOPIN, OUTPUT);
  pinMode(pote, INPUT);
  
  randomSeed(analogRead(A1));
  neo.begin();
  neo.clear();
  neo.show();
  Serial.begin(9600);
}

int estadoBoton;  
bool ultimaVez = HIGH;

void loop()
{
  int pot = analogRead(pote);
  int secPote = map(pot, 0, 1023, 100, 1000);
  
  bool boton = digitalRead(button);
  
  if (boton == LOW && ultimaVez == HIGH) 
  {
    estadoBoton++;
    delay(150);
    ultimaVez = boton;
    neo.clear();
    neo.show();
    return;
  }
ultimaVez = boton;
  
  //Set 1
  
  if (estadoBoton == 1)
  {
  //Pixel 0
  neo.setPixelColor(0, 255, 0, 0, 255);
  neo.show();
  delay(secPote);
  
  
    
  //Pixel 1
  neo.setPixelColor(0, 0, 0, 0, 255);
  neo.setPixelColor(1, 0, 255, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 2
  neo.setPixelColor(1, 0, 0, 0, 0);
  neo.setPixelColor(2, 0, 0, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 3
  neo.setPixelColor(2, 0, 0, 0, 0);
  neo.setPixelColor(3, 255, 255, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 4
  neo.setPixelColor(3, 0, 0, 0, 0);
  neo.setPixelColor(4, 0, 255, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 5
  neo.setPixelColor(4, 0, 0, 0, 0);
  neo.setPixelColor(5, 255, 0, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 6
  neo.setPixelColor(5, 0, 0, 0, 0);
  neo.setPixelColor(6, 255, 255, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 7
  neo.setPixelColor(6, 0, 0, 0, 0);
  neo.setPixelColor(7, 50, 12, 150, 255);
  neo.show();
  delay(secPote);
  //Pixel 8
  neo.setPixelColor(7, 0, 0, 0, 0);
  neo.setPixelColor(8, 0, 92, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 9
  neo.setPixelColor(8, 0, 0, 0, 0);
  neo.setPixelColor(9, 255, 0, 32, 255);
  neo.show();
  delay(secPote);
  //Pixel 10
  neo.setPixelColor(9, 0, 0, 0, 0);
  neo.setPixelColor(10, 46, 243, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 11
  neo.setPixelColor(10, 0, 0, 0, 0);
  neo.setPixelColor(11, 25, 25, 25, 255);
  neo.show();
  delay(secPote);
  neo.setPixelColor(11, 0, 0, 0, 0);
  neo.show();
  }
  
  delay(1000);
  
  //Set 2
  
  if (estadoBoton == 2)
  {
  //Pixel 11
  neo.setPixelColor(11, 255, 0, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 10
  neo.setPixelColor(11, 0, 0, 0, 255);
  neo.setPixelColor(10, 0, 255, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 9
  neo.setPixelColor(10, 0, 0, 0, 0);
  neo.setPixelColor(9, 0, 0, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 8
  neo.setPixelColor(9, 0, 0, 0, 0);
  neo.setPixelColor(8, 255, 255, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 7
  neo.setPixelColor(8, 0, 0, 0, 0);
  neo.setPixelColor(7, 0, 255, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 6
  neo.setPixelColor(7, 0, 0, 0, 0);
  neo.setPixelColor(6, 255, 0, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 5
  neo.setPixelColor(6, 0, 0, 0, 0);
  neo.setPixelColor(5, 255, 255, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 4
  neo.setPixelColor(5, 0, 0, 0, 0);
  neo.setPixelColor(4, 50, 12, 150, 255);
  neo.show();
  delay(secPote);
  //Pixel 3
  neo.setPixelColor(4, 0, 0, 0, 0);
  neo.setPixelColor(3, 0, 92, 255, 255);
  neo.show();
  delay(secPote);
  //Pixel 2
  neo.setPixelColor(3, 0, 0, 0, 0);
  neo.setPixelColor(2, 255, 0, 32, 255);
  neo.show();
  delay(secPote);
  //Pixel 1
  neo.setPixelColor(2, 0, 0, 0, 0);
  neo.setPixelColor(1, 46, 243, 0, 255);
  neo.show();
  delay(secPote);
  //Pixel 0
  neo.setPixelColor(1, 0, 0, 0, 0);
  neo.setPixelColor(0, 25, 25, 25, 255);
  neo.show();
  delay(secPote);
  neo.setPixelColor(0, 0, 0, 0, 0);
  neo.show();
  }
  
  //Set 3
  
  if (estadoBoton == 3)
  {
  neo.rainbow(0, random(1, 10), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(11, 20), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(1, 10), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(11, 20), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(1, 10), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(11, 20), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(1, 10), 255, 255, true);
  neo.show();
  delay(secPote);
  neo.rainbow(0, random(11, 20), 255, 255, true);
  neo.show();
  delay(secPote);
  }

    if (estadoBoton > 3)
  {
    estadoBoton = 1;
  }
}