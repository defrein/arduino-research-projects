#include <ESP8266WiFi.h>
#include <DHT.h>
#define DHTPIN D7
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println("Baca DHT11");
  dht.begin();
}

void loop(){
  delay(1000);
  float hum = dht.readHumidity();
  float tem = dht.readTemperature();
  Serial.print("Kelembapan: ");
  Serial.print(hum);
  Serial.print("% RH ");
  Serial.print("Suhu: ");
  Serial.print(tem);
  Serial.println(" *C ");
}
