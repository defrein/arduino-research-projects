#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"
#define DHTTYPE DHT11
#define dht_pin D4
DHT dht(dht_pin,DHTTYPE);

char auth[] = "zpyExKGYDXDMHIC9WrzBXVT6-8bui6AZ";
char ssid[] = "Galaxy A111618";
char pass[] = "makakamtau";

void setup(){
  Serial.begin(9600);
  dht.begin();
  Blynk.begin(auth, ssid, pass);
}

void loop(){
  float s = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.print("Suhu: ");
  Serial.print(s);
  Serial.print(",");
  Serial.print("Kelembaban: ");
  Serial.print (h);
  Serial.print("\n");
  delay(500);

  Blynk.virtualWrite(V0, s);
  Blynk.virtualWrite(V1, h);
  delay(500);
}
