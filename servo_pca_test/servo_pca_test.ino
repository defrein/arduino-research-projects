#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver myServo = Adafruit_PWMServoDriver();

#define SERVOMIN 150  // Minimum pulse length count for 0 degrees
#define SERVOMAX 600  // Maximum pulse length count for 360 degrees

void setup() {
  Serial.begin(9600);
  myServo.begin();
  myServo.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
  delay(10);
  Serial.println("Enter angle for servo on channel 1 (0 to 360 degrees):");
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();  // Remove any leading or trailing whitespace
    if (isValidNumber(input)) {
      int angle = input.toInt();
      if (angle >= 0 && angle <= 360) {
        setServoAngle(1, angle);
      } else {
        Serial.println("Please enter a valid angle between 0 and 360.");
      }
    } else {
      Serial.println("Invalid input. Please enter a numeric angle.");
    }
  }
}

// Function to convert degrees to pulse width for 0 to 360 degrees
uint16_t degreeToPulse(float degree) {
  return SERVOMIN + (degree * (SERVOMAX - SERVOMIN) / 360);
}

// Function to set servo angle
void setServoAngle(uint8_t channel, float angle) {
  uint16_t pulselen = degreeToPulse(angle);
  myServo.setPWM(channel, 0, pulselen);
  Serial.print("Channel ");
  Serial.print(channel);
  Serial.print(" set to ");
  Serial.print(angle);
  Serial.println(" degrees");
}

// Function to check if input string is a valid number
bool isValidNumber(String str) {
  if (str.length() == 0) return false;
  if (str[0] == '-' && str.length() > 1) str = str.substring(1);  // Handle negative numbers
  for (char c : str) {
    if (!isDigit(c)) return false;
  }
  return true;
}
