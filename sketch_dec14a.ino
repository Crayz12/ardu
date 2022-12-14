#include <NewPing.h>
#include <Servo.h>
#define Echo 3
#define Trig 2
#define SPIN 5
#define MAX_DIST 200
long dur, cm;
Servo Servo1;
NewPing sonar(Trig, Echo, MAX_DIST);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Servo1.attach(SPIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
  unsigned int distance = sonar.ping_cm();

  Serial.println(distance);
  if (distance < 30)
  {
    Servo1.write(0);
   }
   else
   {
    Servo1.write(90); 
   }
}
