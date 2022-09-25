// Blinking Two LED code
void setup(){
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop(){
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(1000);
}
