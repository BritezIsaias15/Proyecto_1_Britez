#define rgb1_r 11
#define rgb1_b 12
#define rgb1_g 10
#define rgb2_r 13
#define rgb2_b 8
#define rgb2_g 9
#define rgb3_r 7
#define rgb3_b 6
#define rgb3_g 5
#define piezo 3

void setup()
{
  pinMode(rgb1_r, OUTPUT);
  pinMode(rgb1_b, OUTPUT);
  pinMode(rgb1_g, OUTPUT);
  pinMode(rgb2_r, OUTPUT);
  pinMode(rgb2_b, OUTPUT);
  pinMode(rgb2_g, OUTPUT);
  pinMode(rgb3_r, OUTPUT);
  pinMode(rgb3_b, OUTPUT);
  pinMode(rgb3_g, OUTPUT);
  pinMode(piezo, OUTPUT);
}

void loop()
{
  // Led 1
  analogWrite(rgb1_r, 255);
  
  delay(1000);
  
  analogWrite(rgb1_r, 0);
  
  analogWrite(piezo, 250);
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(piezo, 0);
  
  delay(100);
  
  // Led 2
  digitalWrite(rgb2_r, HIGH);
  digitalWrite(rgb2_b, HIGH);
  
  delay(1000);
  
  digitalWrite(rgb2_r, LOW);
  digitalWrite(rgb2_b, LOW);
  analogWrite(piezo, 250);
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(piezo, 0);
  
  // Led 3
  analogWrite(rgb3_b, 50);
  analogWrite(rgb3_g, 50);
  
  delay(1000);
  
  analogWrite(rgb3_b, 0);
  analogWrite(rgb3_g, 0);
  analogWrite(piezo, 250);
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  
  analogWrite(rgb1_r, 170);
  analogWrite(rgb1_g, 100);
  analogWrite(rgb2_r, 170);
  analogWrite(rgb2_g, 100);
  analogWrite(rgb3_r, 170);
  analogWrite(rgb3_g, 100);
  delay(25);
  
  analogWrite(rgb1_r, 0);
  analogWrite(rgb1_g, 0);
  analogWrite(rgb2_r, 0);
  analogWrite(rgb2_g, 0);
  analogWrite(rgb3_r, 0);
  analogWrite(rgb3_g, 0);
  delay(25);
  
  analogWrite(piezo, 0);
  
}