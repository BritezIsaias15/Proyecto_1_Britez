#define rgb1_r 12
#define rgb2_r 11
#define rgb2_g 10
#define rgb3_b 9
#define rgb3_g 8
#define rgb4_r 7
#define rgb4_b 6
#define rgb5_r 5
#define rgb5_g 4
#define rgb6_b 3
#define rgb6_g 2
#define pote A0
#define button 13

void setup()
{
  pinMode(rgb1_r, OUTPUT);
  pinMode(rgb2_r, OUTPUT);
  pinMode(rgb2_g, OUTPUT);
  pinMode(rgb3_b, OUTPUT);
  pinMode(rgb3_g, OUTPUT);
  pinMode(rgb4_r, OUTPUT);
  pinMode(rgb4_b, OUTPUT);
  pinMode(rgb5_r, OUTPUT);
  pinMode(rgb5_g, OUTPUT);
  pinMode(rgb6_b, OUTPUT);
  pinMode(rgb6_g, OUTPUT);
  pinMode(pote, INPUT);
  pinMode(button, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop()
{
 /* int pot = analogRead(pote);
  int timPote = map(pot, 0, 1023, 0, 3000);*/
  
  bool estadoLed = false;
  bool ultimaVez = HIGH;
  
  bool boton = digitalRead(button);
  
  if (boton == 1 && ultimaVez == HIGH)
  {
    estadoLed = !estadoLed;
    delay(50);
  }
  ultimaVez = boton;
  
  digitalWrite(rgb1_r, 0);
  digitalWrite(rgb2_r, 0);
  digitalWrite(rgb2_g, 0);
  digitalWrite(rgb3_b, 0);
  digitalWrite(rgb3_g, 0);
  digitalWrite(rgb4_r, 0);
  digitalWrite(rgb4_b, 0);
  digitalWrite(rgb5_r, 0);
  digitalWrite(rgb5_g, 0);
  digitalWrite(rgb6_b, 0);
  digitalWrite(rgb6_g, 0);
  
  if (!estadoLed)
  {
  int pot = analogRead(pote);
  int timPote = map(pot, 0, 1023, 0, 3000);  
  
  //Led 1
  digitalWrite(rgb1_r, 1);
  delay(timPote);
  digitalWrite(rgb1_r, 0);
  
  
  //Led 2
  digitalWrite(rgb2_g, 1);
  delay(timPote);
  digitalWrite(rgb2_g, 0);
  
  //Led 3
  digitalWrite(rgb3_b, 1);
  delay(timPote);
  digitalWrite(rgb3_b, 0);
  
  //Led 4
  digitalWrite(rgb4_r, 1);
  digitalWrite(rgb4_b, 1);
  delay(timPote);
  digitalWrite(rgb4_r, 0);
  digitalWrite(rgb4_b, 0);
  
  //Led 5
  digitalWrite(rgb5_r, 1);
  digitalWrite(rgb5_g, 1);
  delay(timPote);
  digitalWrite(rgb5_r, 0);
  digitalWrite(rgb5_g, 0);
  
  //Led 6
  digitalWrite(rgb6_b, 1);
  digitalWrite(rgb6_g, 1);
  delay(timPote);
  digitalWrite(rgb6_b, 0);
  digitalWrite(rgb6_g, 0);
    
  }
    
}