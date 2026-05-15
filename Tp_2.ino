#define rgb_r 11
#define rgb_b 9
#define rgb_g 10
#define piezo 3
#define pote A0
#define button 2
#define poteLedR A1
#define poteLedG A2
#define poteLedB A3

void setup()
{
  pinMode(rgb_r, OUTPUT);
  pinMode(rgb_b, OUTPUT);
  pinMode(rgb_g, OUTPUT);
  pinMode(piezo, OUTPUT);
  pinMode(pote, INPUT);
  pinMode(poteLedR, INPUT);
  pinMode(poteLedG, INPUT);
  pinMode(poteLedB, INPUT);
  
  Serial.begin(9600);
}

bool estadoLed = false;
bool ultimaVez = HIGH;
  
void loop()
{

  bool boton = digitalRead(button);
  
  if (boton == 0 && ultimaVez == HIGH)
  {
    estadoLed = !estadoLed;
    delay(150);
  }
  ultimaVez = boton;
  
  if (!estadoLed)
  { 
  int pot = analogRead(pote);
  int poteR = analogRead(poteLedR);
  int poteG = analogRead(poteLedG);
  int poteB = analogRead(poteLedB);
   
  int delayPot = map(pot, 0, 1023, 0, 3000);
  int RPot = map(poteR, 0, 1023, 0, 255);
  int GPot = map(poteG, 0, 1023, 0, 255);
  int BPot = map(poteB, 0, 1023, 0, 255);
  
  Serial.print("Tiempo:");
  Serial.print(delayPot/1000);
  Serial.println("s");
  Serial.print("R:");
  Serial.println(RPot);
  Serial.print("G:");
  Serial.println(GPot);
  Serial.print("B:");
  Serial.println(BPot);
 
  analogWrite(rgb_r, RPot);
  analogWrite(rgb_g, GPot);
  analogWrite(rgb_b, BPot); 
    
  delay(delayPot);
  
  analogWrite(rgb_r, 0);
  analogWrite(rgb_g, 0);
  analogWrite(rgb_b, 0);
  
  analogWrite(piezo, 250);
    
  analogWrite(rgb_r, 170);
  analogWrite(rgb_g, 100);
    
  delay(25);
  
  analogWrite(rgb_r, 0);
  analogWrite(rgb_g, 0);
    
  delay(25);
  
  analogWrite(rgb_r, 170);
  analogWrite(rgb_g, 100);
 
  delay(25);
  
  analogWrite(rgb_r, 0);
  analogWrite(rgb_g, 0);
    
  delay(25);
  
  analogWrite(rgb_r, 170);
  analogWrite(rgb_g, 100);
  delay(25);
  
  analogWrite(rgb_r, 0);
  analogWrite(rgb_g, 0);

  delay(25);
  
  
  analogWrite(rgb_r, 170);
  analogWrite(rgb_g, 100);
 
  delay(25);
  
  analogWrite(rgb_r, 0);
  analogWrite(rgb_g, 0);
 
  delay(25);
  
  analogWrite(piezo, 0);
  }
  else
  {
  analogWrite(piezo, 0);
  analogWrite(rgb_r, 0);
  analogWrite(rgb_g, 0);
  analogWrite(rgb_b, 0);
  }
}