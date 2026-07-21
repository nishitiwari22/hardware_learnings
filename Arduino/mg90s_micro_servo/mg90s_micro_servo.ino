#include <Servo.h>
Servo srituhobby;

void setup() {
  srituhobby.attach(3);
}

void loop() {
  srituhobby.write(0);
  delay(400);
  srituhobby.write(180);
  delay(400);
}


//https://srituhobby.com/arduino-nano-project-with-servo-motor-how-does-work-servo-motor/
