#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include <Blynk.h>

#define BLYNK_PRINT
#define LED D4

BlynkTimer timer;


char auth[] = "ibKegn-nwncaLfidMjLn6gPgs3GIvCko";

char ssid[] = "hurr";
char pass[] = "12345678";

void myTimeEvent()
{
  int adc = analogRead(A0);
  float tegangan = adc * (5.0 / 1023.0);
  Blynk.virtualWrite(V0, adc);
  Blynk.virtualWrite(V1, tegangan);
}

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
  timer.setInterval(1000L, myTimeEvent);
  pinMode(LED, OUTPUT);
}

void loop(){
  if (analogRead(A0) >= 650){
    Serial.println("Kondisi tanah mulai kering");
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);   
  }
  else{
    Serial.println("Kondisi tanah basah");
    digitalWrite(LED, LOW);
  }
  Blynk.run();
  timer.run();
}
