#include <Wire.h>

#define ADDRESS 0x60 // Defines address of compass
#define CALIBRATION_PIN 6 // Define pin connected to calibration switch

void setup(){
  Wire.begin(); // Connects I2C
  Serial.begin(115200);
  pinMode(CALIBRATION_PIN, INPUT_PULLUP); // Set the calibration pin as input with internal pull-up resistor
}

void loop(){
  byte highByte;
  byte lowByte;
  
  // Check if calibration switch is pressed
  if (digitalRead(CALIBRATION_PIN) == LOW) {
    // Start calibration
    Wire.beginTransmission(ADDRESS); // Starts communication with CMPS03
    Wire.write(15); // Send the register we wish to write to (register 15)
    Wire.write(255); // Send the value 255 to initiate calibration
    Wire.endTransmission();
    delay(500); // Delay for stability
    Serial.println("Calibration initiated."); // Print message indicating calibration initiation
  }
  
  // Read compass value
  Wire.beginTransmission(ADDRESS); // Starts communication with CMPS03
  Wire.write(2); // Sends the register we wish to read from (register 2)
  Wire.endTransmission();
  
  Wire.requestFrom(ADDRESS, 2); // Requests 2 bytes of data
  while(Wire.available() < 2); // Wait until 2 bytes are received
  highByte = Wire.read(); // Read the high byte
  lowByte = Wire.read(); // Read the low byte
  int bearing = ((highByte<<8)+lowByte)/10; 
   
  Serial.println(bearing); // Print compass value
  delay(100); // Delay for stability
}
