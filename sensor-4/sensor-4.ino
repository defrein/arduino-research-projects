//DEFINE SENSOR ULTRASONIK
// ------------- ultrasonik depan
#define echodpn 35
#define trigdpn 37
// ------------- ultrasonik belakang
#define echoblkg 46 
#define trigblkg 48
// ------------- ultrasonik kanan
#define echoknn 50 
#define trigknn 52
// ------------- ultrasonik kiri
#define echokr 42 
#define trigkr 44

// baru
//#define echobaru 39
//#define trigbaru 41

int nilaidpn, nilaiknn, nilaiblkg, nilaikr;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //---------Depan-------------//
  pinMode(echodpn, INPUT);
  pinMode(trigdpn, OUTPUT);
  //--------Sisi Kanan---------//
  pinMode(echoknn, INPUT);
  pinMode(trigknn, OUTPUT);
  //--------Belakang-----------//
  pinMode(echoblkg, INPUT);
  pinMode(trigblkg, OUTPUT);
  //--------Sisi Kiri----------// 
  pinMode(echokr, INPUT);
  pinMode(trigkr, OUTPUT);
  //--------BARU----------// 
//  pinMode(echobaru, INPUT);
//  pinMode(trigbaru, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_us();
  Serial.print(" nilai dpn: ");
  Serial.print(nilaidpn);
  Serial.print(" nilai kanan: ");
  Serial.print(nilaiknn);
  Serial.print(" nilai belakang: ");
  Serial.print(nilaiblkg);
  Serial.print(" nilai kiri: ");
  Serial.println(nilaikr);
  delay(200);
//  Serial.print(" US BARU: ");
//  Serial.println(nilaibaru);
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
  digitalWrite(trigknn, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigknn, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigknn, LOW);                   // Send pin low again
  nilaiknn = pulseIn(echoknn, HIGH);        // Read in times pulse
  nilaiknn= nilaiknn/58; 
  //-------------------------------5
  digitalWrite(trigblkg, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigblkg, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigblkg, LOW);                   // Send pin low again
  nilaiblkg = pulseIn(echoblkg, HIGH);        // Read in times pulse
  nilaiblkg= nilaiblkg/58;  
  //-------------------------------7 
  digitalWrite(trigkr, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(trigkr, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(trigkr, LOW);                   // Send pin low again
  nilaikr = pulseIn(echokr, HIGH);        // Read in times pulse
  nilaikr= nilaikr/58;
  //-------------------------------7 
//  digitalWrite(trigbaru, LOW);                   // Set the trigger pin to low for 2uS
//  delayMicroseconds(2);
//  digitalWrite(trigbaru, HIGH);                  // Send a 10uS high to trigger ranging
//  delayMicroseconds(10);
//  digitalWrite(trigbaru, LOW);                   // Send pin low again
//  nilaibaru = pulseIn(echobaru, HIGH);        // Read in times pulse
//  nilaibaru= nilaibaru/58;   
}
