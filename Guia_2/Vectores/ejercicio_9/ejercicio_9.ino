#define rgbr 3
#define rgbb 5
#define rgbg 6
#define length(v) (sizeof(v) / sizeof(v[0]))

int l1[] = {122, 234, 21};
int l2[] = {33, 53, 155};
int l3[] = {200, 255, 12};
int *colores[] = {l1, l2, l3};

int n = (int)length(colores);

void setup()
{
  pinMode(rgbr, OUTPUT);
  pinMode(rgbg, OUTPUT);
  pinMode(rgbb, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < n; i++)
  {
    analogWrite(rgbr, colores[i][0]);
    analogWrite(rgbg, colores[i][1]);
    analogWrite(rgbb, colores[i][2]);
    delay(1000);
  }
}
