#define length(v) (sizeof(v) / sizeof(v[0]))

int leds[] = {2, 3, 4, 5, 6};
int n = (int)length(leds);

void setup()
{
  for(int i = 0; i < n; i++)
  {
    pinMode(leds[i], 1);
  }
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < n ; i++)
  {
    digitalWrite(leds[i], 1);
    delay(500);
    digitalWrite(leds[i], 0);
  }
}
