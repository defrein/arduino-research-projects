#include <ESP8266WiFi.h>
#include <DHT.h>
#include <ThingerESP8266.h>

#define USERNAME "defrein"
#define DEVICE_ID "NodeMCU"
#define DEVICE_CREDENTIAL "12345678"

#define SSID "hurr"
#define SSID_PASSWORD "12345678"

#define DHTPIN D7
#define DHTTYPE DHT11

ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

DHT dht(DHTPIN, DHTTYPE);

float hum, temp;

void setup() {
  Serial.begin(9600);
  Serial.println("Baca DHT11");

  dht.begin();

  thing.add_wifi(SSID, SSID_PASSWORD);

  thing["dht11"] >> [](pson& out){
    out["humidity"] = hum;
    out["celcius"] = temp;
  };
}

void loop(){
  thing.handle();

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  hum = h;
  temp = t;
}
