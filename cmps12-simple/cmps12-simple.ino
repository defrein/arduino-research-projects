#include <Wire.h>

#define _i2cAddress 0x60

#define BEARING_Register 2 
#define PITCH_Register 4 
#define ROLL_Register 5

int _bearing;
byte _byteHigh;
byte _byteLow;
char _pitch;
char _roll;

void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  _bearing = getWord(BEARING_Register);
  _pitch = getByte(PITCH_Register);
  _roll = getByte(ROLL_Register);
  
  Serial.print("Bearing: ");
  Serial.print(_bearing);
  Serial.print(", Pitch: ");
  Serial.print(_pitch);
  Serial.print(", Roll: ");
  Serial.println(_roll);

  delay(100);
}

int getWord(byte reg) {
  Wire.beginTransmission(_i2cAddress);
  Wire.write(reg);
  Wire.endTransmission(false);

  Wire.requestFrom(_i2cAddress, (byte)2);
  _byteHigh = Wire.read();
  _byteLow = Wire.read();
  return ((_byteHigh << 8) | _byteLow);
}

byte getByte(byte reg) {
  Wire.beginTransmission(_i2cAddress);
  Wire.write(reg);
  Wire.endTransmission(false);

  Wire.requestFrom(_i2cAddress, (byte)1);
  return Wire.read();
}
