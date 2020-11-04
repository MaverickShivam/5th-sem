

#define motor 9
#define ldr A0
int threshold=400;


void setup()
{
  pinMode(motor, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int ldrvalue=analogRead(ldr);
  Serial.println(ldrvalue);
  if(ldrvalue>400)
  {
    digitalWrite(motor, HIGH);
  }
  else
  {
    digitalWrite(motor,LOW);
  }
  delay(50);
  
}