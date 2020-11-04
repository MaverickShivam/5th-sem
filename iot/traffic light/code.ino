#define yellow 10
#define green 11
#define red 12
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
void turnon(int mypin,int mytime)
{
  digitalWrite(mypin,HIGH);
  delay(mytime);
  digitalWrite(mypin,LOW);

}
void loop()
{
  turnon(red, 3000);
  turnon(yellow, 1500);
  
  turnon(green, 3000);
  turnon(yellow, 1500);
}

