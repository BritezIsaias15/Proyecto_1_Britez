#define r1 13
#define r2 2
#define b1 12
#define b2 3
#define g1 11
#define g2 4

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite( r1 , 1 );
  delay(1000);
  digitalWrite( r1 , 0 );
  digitalWrite( g1 , 1 );
  digitalWrite( b1 , 1 );
  delay(1000);
  digitalWrite( b1 , 0);
  delay(1000);
  digitalWrite( g1 , 0 );
  digitalWrite( r1 , 1 );
  digitalWrite( b1 , 1 );
  delay(1000);
  digitalWrite( r1 , 0 );
  delay(1000);
  digitalWrite( r1 , 1 );
  digitalWrite( g1 , 1 );
  delay(1000);
  digitalWrite( b1 , 0 );
  delay(1000);
  digitalWrite( r1 , 0 );
  digitalWrite( g1 , 0 );

  digitalWrite( r2 , 1 );
  delay(1000);
  digitalWrite( r2 , 0 );
  digitalWrite( g2 , 1 );
  digitalWrite( b2 , 1 );
  delay(1000);
  digitalWrite( b2 , 0);
  delay(1000);
  digitalWrite( g2 , 0 );
  digitalWrite( r2 , 1 );
  digitalWrite( b2 , 1 );
  delay(1000);
  digitalWrite( r2 , 0 );
  delay(1000);
  digitalWrite( r2 , 1 );
  digitalWrite( g2 , 1 );
  delay(1000);
  digitalWrite( b2 , 0 );
  delay(1000);
  digitalWrite( r2 , 0 );
  digitalWrite( g2 , 0 );    
}