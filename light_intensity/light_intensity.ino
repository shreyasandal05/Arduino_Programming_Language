// Bright n fade

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  for(int i=0;i<255;i++){
    analogWrite(11,i);
    delay(1000);  // wait for 100 milliseconds
  }
  for(int j=255;j>0;j--){
    analogWrite(11,j);
    delay(1000);
  }
}
