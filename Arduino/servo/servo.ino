#include <Servo.h>

Servo myServo, myServo2;

// MG995 servo, 90 = stop, 0 = CW full speed, 180 = anti CW full speed

void setup(){
  // put your setup code here, to run once:
  myServo.attach(10);
  myServo.write(80);
  delay(1000);
  myServo.write(90);
}

void loop(){
  
}
