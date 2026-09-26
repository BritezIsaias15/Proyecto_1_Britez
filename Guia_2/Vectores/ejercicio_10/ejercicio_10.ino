#define buzzer A1
#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[10];
int n = (int)length(nums);

void setup()
{
  pinMode(buzzer, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0;i < n; i++)
  {
    nums[i] = random(0, 11);
  }
  for(int i = 0; i < n; i++)
  {
    Serial.print(nums[i]);
    Serial.print(" ");
   if(nums[i] == 5)
   {
      tone(buzzer, 130, 500);
   }
  }
  Serial.println();
  delay(1000);
}
