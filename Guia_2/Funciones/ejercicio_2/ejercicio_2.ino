#define echo 3
#define trig 5

void setup()
{
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

float distancia(int Echo, int Trig)
{
  digitalWrite(Trig, LOW);
  delayMicroseconds(2); 
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
    
  float tiempo =  pulseIn(Echo, HIGH);
  float dist = tiempo / 57.6;
  
  return dist;
}

void loop()
{
  float dist = distancia(echo, trig);
  
  Serial.print("Distancia: ");
  Serial.print(dist);
  Serial.println("cm");
  
  delay(100);
}
