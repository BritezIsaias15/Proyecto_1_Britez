#define led 2
#define button 4
#define length(v) (sizeof(v) / sizeof(v[0]))

int secuen[5];
int n = (int)length(secuen);

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  
  for(int i = 0; i < n; i++)
  {
    digitalWrite(led, 1);
    delay(2000);
    int estado = digitalRead(button);
    secuen[i] = estado;
    digitalWrite(led, 0);
    delay(1000);
  }
  for(int i = 0; i < n; i++)
  {
    Serial.print(secuen[i]);
    Serial.print(" ");
  }
}
