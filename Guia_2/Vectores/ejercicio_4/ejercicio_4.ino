#define led 2
#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[] = { 1, 0, 0, 1, 1, 0, 1, 1};
int n = (int)length(nums);

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i = 0; i < n; i++)
  {
    digitalWrite(led, nums[i]);
    delay(100);
  }
  delay(1000);
}
