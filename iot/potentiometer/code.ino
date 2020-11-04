int led = 12;          
int brightness = 0;     

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  brightness=map(analogRead(A0),0,1023,0,255);
  analogWrite(led, brightness);
  Serial.print("Brightness: ");
  Serial.println(brightness);
  
}