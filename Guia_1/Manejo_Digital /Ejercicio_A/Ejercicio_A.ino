#define r 4
#define y 3
#define g 2
#define po 8
#define pw 9

void setup()
{
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 8 , OUTPUT);
  pinMode( 9 , OUTPUT);
}

void loop()
{
  digitalWrite( r , 1 );
  digitalWrite( pw , 1 );
  delay(5000);
  digitalWrite( y , 1 );
  delay(2000);
  digitalWrite( r , 0 );
  digitalWrite( y , 0 );
  digitalWrite( g , 1 );
  digitalWrite( pw , 0 );
  digitalWrite( po , 1 );
  delay(5000);
  digitalWrite( y , 1 );
  delay(2000);
  digitalWrite( g , 0 );
  digitalWrite( y , 0 );
  digitalWrite( po , 0 );
}