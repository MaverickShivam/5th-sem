#define temp A0
void setup()
{
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
  delay(100);
}
