#define led 12
#define sensor 6
bool state=false;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  if(digitalRead(sensor)==HIGH)
  {
    digitalWrite(led,HIGH);
    if(!state)
    {
      Serial.println("motion detected"); 
      state=true;
    }
    
  }
  else
  {
    digitalWrite(led,LOW);
    if(state)
    {
      Serial.println("motion stopped");
      state=false;
    }
  }
  delay(100);
}