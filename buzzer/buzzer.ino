// Buzzer code

int buzzer =9;
void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer,450);
  delay(1000);
  noTone(buzzer);
  delay(1000);
}
