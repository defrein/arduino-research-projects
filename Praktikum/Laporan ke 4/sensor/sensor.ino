const int pinSensor = 8;
const int pinRelay = 5;

void setup(){
  Serial.begin(9600);
  pinMode(pinSensor, INPUT_PULLUP);
  pinMode(pinRelay, OUTPUT);
}

void loop()
{
  if(digitalRead(pinSensor) == HIGH){
    while(digitalRead(pinSensor) == HIGH){}
    digitalWrite(pinRelay, !digitalRead(pinRelay));
  }
  Serial.println(digitalRead(pinSensor));
  delay(500);
}
