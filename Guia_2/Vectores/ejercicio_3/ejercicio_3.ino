#define length(v) (sizeof(v) / sizeof(v[0]))

float nums[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
int n = (int)length(nums);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float max = nums[0];
  for(int i = 1; i < n; i++)
  {
    if(max < nums[i])
    {
      max = nums[i]; 
    }
  }
  Serial.print("Max num: ");
  Serial.println(max);
  delay(5000);
}
