#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[] = { 10, 4, 2};
int n = (int)length(nums);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < n - 1 ; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if(nums[i] > nums[j])
      {
        int aux = nums[i];
        nums[i] = nums[j];
        nums[j] = aux;
      }
    }
  }
  for(int i = 0; i < n; i++)
  {
    Serial.print(nums[i]);
    Serial.print(" ");
  }
  Serial.println("");
  delay(5000);
}
