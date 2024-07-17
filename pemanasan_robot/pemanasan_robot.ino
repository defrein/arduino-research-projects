// =====================================================================================================================
// ini adalah file utama yang berisi deklarasi dan inisialisasi, void setup, void loop (untuk pemanggilan fungsi-fungsi)
// =====================================================================================================================

#include <SPI.h>
// library untuk servo dynamixel ax-12a
#include <ServoCds55.h>
ServoCds55 myservo; // membuat objek 'myservo' dari kelas 'ServoCds55'
// library untuk servo capit
#include <Servo.h>
// library untuk srf05
#include <NewPing.h>

// varible dan kostanta untuk sensor cmp
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

// button power
const int power_btn = 2;
bool isButtonPressed = false;
int state;

//----SERVO ATAS [KAKI]-------//
int s1 = 1, s4 = 4, s7 = 7, s10 = 10, s13 = 13, s16 = 16;
//----SERVO TENGAH [KAKI]-----//
int s2 = 2, s5 = 5, s8 = 8, s11 = 11, s14 = 14, s17 = 17;
//----SERVO BAWAH [KAKI]-----//
int s3 = 3, s6 = 6, s9 = 9, s12 = 12, s15 = 15, s18 = 18;

// servo capit
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// ------------- ultrasonik depan
#define echodpn 49
#define trigdpn 47
// ------------- ultrasonik kanan
#define echoknn 40
#define trigknn 38
// ------------- ultrasonik belakang
#define echoblkg 42
#define trigblkg 44
// ------------- ultrasonik kiri
#define echokr 46
#define trigkr 48
// ------------- ultrasonik capit
#define echocpt 43
#define trigcpt 45


// sensor us pakai library newping
NewPing sonar_dpn(trigdpn, echodpn);
NewPing sonar_knn(trigknn, echoknn);
NewPing sonar_blkg(trigblkg, echoblkg);
NewPing sonar_kr(trigkr, echokr);

// variable sensor us srf
unsigned int jarak_dpn, jarak_knn, jarak_blkg, jarak_kr, jarak_cpt;

// nilai kaki
int hom[]={
  150
};

// variable normalisasi kompas
const int JARAK_START = 33;
int imaginary_bearing;
enum Orientasi {LAP_ATAS, LAP_KANAN, LAP_BAWAH, LAP_KIRI, TIDAK_ADA_ARAH};
Orientasi orientasi = LAP_ATAS; // sebelum dihidupkan power, robot harus menghadap LAP ATAS


void setup() {
  Wire.begin();
  Serial.begin (115200);
  //---------Depan-------------//
  pinMode(echodpn, INPUT);
  pinMode(trigdpn, OUTPUT);
  //--------Kanan---------//
  pinMode(echoknn, INPUT);
  pinMode(trigknn, OUTPUT);
  //--------Belakang-----------//
  pinMode(echoblkg, INPUT);
  pinMode(trigblkg, OUTPUT);
  //--------Kiri----------//
  pinMode(echokr, INPUT);
  pinMode(trigkr, OUTPUT);
  //--------Capit--------//
  pinMode(echocpt, INPUT);
  pinMode(trigcpt, OUTPUT);

  myservo.begin();
  
  servo1.attach(39);
  servo2.attach(18);
  servo3.attach(16);
  servo4.attach(15);
  
  servo1.write(75);
  servo2.write(0);
  servo3.write(135);
  servo4.write(180);

  // button power
  pinMode(power_btn, INPUT_PULLUP);
  
  home1();
  
}

void loop() {

home1();
home1();
home1();
  
  state = digitalRead(power_btn); // baca button, apakah ditekan atau tidak
  if(state == LOW && !isButtonPressed){
    isButtonPressed = true;
    Serial.println("Robot ON");
    
    // BUAT CEK SESUATU //

    // home2
    // home2 balik
    // delay 1000
    
    // 1. maju 3 kali
    // 2. mundur 3 kali
    // 3. belok kanan 3 kali
    // 4. belok kiri 3 kali
    // 5. geser kanan kecil 5 kali
    // 6. geser kiri kecil 5 kali
    // 7. jalan retak 5 kali
    // 8. jalan miring 3 kali
    // 9. maju pendek 5 kali
    // 10. maju pendek 5 kali
    // 11. mundur pendek 5 kali


    // buka capit
    // tutup capit
    // kunci capit
    // korban 2 dekat
    // drop korban 2
    
    
    // BATAS CEK SESUATU //    


      // ---cek nilai sensor kompas (bearing, pitch, roll) dan sensor us (kiri, kanan, depan, belakang)--- //
//    while(true){
//      home1();
//      nilai_sonar();
//      nilai_kompas();
//      serial_print();
//    }

   
  }else if(state == HIGH && isButtonPressed){ // ini tidak terpanggil kalau ada looping yang belum terpenuhi di dalam fungsi rintangan
    isButtonPressed = false;
    Serial.println("Robot OFF");
  }
}
