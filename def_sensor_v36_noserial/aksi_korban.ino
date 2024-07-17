// ===================================================================
// berisi fungsi-fungsi yang berhubungan dengan korban, ambil dan drop
// ===================================================================

void korban_1fleksibel() {
  bukasrv4();
  svr3_panjang1();
  arah_kiri();
  svr3_pendek8();
  svr2_trn_0_94();

//  for (int i = 0; i < 5; i++) {
//    us_kanan();
//  }
  //Serial.print("jarak kanan");
  //Serial.println(jarak_knn);
  int fleksibel_capit = 0;
  int counter_geser = 0;
  while (!fleksibel_capit) {

    for (int i = 0; i < 2; i++) {
      us_kanan();
    }
    //Serial.print("jarak kanan = ");
    //Serial.println(jarak_knn);
    if (jarak_knn >= 25 && jarak_knn <= 28) {
      fleksibel_capit = 1;
      tutupsrv4();
    } else if (jarak_knn > 28) {
      // geser kanan
      geser_kanan();
      //Serial.println("geser kanan");
    } else if (jarak_knn < 25) {
      // geser kiri
      geser_kiri();
      //Serial.println("geser kiri");
    }

    if (counter_geser % 2 == 0) {
//      for (int i = 0; i < 2; i++) {
//        nilai_sonar();
//      }
//      if (jarak_blkg >= 47 && jarak_blkg <= 50) {
//        // nothing
//      } else if (jarak_blkg < 47) {
//        maju_pendek();
//      } else if (jarak_blkg > 50) {
//        mundur_pendek();
//      }
      cek_arah_start(3);
    }
    counter_geser++;
  }
  svr2_naik_94_0();
  svr3_panjang1();
  arah_lurusdrkiri();
  svr3_pendek1();
}

void korban_1_non_fleksibel(){
    bukasrv4();
  svr3_panjang1();
  arah_kiri();
  svr3_pendek8();
  svr2_trn_0_94();
  tutupsrv4();
  svr2_naik_94_0();
  svr3_panjang1();
  arah_lurusdrkiri();
  svr3_pendek1();
}

void korban_1drop() {
  kuncisrv4();
  svr3_panjang1();
  arah_serongknn();
  svr3_pendek2();
  svr2_trn3();
  // pendekin
  svr3_pendek6();
  // turun lagi
  svr2_trn4();
  bukasrv4();
  svr2_naik3();
  svr3_panjang3();
  arah_lurusdrserongknn();
  svr2_naik4();
  svr3_pendek4();
}

void korban_2jauh() {
  bukasrv4();
  svr3_panjang1();
  arah_kiri();
  svr3_pendek5();
  svr2_trn_0_110();
  svr3_panjang5();
  tutupsrv4();
  svr2_naik_110_0();
  arah_lurusdrkiri();
  svr3_pendek1();
}

void korban_2dkt() {
  bukasrv4();
  svr3_panjang1();
  arah_kiri();
  svr3_pendek5();
  svr2_trn_0_94();
  tutupsrv4();
  svr2_naik_94_0();
  svr3_panjang6();
  arah_lurusdrkiri();
  svr3_pendek1();
}

void korban_2drop() { // sama aja dengan korban 1 drop
  kuncisrv4();
  svr3_panjang1();
  arah_serongknn();
  svr3_pendek2();
  svr2_trn();
  bukasrv4();
  svr2_naik3();
  svr3_panjang3();
  arah_lurusdrserongknn();
  svr2_naik4();
  svr3_pendek4();
}

//void korban_3dkt() {
//  bukasrv4_kecil();
//  svr3_panjang1();
//  arah_knn();
//  svr3_pendek1();
//  svr2_trn_new();
//  svr3_panjang1();
//  tutupsrv4_kecil();
//  svr2_naik();
//  arah_lurusdrknn();
//  svr3_pendek1();
//}

void korban_3turun(){
  bukasrv4();
  svr3_panjang1();
  svr2_trn5();
  svr3_pendek7();

}

void korban_3naik(){
  svr2_trn6();
  tutupsrv4();
  svr3_panjang7();
  svr2_naik();
}

void korban_4drop(){
  kuncisrv4();
  svr3_panjang1();
  
  arah_serongkr();
  
  svr3_pendek2();
  svr2_trn3();
  svr3_pendek6();
  svr2_trn4();
  bukasrv4();
  svr2_naik3();
  svr3_panjang3();
  
  arah_lurusdrserongkr();
  
  svr2_naik4();
  svr3_pendek4();
}


void korban_5(){
  //buka servo 4
  // servo 3 panjang
  // arah serong kanan
  // servo 2 turun
  // servo 3 panjang dikit
  // tutup servo 4
  // servo 2 naik
  // arah lurus dari serong kanan
  // servo 3 pendek
  
  bukasrv4();
  svr3_panjang1();
  arah_serongknn2();
  svr3_pendek1();
  svr2_trn1();
  tutupsrv4();
  svr3_panjang9();
  svr2_naik1();
  arah_lurusdrserongknn2();
  svr3_pendek1();
}

void korban_5drop() {
  kuncisrv4();
  svr3_panjang10();
  arah_knn();
  svr3_pendek5();
  svr2_trn();
  bukasrv4();
  svr2_naik();
  svr3_panjang6();
  arah_lurusdrknn();
  svr3_pendek1();
}
