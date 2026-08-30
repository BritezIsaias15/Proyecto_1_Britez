#include <Adafruit_NeoPixel.h>

#define NEOPIX1 9
#define NEOPIX2 10
#define button 4
#define cantNeo 48
#define buzzer 3

#define length(v,t) sizeof(v)/sizeof(t)

Adafruit_NeoPixel dado1 = Adafruit_NeoPixel( cantNeo , NEOPIX1 , NEO_GRB + NEO_KHZ800 );
Adafruit_NeoPixel dado2 = Adafruit_NeoPixel( cantNeo , NEOPIX2 , NEO_GRB + NEO_KHZ800 );

int uno[] = {3, 6, 10, 12, 13, 14,15, 16, 17, 18};
int dos[] = {0, 3, 6, 7, 10, 12, 14, 16, 18, 21};
int tres[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 19, 21};
int cuatro[] = {2, 3, 4, 8, 12, 13, 14, 15, 16, 20};
int cinco[] = {0, 2, 3, 4, 6, 8, 10, 12, 14, 16, 19, 22};
int seis[] = {1, 2, 3, 6, 8, 10, 12, 14, 16, 19};

int size[] = {length(uno, int),
              length(dos, int),
              length(tres, int),
              length(cuatro, int),
              length(cinco, int),
              length(seis, int)};

int* nums[] = {uno, dos, tres, cuatro, cinco, seis};

void setup()
{
  randomSeed(analogRead(A0));
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
  
  dado1.begin();
  dado2.begin();
  dado1.show();
  dado2.show();
  dado1.clear();
  dado2.clear();  
}

void loop()
{
  bool boton = digitalRead(button);
  analogWrite(buzzer, 0);
  dado1.clear();
  dado2.clear();
  dado1.show();
  dado2.show();
  
  if (boton == 1)
  {
    int rand1;
    int rand2;
    
    for (int k = 0; k < length(nums, int*); k++)
    {
      rand1 = random(0, 7);
      rand2 = random(0, 7);
      for (int j = 0; j < size[rand1]; j++)
      {
        dado1.setPixelColor((nums[rand1])[j], 255, 0, 0);
      }
      for (int i = 0; i < size[rand2]; i++)
      {
        dado2.setPixelColor((nums[rand2])[i], 255, 0, 0);
      }
      dado1.show();
      dado2.show();
      delay(300);
      dado1.clear();
      dado2.clear();
    }
    
    int dice1 = rand1+1;
    int dice2 = rand2+1;
    
    delay(1000);
    
    if (dice1 + dice2 == 7)
    {
      for (int i = 0; i < 3; i++)
      {

        analogWrite(buzzer, 70);
        dado1.rainbow(0, 1, 255, 255, true);
        dado1.show();
        delay(500);
        dado1.clear();
        dado1.show();
        
        analogWrite(buzzer, 30);
        dado2.rainbow(0, 1, 255, 255, true);
        dado2.show();
        delay(500);
        dado2.clear();
        dado2.show();
      }
    }
  }
}