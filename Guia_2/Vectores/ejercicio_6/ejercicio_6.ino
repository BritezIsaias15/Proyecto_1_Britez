#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[] = { 2, 6, 10, 11};
int n = (int)length(nums);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < n; i++)
  {
    Serial.print("Primeros 5 multiplos de ");
    Serial.print(nums[i]);
    Serial.print(": ");
    for(int j = 0; j < 5; j++)
    {
      int mult = nums[i] * j;
      Serial.print(mult);
      Serial.print(" ");
    }
    Serial.println();
  }
  delay(5000);
}
