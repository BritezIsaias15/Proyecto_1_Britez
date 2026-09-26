#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[] = {10, 5, 2, 6, 3, 1, 8, 7, 9, 4};
int n = (int)length(nums);

void setup()
{
  Serial.begin(9600);
}

void ordenar(int num[], int size)
{
  for(int i = 0; i < size - 1; i++)
  {
    for(int j = i + 1; j < size; j++)
    {
      if(num[i] < num[j])
      {
        int aux = num[i];
        num[i] = num[j];
        num[j] = aux;
      }
    }
  }
}

void loop()
{
  ordenar(nums, n);
  
  for(int i = 0; i < n; i++)
  {
    Serial.print(nums[i]);
    Serial.print(" ");
  }
  Serial.println();
  
  delay(2500);
}
