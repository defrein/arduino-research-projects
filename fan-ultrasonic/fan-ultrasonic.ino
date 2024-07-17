long distance;
long time;

void setup(){
  Serial.begin(9600);
  pinMode(4, OUTPUT); 
  pinMode(2, INPUT); 
}

void loop(){
  digitalWrite(2,LOW);
  delayMicroseconds(5);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);

  time = pulseIn(4, HIGH);
  distance = int(0.017*time); 

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm.");
  delay(1000);
}
