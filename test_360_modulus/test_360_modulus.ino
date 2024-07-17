void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int n = Serial.parseInt();
    int m = (n - 180) % 360;
    if (m < 0) {
      m += 360;
    }
    Serial.println(m);
  }
}
