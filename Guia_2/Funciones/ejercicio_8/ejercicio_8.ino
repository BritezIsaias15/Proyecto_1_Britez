#define length(v) (sizeof(v) / sizeof(v[0]))

void setup()
{
  Serial.begin(9600);
}

bool verificar(int num1, int num2)
{
  if(num1 % num2 == 0)
  {
    Serial.print(num1);
    Serial.print(" es multiplo de ");
    Serial.print(num2);
    Serial.println();
    return true;
  }
  else if(num2 == 0)
  {
    Serial.print("No es posible dividir por 0");
    Serial.println();
    return false;
  }
  else
  {
    Serial.print(num1);
    Serial.print(" no es multiplo de ");
    Serial.print(num2);
    Serial.println();
    return false;
  }
}

void loop()
{
  verificar(15, 5);
  verificar(12, 10);
  verificar(9, 0);
  delay(5000);
}
