#include <SRF05.h>
#include <Wire.h>

SRF05 srf(31, 30);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long distance = 0;
  for (int i = 0; i < 5; i++) {
    distance += srf.ping();
    delay(50);  
  }
  
  distance /= 5;
  Serial.println(distance);
  delay(1000);
}
