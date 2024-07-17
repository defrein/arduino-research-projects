// Menyimpan status LED built-in
bool ledStatus = false;

void setup() {
  // Inisialisasi port serial dengan kecepatan 9600 bps
  Serial.begin(9600);
  // Atur pin built-in LED sebagai output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Baca data yang dikirim dari Python
  if (Serial.available() > 0) {
    char command = Serial.read();
    // Jika perintah yang diterima adalah '1', nyalakan LED
    if (command == '1') {
      digitalWrite(LED_BUILTIN, HIGH); // Nyalakan LED
      ledStatus = true; // Update status LED
      Serial.println("LED turned ON");
    }
    // Jika perintah yang diterima adalah '0', matikan LED
    else if (command == '0') {
      digitalWrite(LED_BUILTIN, LOW); // Matikan LED
      ledStatus = false; // Update status LED
      Serial.println("LED turned OFF");
    }
    // Jika perintah yang diterima adalah 'S', kirim status LED
    else if (command == 'S') {
      Serial.println(ledStatus);
    }
  }
  
  delay(100);
}
