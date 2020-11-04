
#define triggerPin 2
#define echoPin 3
long inches = 0;

long cm = 0;


void setup()
{
  Serial.begin(9600);

}

void loop()
{
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(5);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  long duration=pulseIn(echoPin, HIGH);
  cm = 0.01723 * duration;
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.println("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100); // Wait for 100 millisecond(s)
}