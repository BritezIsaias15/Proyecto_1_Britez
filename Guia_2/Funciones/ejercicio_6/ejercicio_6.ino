#define length(v) (sizeof(v) / sizeof(v[0]))

int pines[] = {2, 3, 4, 5, 6};
int n = (int)length(pines);

void setup()
{
  for(int i = 0; i < n; i++)
  {
    pinMode(pines[i], 1);
  }
  Serial.begin(9600);
}

void prender(int pins[], int size)
{
  for(int i = 0; i < size; i++)
  {
    digitalWrite(pins[i], 1);
  }
}

void apagar(int pins[], int size)
{
  for(int i = 0; i < size; i++)
  {
    digitalWrite(pins[i], 0);
  }
}

void loop()
{
  prender(pines, n);
  delay(1000);
  apagar(pines, n);
  delay(1000);
}
