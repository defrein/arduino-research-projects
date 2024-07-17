//Viral Science  www.youtube.com/c/viralscience
//Arduino Flame Sensor

const int flamePin = 3;
int Flame = HIGH;
int greenled = 7;
void setup() 
{
  pinMode(greenled, OUTPUT);

  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  Flame = digitalRead(flamePin);
  if (Flame== LOW)
  {
    digitalWrite(greenled, HIGH);
  }
  else
  {
    digitalWrite(greenled, LOW);
  }
}
