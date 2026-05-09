#define led1 7
#define led2 6
#define led3 5
#define led4 4
#define led5 3
#define led6 2
#define buzzer 11

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  analogWrite(buzzer, 150);
  
  digitalWrite(led1, 1);
  delay(100);
  
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  delay(100);
    
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  delay(100);
  
  digitalWrite(led3, 0);
  digitalWrite(led4, 1);
  delay(100);
  
  analogWrite(buzzer, 50);
  
  digitalWrite(led4, 0);
  digitalWrite(led5, 1);
  delay(100);
  
  digitalWrite(led5, 0);
  digitalWrite(led6, 1);
  delay(100);
  
  digitalWrite(led6, 0);
  
  
  
  
  
  
}