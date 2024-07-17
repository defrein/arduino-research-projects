#include <SPI.h>
#include <ServoCds55.h>
ServoCds55 myservo;

#include <Wire.h>
#define _i2cAddress 0x60

#define CONTROL_Register 0

#define BEARING_Register 2 
#define PITCH_Register 4 
#define ROLL_Register 5

#define ONE_BYTE 1
#define TWO_BYTES 2

int bearing;
signed char pitch;
signed char roll;
int _bearing;
int nReceived;
byte _fine;
byte _byteHigh;
byte _byteLow;
char _pitch;
char _roll;


//----SERVO ATAS-------//
int s1 = 1, s4 = 4, s7 = 7, s10 = 10, s13 = 13, s16 = 16;

//----SERVO TENGAH-----//
int s2 = 2, s5 = 5, s8 = 8, s11 = 11, s14 = 14, s17 = 17;

//----SERVO BAWAH---//
int s3 = 3, s6 = 6, s9 = 9, s12 = 12, s15 = 15, s18 = 18;

// ------------- ultrasonik depan
#define echodpn 35
#define trigdpn 37

// variable sensor srf
int jarak_dpn, jarak_knn, jarak_blkg, jarak_kr;
int duration, x1, x2, x3, x4;
int a1=0,a2=0,a3=0,a4=0,a5=0,b1=0,b2=0,b3=0,b4=0,b5=0,c1=0,c2=0,c3=0,c4=0,c5=0,d1=0,d2=0,d3=0,d4=0,d5=0;

unsigned int ms, lastMs;
int stepp;
bool code = 0;
bool code1 = 0;
bool code2 = 0;
bool code3 = 0;
String Received = "";

int hom[]={
  150
};

int belok[]={
  160
};

void setup() {
  Wire.begin();
  Serial.begin (9600);
  //---------Depan-------------//
  pinMode(echodpn, INPUT);
  pinMode(trigdpn, OUTPUT);

  myservo.begin ();
  home1();
  

}

void loop() {
  nilai_kompas();
//  sensor_us_depan();
  serial_print();
  if (stepp == 0) {
//    mundur();
//    geser_kanan();
//    geser_kiri();
    belok_kanan();

    
    
  } else if (stepp == 1) {
    home1();
  }
//  ms = millis();
//  if (ms - lastMs >= 5000){   // belok kanan 90 derajat=4900ms //belok kiri 90 derajat 3100ms //default 3000
//    stepp++;
//    if (stepp > 1) {
//      stepp = 0;
//    }
//    lastMs = ms;
//  }
//
//  
////  if (jarak_dpn < 10){
////    mundur();
////  } else if (jarak_dpn < 40){
////    maju();
////  } else{
////    home1();
////  }
  if (bearing<=45 && bearing > 315){ // lap_dpn
    Serial.println("belok kanan");
    belok_kanan();
  } 
  else if (bearing <= 225 && bearing > 135){ // lap_blkg
    Serial.println("belok kiri");
    belok_kiri();
  } 
  else if (bearing <= 315 && bearing > 225){ // lap_kr
    for (int i=0; i<2; i++){
        Serial.print("belok kanan ");
        Serial.println(i+1);
        belok_kanan();
    }
  }
  else { 
    home1();
    Serial.println("home");
  }
}
