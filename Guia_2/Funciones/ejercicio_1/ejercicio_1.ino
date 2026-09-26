#define buzzer A1
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_REST 0

void melodia1(int buzzer) {
  int notas[] = { NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5 };
  int durac[] = { 150, 150, 150, 300 };
  int totNotas = sizeof(notas) / sizeof(notas[0]);

  for (int i = 0; i < totNotas; i++) {
    if (notas[i] != NOTE_REST) {
      tone(buzzer, notas[i], durac[i]);
    }
    delay(durac[i] * 1.30);
  }
  noTone(buzzer);
}

void melodia2(int buzzer) {
  int notas[] = { NOTE_G4, NOTE_C5 };
  int durac[] = { 100, 200 };
  int totNotas = sizeof(notas) / sizeof(notas[0]);

  for (int i = 0; i < totNotas; i++) {
    tone(buzzer, notas[i], durac[i]);
    delay(durac[i] * 1.20);
  }
  noTone(buzzer);
}

void melodia3(int buzzer) {
  int notas[] = { NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4 };
  int durac[] = { 200, 200, 200, 500 };
  int totNotas = sizeof(notas) / sizeof(notas[0]);

  for (int i = 0; i < totNotas; i++) {
    tone(buzzer, notas[i], durac[i]);
    delay(durac[i] * 1.25);
  }
  noTone(buzzer);
}

void setup()
{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Melodia 1.");
  melodia1(buzzer);
  delay(2000);

  Serial.println("Melodia 2.");
  melodia2(buzzer);
  delay(2000);

  Serial.println("Melodia 3.");
  melodia3(buzzer);
  delay(4000);
}
