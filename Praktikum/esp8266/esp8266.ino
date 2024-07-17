int LedPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LedPin, LOW);
  Serial.println("Led OFF");
  delay(1000);
  digitalWrite(LedPin, HIGH);
  Serial.println("Led ON");
  delay(1000);
}
