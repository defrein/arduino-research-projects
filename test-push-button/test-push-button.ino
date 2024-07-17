int buttonState = 0;          // variabel untuk menyimpan status push button
int lastButtonState = 0;      // variabel untuk menyimpan status push button sebelumnya
int ledPin = 7;              // pin LED
int buttonPin = 2;            // pin push button

void setup() {
  pinMode(ledPin, OUTPUT);    // konfigurasi pin LED sebagai output
  pinMode(buttonPin, INPUT);  // konfigurasi pin push button sebagai input
}

void loop() {
  buttonState = digitalRead(buttonPin);  // membaca status push button

  if (buttonState != lastButtonState) {  // jika status push button berubah
    delay(50);                          // tunggu debouncing
    buttonState = digitalRead(buttonPin); // membaca status push button lagi
  }

  if (buttonState == HIGH) {        // jika push button ditekan
    digitalWrite(ledPin, LOW);    // nyalakan LED                    // tunggu 0,5 detik
        // matikan LED
  }else{
    digitalWrite(ledPin, HIGH); 
  }

  lastButtonState = buttonState;    // simpan status push button sebelumnya

  // jika push button ditekan dua kali secara berurutan
  if (buttonState == HIGH && lastButtonState == LOW) {
    delay(50);                      // tunggu debouncing
    buttonState = digitalRead(buttonPin); // baca status push button lagi
    if (buttonState == HIGH) {      // jika push button ditekan lagi
      asm volatile ("  jmp 0");     // reset mikrokontroler
    }
  }
}
