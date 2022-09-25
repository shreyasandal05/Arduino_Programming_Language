void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  analogWrite(11,64);
  Serial.println("64");
  delay(1000);  // wait for 1000 milliseconds
  digitalWrite(11,127);
  Serial.println("127");
  delay(1000);
  analogWrite(11,191);
  Serial.println("191");
  delay(1000);
  digitalWrite(11,255);
  Serial.println("255");
  delay(1000);
}
