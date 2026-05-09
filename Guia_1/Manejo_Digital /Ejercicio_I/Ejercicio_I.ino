#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define led5 9
#define led6 8
#define led7 7
#define led8 6
#define led9 5
#define led10 4
#define button 2

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

  bool ultimaVez = HIGH;
  int ledInicial = 0;
  bool pausa = false;

void loop()
{
  bool boton = digitalRead(button);
  
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
  digitalWrite(led5, 0);
  digitalWrite(led6, 0);
  digitalWrite(led7, 0);
  digitalWrite(led8, 0);
  digitalWrite(led9, 0);
  digitalWrite(led10, 0);
  
   if (boton == LOW && ultimaVez == HIGH)
  {
    pausa = !pausa;
    delay(100);
  }
  
  ultimaVez = boton;
  
  if (!pausa)
  {
    ledInicial ++;
    if (ledInicial > 10) ledInicial = 1;
    
    if (ledInicial == 1) //1
    {
      digitalWrite(led1, 1);
    }
    if (ledInicial == 2) //2
    {
      digitalWrite(led2, 1);
    }
    if (ledInicial == 3) //3
    {
      digitalWrite(led3, 1);
    }
    if (ledInicial == 4) //4
    {
      digitalWrite(led4, 1);
    }
    if (ledInicial == 5) //5
    {
      digitalWrite(led5, 1);
    }
    if (ledInicial == 6) //6
    {
      digitalWrite(led6, 1);
    }
    if (ledInicial == 7) //7
    {
      digitalWrite(led7, 1);
    }
    if (ledInicial == 8) //8
    {
      digitalWrite(led8, 1);
    }
    if (ledInicial == 9) //9
    {
      digitalWrite(led9, 1);
    }
    if (ledInicial == 10) //10
    {
      digitalWrite(led10, 1);
    }
    
    delay(200);
  }
  if (ledInicial == 1) //1
    {
      digitalWrite(led1, 1);
    }
    if (ledInicial == 2) //2
    {
      digitalWrite(led2, 1);
    }
    if (ledInicial == 3) //3
    {
      digitalWrite(led3, 1);
    }
    if (ledInicial == 4) //4
    {
      digitalWrite(led4, 1);
    }
    if (ledInicial == 5) //5
    {
      digitalWrite(led5, 1);
    }
    if (ledInicial == 6) //6
    {
      digitalWrite(led6, 1);
    }
    if (ledInicial == 7) //7
    {
      digitalWrite(led7, 1);
    }
    if (ledInicial == 8) //8
    {
      digitalWrite(led8, 1);
    }
    if (ledInicial == 9) //9
    {
      digitalWrite(led9, 1);
    }
    if (ledInicial == 10) //10
    {
      digitalWrite(led10, 1);
    }
}

