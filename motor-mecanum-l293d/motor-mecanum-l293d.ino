#include <AFMotor.h>

AF_DCMotor motor(1);


void setup(){
  motor.setSpeed(50);
  motor.run(RELEASE);
}

void loop(){
  motor.run(FORWARD);
  delay(3000);
  motor.run(BACKWARD);
  delay(3000);
}
