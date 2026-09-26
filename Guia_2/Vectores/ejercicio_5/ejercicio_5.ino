#define led1 2
#define led2 4
#define length(v) (sizeof(v) / sizeof(v[0]))

int nums1[] = { 1, 0, 0, 1, 1, 0, 1, 1};
int nums2[] = { 0, 1, 0, 1, 0, 0, 1, 0};
int n = (int)length(nums1);

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  for(int i = 0; i < n; i++)
  {
    digitalWrite(led1, nums1[i]);
    digitalWrite(led2, nums2[i]);
    delay(250);
  }
  delay(1000);
}
