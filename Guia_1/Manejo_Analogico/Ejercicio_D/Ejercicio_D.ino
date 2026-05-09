#define rgb_r1 11
#define rgb_g1 9
#define rgb_b1 10
#define rgb_r2 6
#define rgb_g2 3
#define rgb_b2 5
#define pote A0

#define Potenciometro
#define RGB_1-2

void setup()
{
  pinMode(rgb_r1, OUTPUT);
  pinMode(rgb_g1, OUTPUT);
  pinMode(rgb_b1, OUTPUT);
  pinMode(rgb_r2, OUTPUT);
  pinMode(rgb_g2, OUTPUT);
  pinMode(rgb_b2, OUTPUT);
  pinMode(pote, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  #ifdef Potenciometro
  int pot = analogRead(pote);
  int newPot = map (pot, 0, 1024, 1, 5);
  Serial.println(newPot);
  #endif
  
  #ifdef RGB_1-2
  analogWrite(rgb_r1, 255);
  analogWrite(rgb_b1, 255);
  analogWrite(rgb_r2, 255);
  analogWrite(rgb_g2, 255);
  delay(1000*newPot);
  analogWrite(rgb_b1, 0);
  analogWrite(rgb_g1, 255);
  analogWrite(rgb_g2, 0);
  analogWrite(rgb_b2, 255);
  delay(1000*newPot);
  analogWrite(rgb_g1, 0);
  analogWrite(rgb_b1, 255);
  analogWrite(rgb_b2, 0);
  analogWrite(rgb_g2, 255);
  #endif
}