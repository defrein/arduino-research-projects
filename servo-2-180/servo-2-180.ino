#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(2);./
  servo2.attach(3);
}

void loop() {
  for (int i = 0; i <= 180; i+=2) {
    servo1.write(i);
    servo2.write(180 - i);
    delay(15);
  }
  for (int i = 180; i >= 0; i-=2) {
    servo1.write(i);
    servo2.write(180 - i);
    delay(15);
  }
}
