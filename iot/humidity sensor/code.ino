#include <Servo.h>
Servo myservo;
void setup()
{
  myservo.attach(6);
  Serial.begin(9600);
}
void loop()
{
  myservo.write(map(analogRead(A0),0,1023,0,180));
  delay(200);
}
