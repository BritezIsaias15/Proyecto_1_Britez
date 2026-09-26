#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup()
{
  randomSeed(analogRead(A0));
  lcd.begin(16, 2);
}

void bienvenida()
{
  lcd.setCursor(0,0);
  lcd.print("Bienvenido.");
  delay(2000);
  lcd.clear();
}

void inicio()
{
  lcd.setCursor(0,0);
  lcd.print("Inicio de Juego.");
  delay(2000);
  lcd.clear();
}

void fin()
{
  lcd.setCursor(0,0);
  lcd.print("Fin del Juego.");
  delay(2000);
  lcd.clear();
}

void puntuacion()
{
  lcd.setCursor(0,0);
  lcd.print("Puntaje:");
  lcd.setCursor(0,1);
  lcd.print(random(0, 10000));
  delay(2000);
  lcd.clear();
}

void loop()
{
  bienvenida();
  inicio();
  fin();
  puntuacion();
}
