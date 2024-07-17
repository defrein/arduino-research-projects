//DEFINE SENSOR ULTRASONIK
//--------Belakang-----------//
#define echoblkg 52 
#define trigblkg 53 

int nilaiblkg;

void setup() {
  
  Serial.begin(9600);
  //--------Belakang-----------//
  pinMode(echoblkg, INPUT);
  pinMode(trigblkg, OUTPUT);
}

void loop() {
  Serial.print(" nilai belakang:");
  Serial.println(nilaiblkg);
}

void sensor_us(){
  digitalWrite(trigblkg, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigblkg, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigblkg, LOW);                   // Send pin low again
  nilaiblkg = pulseIn(echoblkg, HIGH);        // Read in times pulse
  nilaiblkg= nilaiblkg/58;  
}
