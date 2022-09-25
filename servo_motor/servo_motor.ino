#include<Servo.h>
Servo servo_9;
int pos=0;
void setup()
{
  servo_9.attach(9);
}
void loop()
{
  for(int pos=0; pos<=180; pos++)
  {
    servo_9.write(pos);
    delay(15);  //wait for 1 millisecond(s)
  }
  for(int pos=180; pos>=0; pos--)
  {
    servo_9.write(pos);
    delay(15);  //wait for 1 millisecond(s)
  }
}
