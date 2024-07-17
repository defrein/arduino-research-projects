#include <Blynk.h>
#include <ESP8266WiFi.h> //library esp8266
#include <BlynkSimpleEsp8266.h> //library BLYNK

#define BLYNK_PRINT
#define LED D4

BlynkTimer timer;

char auth[] = "zpyExKGYDXDMHIC9WrzBXVT6-8bui6AZ";
char ssid[] = "Galaxy A111618";
char pass[] = "makakamtau";

void myTimerEvent()
{
  int adc = analogRead(A0); 
  float tegangan = adc * (5.0 /1023.0);
  Blynk.virtualWrite(V1, tegangan);
}

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, myTimerEvent); //1000L = 1 detik
}

void loop(){
  if (analogRead(A0) <= 500){
    Serial.println("Kondisi tanah basah");
    digitalWrite(LED, LOW);
  }
  else{
    Serial.println("Kondisi tanah mulai kering");
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
  Blynk.run();
  timer.run();
}
