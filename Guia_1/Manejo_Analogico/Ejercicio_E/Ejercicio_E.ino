#define red 11
#define green 9
#define blue 10
#define poteR A0
#define poteG A1
#define poteB A2

//#define X

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(poteR, INPUT);
  pinMode(poteG, INPUT);
  pinMode(poteB, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int poteRR = analogRead(poteR);
  int poteGG = analogRead(poteG);
  int poteBB = analogRead(poteB);
  int newPoteR = map (poteRR, 0, 1023, 0, 255);
  int newPoteG = map (poteGG, 0, 1023, 0, 255);
  int newPoteB = map (poteBB, 0, 1023, 0, 255);
  analogWrite(red, newPoteR);
  analogWrite(green, newPoteG);
  analogWrite(blue, newPoteB);

  #ifdef X
    Serial.print("R:");
    Serial.print(newPoteR);
    Serial.print(" - G: ");
    Serial.print(newPoteG);
    Serial.print(" - B: ");
    Serial.println(newPoteB);
  #endif
  delay(10);
}