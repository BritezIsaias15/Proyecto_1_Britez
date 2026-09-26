#define length(v) (sizeof(v) / sizeof(v[0]))

int nums[] = {2, 3, 4, 5, 6, 7};
int funcion[] = {1, 1, 1, 0, 0, 1};
int n = (int)length(nums);
  
void setup()
{
  asignar(nums, funcion, n);
}

void asignar(int num[], int estado[], int size)
{
  for(int i = 0; i < size; i++)
  {
    pinMode(num[i], estado[i]);
  }
}

void loop()
{
  
}
