/*Program arduino dengan ultrasonic distance sensor */


//inisialisasi
int trigPin = 10;
int echoPin = 11;
long duration;
int jarakCm;

void setup(){
pinMode(trigPin, OUTPUT);     //trigPin sebagai output
pinMode(echoPin, INPUT);    //echoPin sebagai input
Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);     //trigPin diberi sinyal LOW (di-OFF kan)
  delayMicroseconds(2);       //selama 2 microseconds
  digitalWrite(trigPin, HIGH);    //trigPin diberi sinyal HIGH
  delayMicroseconds(10);      //selama 10 microseconds
  digitalWrite(trigPin, LOW);     //trigPin diberi sinyal LOW (di-OFF kan)
  duration = pulseIn(echoPin, HIGH); //variable echoPin menunggu sinyal pantul HIGH
  jarakCm = (duration/2) * 0.034;   //rumus jarak dalam cm
  Serial.print("Distance: ");
  Serial.print(jarakCm);
  Serial.println(" cm");
}
