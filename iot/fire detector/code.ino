#define temp A0
#define buzzer 12
void setup()
{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
  float milivolts=analogRead(temp)*0.004882814;
  float celsius=(milivolts-0.5)*100.0;
  Serial.print(celsius);
  Serial.println("`C");
  float faran=(celsius*9.0/5.0)+32.0;
  Serial.print(faran);
  Serial.println("`F");
  if(celsius>37.0)
  {
    digitalWrite(buzzer,HIGH);
    tone(buzzer,500,1000);
    Serial.println("FIRE FIRE FIRE");
  }
  else
  {
    digitalWrite(buzzer,LOW);
    Serial.println("CHILL CHILL CHILL");
  }
  delay(100);
}
