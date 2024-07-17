//DEFINE SENSOR ULTRASONIK
//---------Depan-------------//
#define echodpn 22 
#define trigdpn 23
//--------Sisi Kanan---------//
#define echodpnknn 24  
#define trigdpnknn 25  
#define echoknn 26
#define trigknn 27
#define echoblkgknn 28
#define trigblkgknn 29
//--------Belakang-----------//
#define echoblkg 30 
#define trigblkg 31 
//--------Sisi Kiri----------//
#define echoblkgkr 32  
#define trigblkgkr 33  
#define echokr 34
#define trigkr 35
#define echodpnkr 36
#define trigdpnkr 37

int nilaidpn, nilaidpnknn, nilaiknn, nilaiblkgknn, nilaiblkg, nilaidpnkr, nilaikr, nilaiblkgkr;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //---------Depan-------------//
  pinMode(echodpn, INPUT);
  pinMode(trigdpn, OUTPUT);
  //--------Sisi Kanan---------//
  pinMode(echodpnknn, INPUT);  
  pinMode(trigdpnknn, OUTPUT);  
  pinMode(echoknn, INPUT);
  pinMode(trigknn, OUTPUT);
  pinMode(echoblkgknn, INPUT);
  pinMode(trigblkgknn, OUTPUT);
  //--------Belakang-----------//
  pinMode(echoblkg, INPUT);
  pinMode(trigblkg, OUTPUT);
  //--------Sisi Kiri----------//
  pinMode(echoblkgkr, INPUT);  
  pinMode(trigblkgkr, OUTPUT);  
  pinMode(echokr, INPUT);
  pinMode(trigkr, OUTPUT);
  pinMode(echodpnkr, INPUT);
  pinMode(trigdpnkr, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_us();
  Serial.print(" nilai dpn: ");
  Serial.print(nilaidpn);
  Serial.print(" nilai dpn kanan: ");
  Serial.print(nilaidpnknn);
  Serial.print(" nilai kanan: ");
  Serial.print(nilaiknn);
  Serial.print(" nilai blkg kanan: ");
  Serial.print(nilaiblkgknn);
  Serial.print(" nilai belakang: ");
  Serial.print(nilaiblkg);
  Serial.print(" nilai dpn kiri: ");
  Serial.print(nilaidpnkr);
  Serial.print(" nilai kiri: ");
  Serial.print(nilaikr);
  Serial.print(" nilai blkg kiri: ");
  Serial.println(nilaiblkgkr);
}

void sensor_us(){
  //-------------------------------1 
  digitalWrite(trigdpn, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigdpn, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigdpn, LOW);                   // Send pin low again
  nilaidpn = pulseIn(echodpn, HIGH);        // Read in times pulse
  nilaidpn= nilaidpn/58;  
  //-------------------------------2
  digitalWrite(trigdpnknn, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigdpnknn, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigdpnknn, LOW);                   // Send pin low again
  nilaidpnknn = pulseIn(echodpnknn, HIGH);        // Read in times pulse
  nilaidpnknn= nilaidpnknn/58;  
  //-------------------------------3
  digitalWrite(trigknn, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigknn, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigknn, LOW);                   // Send pin low again
  nilaiknn = pulseIn(echoknn, HIGH);        // Read in times pulse
  nilaiknn= nilaiknn/58; 
  //-------------------------------4 
  digitalWrite(trigblkgknn, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigblkgknn, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigblkgknn, LOW);                   // Send pin low again
  nilaiblkgknn = pulseIn(echoblkgknn, HIGH);        // Read in times pulse
  nilaiblkgknn= nilaiblkgknn/58;  
  //-------------------------------5
  digitalWrite(trigblkg, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigblkg, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigblkg, LOW);                   // Send pin low again
  nilaiblkg = pulseIn(echoblkg, HIGH);        // Read in times pulse
  nilaiblkg= nilaiblkg/58;  
  //-------------------------------6
  digitalWrite(trigdpnkr, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigdpnkr, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigdpnkr, LOW);                   // Send pin low again
  nilaidpnkr = pulseIn(echodpnkr, HIGH);        // Read in times pulse
  nilaidpnkr= nilaidpnkr/58; 
  //-------------------------------7 
  digitalWrite(trigkr, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigkr, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigkr, LOW);                   // Send pin low again
  nilaikr = pulseIn(echokr, HIGH);        // Read in times pulse
  nilaikr= nilaikr/58;  
  //-------------------------------8
  digitalWrite(trigblkgkr, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigblkgkr, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigblkgkr, LOW);                   // Send pin low again
  nilaiblkgkr = pulseIn(echoblkgkr, HIGH);        // Read in times pulse
  nilaiblkgkr= nilaiblkgkr/58; 
}
