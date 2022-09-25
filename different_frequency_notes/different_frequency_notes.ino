//creates notes of different frequency

int buzzer = 9;
void setup(){
  pinMode(buzzer, OUTPUT); //sets digital pin as output
}

void loop(){
  // creating more notes by changing frequency and duration
  int notes[10]={234,324,432,543,232,267,876,368,123,980}; // an array having different frequency
//  {234,264,234,314,294,234,264,354,314} : Birthday note

  for(int i=0;i<10;i++){
    tone(buzzer,notes[i]);
    delay(1000);
  }
  noTone(buzzer); //stops tone
  delay(1000);
}
