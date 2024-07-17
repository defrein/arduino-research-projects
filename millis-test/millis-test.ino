unsigned long interval = 1000;
unsigned long waktuAwal = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long waktuSekarang = millis();
  if(waktuSekarang - waktuAwal >= interval){
    Serial.println("Nama Saya Def");
    waktuAwal = waktuSekarang;
  }

}
