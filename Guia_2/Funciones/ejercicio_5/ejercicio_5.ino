int resultado;

void setup()
{
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

int lanzarDado(int lados)
{
  resultado = random(1, lados + 1);
  return resultado;
}

void loop()
{
  resultado = lanzarDado(6);
  Serial.print("Lanzamiento de 6 caras: ");
  Serial.println(resultado);
  
  resultado = lanzarDado(20);
  Serial.print("Lanzamiento de 20 caras: ");
  Serial.println(resultado);
  
  delay(2500);
}
