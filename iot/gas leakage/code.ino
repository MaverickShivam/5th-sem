

#define led 13
#define gas A0
int threshold=300;


void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int gasvalue=analogRead(gas);
  Serial.println(gasvalue);
  if(gasvalue>=threshold)
  {
    digitalWrite(led, HIGH);
    Serial.println("Smoke Detected");
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(50);
  
}