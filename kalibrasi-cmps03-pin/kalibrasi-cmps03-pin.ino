#include <Wire.h>

#define ADDRESS 0x60 // Alamat kompas
#define CALIBRATION_PIN 6 // Pin yang terhubung ke saklar kalibrasi

void setup() {
  Wire.begin(); // Inisialisasi I2C
  Serial.begin(115200);
  pinMode(CALIBRATION_PIN, INPUT_PULLUP); // Setel pin kalibrasi sebagai input dengan resistor pull-up internal
}

void loop() {
  byte highByte;
  byte lowByte;

  // Cek apakah tombol kalibrasi ditekan
  if (digitalRead(CALIBRATION_PIN) == LOW) {
    Serial.println("Button Pressed - Starting Calibration");
    // Mulai kalibrasi
    delay(100); // Debouncing
    while(digitalRead(CALIBRATION_PIN) == LOW); // Tunggu tombol dilepas
    Serial.println("Calibration step initiated. Move to the next compass direction.");
  }
  
  // Baca nilai kompas
  Wire.beginTransmission(ADDRESS); // Mulai komunikasi dengan CMPS03
  Wire.write(2); // Minta register yang ingin kita baca (register 2)
  Wire.endTransmission();
  
  Wire.requestFrom(ADDRESS, 2); // Minta 2 byte data
  while(Wire.available() < 2); // Tunggu sampai 2 byte diterima
  highByte = Wire.read(); // Baca byte tinggi
  lowByte = Wire.read(); // Baca byte rendah
  int bearing = ((highByte << 8) + lowByte) / 10;
   
  Serial.println(bearing); // Cetak nilai kompas
  delay(100); // Penundaan untuk stabilitas
}
