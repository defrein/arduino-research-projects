#include <LSA08.h>

LSA08 L;
LSA08 L2;

const byte junctionPulse = 8;   // Connect JPULSE of LSA08 to pin 4

unsigned int junctionCount = 0;   // Variable to store junction count value
volatile bool junctionDetected = false;  // Flag for junction detection

void setup() {
  // Begin Serial Communication for the Debugger.
  Serial.begin(115200);

  // Attach Analog Pin to the LSA.
  L.AttachAnalogPin(A1);
  L2.AttachAnalogPin(A2);

  // Set up JPULSE pin
  pinMode(junctionPulse, INPUT);
}

void loop() {
  // Read and print LSA sensor values
  Serial.print(L.ReadLSA());
  Serial.print(" ");
  Serial.println(L2.ReadLSA());

  if(digitalRead(junctionPulse)) {
    while(digitalRead(junctionPulse)) {
      Serial.print("Junction detected!");
    }
  }

  delay(100); // Adjust the delay as needed
}
