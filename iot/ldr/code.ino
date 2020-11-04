#define led 12        
int brightness = 0;     

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  
  brightness= analogRead(A0);
  if(brightness<400)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  Serial.print("Brightness: ");  
  Serial.println(brightness);
  
}