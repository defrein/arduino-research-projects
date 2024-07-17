#include <Wire.h>
#include <LiquidCrystal.h>

int pinRelay = 3; //pin S Relay ke Pin 3 Arduino
int pinLED = 10; //pin LED Resistor ke Pin 10 Arduino
int pinLM35 = A0; //pin LM35 ke Pin A0 Arduino (analog)

//Atur alamat LC pada 0x27 untuk tampilan 16 karakter 2 baris
LiquidCrystal lcd (8, 9, 4, 5, 6, 7);

void setup() {
 lcd.begin(16,2);
 lcd.setCursor(0, 0);
 lcd.print("Indikator Suhu");//tampilkan di LCD
 delay(4000);//waktu tunda 4 detik
 lcd.clear();
 Serial.begin(9600);
 pinMode(pinLED, OUTPUT);
 pinMode(pinRelay, OUTPUT);
 pinMode(pinLM35, INPUT);
}
void loop() {
 int suhucelcius = getTemperatureCel(pinLM35);
 int suhufahrenheit = celcius_to_fahrenheit(suhucelcius);
 //tampilkan informasi suhu ke LCD
 lcd.clear(); //bersihkan layar LCD
 lcd.setCursor(0, 0);
 lcd.print("celcius: " + String(suhucelcius));
 lcd.setCursor(0, 1);
 lcd.print("fahrenheit: " + String(suhufahrenheit));
 
 //menampilkan nilai sensor LM35
 Serial.println("Temperatur Celcius: " + String(suhucelcius) + " - " + "Fahrenheit : " +
String(suhufahrenheit));
 delay(1000);
 
 if (suhucelcius >= 34){
 //mengaktifkan relay ON dan menghidupkan kipas angin
 //jika temperatur lebih dari sama dengan 34 derajat celcius
 digitalWrite(pinLED, HIGH);
 digitalWrite(pinRelay, HIGH);
 }  else {
 digitalWrite(pinLED, LOW);
 digitalWrite(pinRelay, LOW);
 }
}
int getTemperatureCel(int pin){
 int val = analogRead(pin);
 float mv = (val / 1024.0) * 5000;
 float cel = mv / 10;
 return (cel);
}
int celcius_to_fahrenheit(float cel){
 float farh = (cel * 9) / 5 + 32;
 return (farh);
}
