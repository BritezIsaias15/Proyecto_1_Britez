#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[5];
int n = (int)length(nums);
  
void setup()
{
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void rando(int num[], int size)
{
  for(int i = 0; i < size; i++)
  {
    int rand = random(0, 101);
    if(rand % 10 == 0)
    {
      num[i] = rand;
    }
    else
    {
      i--;
    }
  }
}

void loop()
{
  rando(nums, n);
  for(int i = 0; i < n; i++)
  {
    Serial.print(nums[i]);
    Serial.print(" ");
  }
  Serial.println();
  delay(5000);
}
