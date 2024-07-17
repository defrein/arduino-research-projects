#include <Servo.h>

Servo servo1;
//Servo servo2;

void setup() {
  servo1.attach(5);
//  servo2.attach(3);
}

void loop() {
  for (int i = 65; i <= 140; i+=2) {
    servo1.write(i);
//    servo2.write(180 - i);
    delay(15);
  }
  for (int i = 140; i >= 65; i-=2) {
    servo1.write(i);
//    servo2.write(180 - i);
    delay(15);
  }
}
