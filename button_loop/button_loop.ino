const int power_btn = 2;
bool isButtonPressed = false;

bool isLooping = false; // inisialisasi flag looping

void setup() {
  pinMode(power_btn, INPUT_PULLUP); // set pin button sebagai input dengan pull-up resistor
}

void loop() {
  int state = digitalRead(power_btn);
  
  if(state == LOW && !isButtonPressed){ // jika button ditekan (nilai input = 0)
    // robot ON
    isButtonPressed = true;
    Serial.println("Robot ON");

    // fungsi
    isLooping = true;
    int angka = 0;
    while(!angka && isLooping){
      Serial.println("YAHAHA");
      if (state == HIGH && isButtonPressed) {
        isLooping = false;
        isButtonPressed = false;
        Serial.println("Robot OFF dari looping");
      }
    }
  }
  else if (state == HIGH && isButtonPressed){
    // robot OFF
    isButtonPressed = false;
    Serial.println("Robot OFF");
  }
}
