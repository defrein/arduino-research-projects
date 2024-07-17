#include <LSA08.h>

LSA08 L;
LSA08 L2;

void setup()
{
  // Begin Serial Communication for the Debugger.
  Serial.begin(115200);
  // Attach Analog Pin to the LSA.
  L.AttachAnalogPin(A1);
  L2.AttachAnalogPin(A2);
}

void loop()
{
  Serial.print(L.ReadLSA());
  Serial.print(" ");
  Serial.println(L2.ReadLSA());
}
