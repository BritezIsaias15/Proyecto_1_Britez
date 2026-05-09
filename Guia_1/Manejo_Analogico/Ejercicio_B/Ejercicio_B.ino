#define r1 12
#define r2 11
#define r3 10
#define r4 9
#define r5 6
#define r6 5
#define r7 3
#define r8 2

void setup()
{
  pinMode( r1, OUTPUT);
  pinMode( r2, OUTPUT);
  pinMode( r3, OUTPUT);
  pinMode( r4, OUTPUT);
  pinMode( r5, OUTPUT);
  pinMode( r6, OUTPUT);
  pinMode( r7, OUTPUT);
  pinMode( r8, OUTPUT);
}

void loop()
{
  digitalWrite( r1 , 0);
  delay(1000);
  analogWrite( r2 , 31);
  delay(1000);
  analogWrite( r3 , 62);
  delay(1000);
  analogWrite( r4 , 93);
  delay(1000);
  analogWrite( r5 , 134);
  delay(1000);
  analogWrite( r6 , 176);
  delay(1000);
  analogWrite( r7 , 210);
  delay(1000);
  digitalWrite( r8 , 1);
  delay(1000);
  analogWrite( r2 , 0);
  analogWrite( r3 , 0);
  analogWrite( r4 , 0);
  analogWrite( r5 , 0);
  analogWrite( r6 , 0);
  analogWrite( r7 , 0);
  digitalWrite( r8 , 0);
}