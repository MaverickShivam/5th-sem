#include <IRremote.h>
#include <Servo.h>



#define irsensor 10
#define servo1 11

IRrecv irrecv(irsensor);
Servo myservo;
decode_results results;
void setup()
{
  myservo.attach(servo1);
  irrecv.enableIRIn();
  Serial.begin(9600);

}

void loop()
{
   if (irrecv.decode(&results)){
     	switch(results.value)
        {
          case 0xFD20DF:
          	myservo.write(0);
          	break;
          case 0xFD609F:
          	myservo.write(180);
          	break;
          default:
          	Serial.println("Invalid Input");
        }
     	irrecv.resume();
  }
}