#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int promedio = 0;
  for(int i = 0; i < (int)length(nums); i++)
  {
    promedio += nums[i];
  }
  promedio = promedio / (int)length(nums);
  Serial.println(promedio);
  delay(5000);
}
