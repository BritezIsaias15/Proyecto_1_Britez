

void setup()
{
  pinMode(13 , OUTPUT);
  pinMode(12 , OUTPUT);
  pinMode(11 , OUTPUT);
  pinMode(10 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(7 , OUTPUT);
  pinMode(6 , OUTPUT);
  pinMode(5 , OUTPUT);
  pinMode(4 , OUTPUT);
}

void loop()
{
  digitalWrite( 13 , 1 );
  delay(500);
  digitalWrite( 12 , 1 );
  delay(500);
  digitalWrite( 11 , 1 );
  delay(500);
  digitalWrite( 10 , 1 );
  delay(500);
  digitalWrite( 9 , 1 );
  delay(500);
  digitalWrite( 8 , 1 );
  delay(500);
  digitalWrite( 7 , 1 );
  delay(500);
  digitalWrite( 6 , 1 );
  delay(500);
  digitalWrite( 5 , 1 );
  delay(500);
  digitalWrite( 4 , 1 );
  delay(1000);
  digitalWrite( 13 , 0 );
  digitalWrite( 12 , 0 );
  digitalWrite( 11 , 0 );
  digitalWrite( 10 , 0 );
  digitalWrite( 9 , 0 );
  digitalWrite( 8 , 0 );
  digitalWrite( 7 , 0 );
  digitalWrite( 6 , 0 );
  digitalWrite( 5 , 0 );
  digitalWrite( 4 , 0 );
  delay(100);
}