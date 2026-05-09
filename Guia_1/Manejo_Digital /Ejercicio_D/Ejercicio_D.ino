#define r 13
#define g 12
void setup()
{
  pinMode( 13 , OUTPUT );
  pinMode( 12 , OUTPUT );
  pinMode( 3 , OUTPUT );
}

void loop()
{
  digitalWrite( r , 1 );
  delay(2500);
  digitalWrite( g , 1 );
  digitalWrite( r , 0 );
  delay(2500);
  digitalWrite( 3 , 1 );
  delay(2500);
  digitalWrite( g , 0 );
  digitalWrite( 3 , 0 );
}