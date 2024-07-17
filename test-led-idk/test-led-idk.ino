//--Code prk3_5 variasi 1 by Zaiyan Ahyadi
byte led=1; // mulai nilai i=1, sehingga awal program yang nyala
// adalah led pada pin 1 dan pin 2 (bukan pin 0 dan pin 1)
void setup() {
for(byte i=0; i<8; i++)
pinMode(i,OUTPUT);
digitalWrite(1,HIGH); // nyalakan led pada pin 1
}
void loop() {
if(led<7){
digitalWrite(led-1,LOW); // matikan led pada pin i-1
digitalWrite(led+1,HIGH); // nyalakan led pada pin i+1
delay(200);
}
else{
digitalWrite(13-(led-1),LOW); // matikan led pada pin i-1
digitalWrite(13-(led+1),HIGH); // nyalakan led pada pin i+1
delay(200);
}
delay(200);
led++;
if(led>=13) led=1;
}
