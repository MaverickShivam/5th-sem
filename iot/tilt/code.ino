
#define tilt 7
#define led 13


void setup()
{
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  if(digitalRead(tilt))
  {
    digitalWrite(led, LOW);
  }
  else
  {
    digitalWrite(led, HIGH);
  }
  delay(100);
}