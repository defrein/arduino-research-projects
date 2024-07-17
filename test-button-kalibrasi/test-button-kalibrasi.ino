#include <Wire.h>

#define ADDRESS 0x60 // Address of CMPS03 compass
#define CALIBRATION_PIN 6 // Pin on CMPS03 used for calibration

void setup() {
  Wire.begin(); // Initialize I2C
  Serial.begin(115200); // Initialize Serial communication
  Serial.println("CMPS03 Compass Initialization Complete");
  Serial.println("To start calibration: Point the compass North, press and release the button.");
}

void loop() {
  byte highByte;
  byte lowByte;

  // Read compass value
  Wire.beginTransmission(ADDRESS); // Start communication with CMPS03
  Wire.write(2); // Request register 2
  Wire.endTransmission();
  Wire.requestFrom(ADDRESS, 2); // Request 2 bytes of data
  
  while (Wire.available() < 2); // Wait until 2 bytes are received
  highByte = Wire.read(); // Read the high byte
  lowByte = Wire.read(); // Read the low byte
  int bearing = ((highByte << 8) + lowByte) / 10;

  Serial.print("Compass Bearing: ");
  Serial.println(bearing); // Print compass value
  delay(500); // Delay for stability
  
  // Check if calibration button on CMPS03 was pressed
  if (Serial.available() > 0) {
    char input = Serial.read();
    if (input == 'n') {
      Serial.println("Calibration Step: North - Press the button on CMPS03");
    }
    if (input == 'e') {
      Serial.println("Calibration Step: East - Press the button on CMPS03");
    }
    if (input == 's') {
      Serial.println("Calibration Step: South - Press the button on CMPS03");
    }
    if (input == 'w') {
      Serial.println("Calibration Step: West - Press the button on CMPS03");
    }
  }
}
