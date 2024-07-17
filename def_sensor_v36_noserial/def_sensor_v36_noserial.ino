/*
    KODE PROGRAM ROBOT KABIBITAX KRSRI 2023
*/

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
Servo servo1; // kiri-kanan
Servo servo2; // naik-turun
Servo servo3; // panjang-pendek
Servo servo4; // buka-tutup

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


// buat objek sensor us pakai library newping
NewPing sonar_dpn(trigdpn, echodpn);
NewPing sonar_knn(trigknn, echoknn);
NewPing sonar_blkg(trigblkg, echoblkg);
NewPing sonar_kr(trigkr, echokr);

// variable sensor us srf
unsigned int jarak_dpn, jarak_knn, jarak_blkg, jarak_kr, jarak_cpt;

// nilai kaki
int hom[] = {
  150
};

// variable normalisasi kompas
const int JARAK_START = 33;
int imaginary_bearing;
enum Orientasi {LAP_ATAS, LAP_KANAN, LAP_BAWAH, LAP_KIRI, TIDAK_ADA_ARAH};
Orientasi orientasi = LAP_ATAS; // artinya: sebelum dihidupkan power, robot harus menghadap LAP ATAS


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

  servo1.write(90);
  servo2.write(0);
  servo3.write(150);
  servo4.write(180);

  // button power
  pinMode(power_btn, INPUT_PULLUP);

  home1();

}

void loop() {

  home1();
  home1();
  home1();
//  Serial.println("Hello");
  state = digitalRead(power_btn); // baca button, apakah ditekan atau tidak
  if (state == LOW && !isButtonPressed) {
    isButtonPressed = true;
    Serial.println("Robot ON");
    //cek_orientasi(); // jangan dihapus kalau tidak tau orientasi yang sudah FIX

    // ======= batas panggil fungsi rintangan ======== //
        lap_start();
        rintangan_jalan_retak();
        rintangan_maju_turun();
        rintangan_batu_bawah();
        rintangan_kelereng();
        rintangan_empty();
        retak_k3_k4_go2();
        rintang_maju_tangga();
        rintang_k5_atas();
        rintang_sempit();

    // ======= batas panggil fungsi rintangan ======== //
//
//    while (true) {
//
//      if (Serial.available()) {
//
//      }
//
//      int input = Serial.parseInt();
//      Serial.println(input);
//
//      if (input == 1) {
//        korban_1drop();
//      }
//      if (input == 2) {
//        korban_2dkt();
//      }
//      if (input == 3) {
//        korban_2jauh();
//      }
//      if (input == 4) {
//        korban_2drop();
//      }
//      if (input == 5) {
//        korban_5();
//      }
//      if (input == 6) {
//        korban_5drop();
//      }
//      if (input == 7) {
//        korban_1_non_fleksibel();
//      }
//
//    }

//        while(true){
//          home1();
//          nilai_sonar();
//          nilai_kompas();
//          serial_print(); 
//        }

//    while (true) {
//
//      if (Serial.available()) {
//
//      }
//
//      int input = Serial.parseInt();
//      Serial.println(input);
//
//      if (input == 1) {
//        arah_kiri();
//      }
//      if (input == 2) {
//        arah_lurusdrkiri();
//      }
//      if (input == 3) {
//        arah_knn();
//      }
//      if (input == 4) {
//        arah_lurusdrknn();
//      }
//      if (input == 5) {
//        svr2_naik();
//      }
//      if (input == 6) {
//        svr2_trn();
//      }
//      if (input == 7) {
//        svr3_panjang();
//      }
//      if (input == 8) {
//        svr3_pendek();
//      }
//      if (input == 9) {
//        tutupsrv4();
//      }
//      if (input == 10) {
//        bukasrv4();
//      }
//      if (input == 11) {
//        svr3_panjang1();
//      }
//      if (input == 12) {
//        svr3_pendek1();
//      }
//      if (input == 13) {
//        arah_serongknn();
//      }
//      if (input == 14) {
//        arah_lurusdrserongknn();
//      }
//      if (input == 15) {
//        korban_2jauh();
//      }
//      if (input == 16) {
//        bukasrv4_3();
//      }
//      if (input == 17) {
//        korban_2dkt();
//      }
//      if (input == 18) {
//        //    korban_1jauh();
//      }
//      if (input == 19) {
//        svr2_trn1();
//      }
//      if (input == 20) {
//        korban_1drop();
//      }
//      if (input == 21) {
//        kuncisrv4();
//      }
//      if (input == 22) {
//        korban_4drop();
//      }
//      if (input == 23) {
//        svr2_trn5();
//      }
//
//      if (input == 24) {
//        korban_5();
//      }
//
//      if (input == 25) {
//        korban_5drop();
//      }
//    }


  } else if (state == HIGH && isButtonPressed) { // ini tidak terpanggil kalau ada looping yang belum terpenuhi di dalam fungsi rintangan
    isButtonPressed = false;
    Serial.println("Robot OFF");
  }
}
