#include <Adafruit_NeoPixel.h>

#include <LiquidCrystal.h>

#define button A1
#define CANT_PIXEL 6
#define NEOPIN 3

Adafruit_NeoPixel neo = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup()
{
  pinMode(A0, INPUT);
  pinMode(NEOPIN, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  
  lcd.begin(16, 2);
  
  neo.begin();
  neo.clear();
  neo.show();
  
  Serial.begin(9600);
}

int color = 1;
bool estadoBoton = true;
bool ultimaVez = false;

void loop()
{
 /* bool boton = digitalRead(button);
  
  if (boton == false && ultimaVez == true) 
  {
    !estadoBoton;
    delay(150);
  }
  ultimaVez = boton;
  Serial.println(boton);*/

  int FLEX = analogRead(A0);
  int flex = map(FLEX, 33, 6, 0, 180);
  neo.show();
  //if (!estadoBoton)
  //{
  if (flex <= 45)
  {
    neo.setPixelColor(0, 0, 255, 0, 255);
    neo.setPixelColor(1, 0, 255, 0, 255);
    neo.setPixelColor(2, 0, 0, 0, 255);
    neo.setPixelColor(3, 0, 0, 0, 255);
    neo.setPixelColor(4, 0, 0, 0, 255);
    neo.setPixelColor(5, 0, 0, 0, 255);
    color = 1;
    neo.show();
  }
  else if (flex > 45 && flex <= 95)
  {
    neo.setPixelColor(0, 0, 255, 0, 255);
    neo.setPixelColor(1, 0, 255, 0, 255);
    neo.setPixelColor(2, 255, 255, 0, 255);
    neo.setPixelColor(3, 255, 255, 0, 255);
    neo.setPixelColor(4, 0, 0, 0, 255);
    neo.setPixelColor(5, 0, 0, 0, 255);
    color = 2;
    neo.show();
  }
  else if (flex > 95 && flex < 180)
  {
    neo.setPixelColor(0, 0, 255, 0, 255);
    neo.setPixelColor(1, 0, 255, 0, 255);
    neo.setPixelColor(2, 255, 255, 0, 255);
    neo.setPixelColor(3, 255, 255, 0, 255);
    neo.setPixelColor(4, 255, 0, 0, 255);
    neo.setPixelColor(5, 255, 0, 0, 255);
    color = 3;
    neo.show();
  }
  
  lcd.setCursor(0,1);
  lcd.print("Color:");
  
  if (color == 1)
  {
    lcd.print("Verde");
  }
  else if (color == 2)
  {
    lcd.print("Amarillo");
  }
  else
  {
    lcd.print("Rojo");
  }
  lcd.print("      ");
  
  lcd.setCursor(0,0);
  lcd.print("Flex:");
  lcd.print(flex);
  lcd.print("   ");
  neo.show();
  //}
  /*else
  {
    neo.setPixelColor(0, 0, 0, 0, 255);
    neo.setPixelColor(1, 0, 0, 0, 255);
    neo.setPixelColor(2, 0, 0, 0, 255);
    neo.setPixelColor(3, 0, 0, 0, 255);
    neo.setPixelColor(4, 0, 0, 0, 255);
    neo.setPixelColor(5, 0, 0, 0, 255);
    neo.show();
    lcd.setCursor(0,0);
    lcd.print("                ");
    lcd.setCursor(0,1);
    lcd.print("                ");
  }*/
}