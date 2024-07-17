#include <Wire.h>
#include <LiquidCrystal.h>

int pinPIRSensor = 2;
int pinRelay = 3;
int statusPanas = LOW;
int nilaiSensor = 0;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
 pinMode(pinPIRSensor, INPUT); //set pin sensor sebagai input
 pinMode(pinRelay, OUTPUT); //set pin relay sebagai output
 lcd.begin(16,2);
 lcd.setCursor(0, 0);
 lcd.print("Deteksi Obyek");
 lcd.setCursor(0, 1);
 lcd.print("Sensor PIR");
 delay(3000);
}
void loop() {
 //membaca nilai pin sensor
 nilaiSensor = digitalRead(pinPIRSensor);
 //sensor mendeteksi panas
 if (nilaiSensor == HIGH){
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Obyek Terdeteksi");
 lcd.setCursor(0, 1);
 lcd.print("Lampu Hidup");
 digitalWrite(pinRelay, HIGH);//Relay aktif untuk menghidupkan lampu
 }
 else
 {
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Auto OFF");
 lcd.setCursor(0, 1);
 lcd.print("Lampu Mati");
 digitalWrite(pinRelay, LOW);
 }
 delay(1000);
}
