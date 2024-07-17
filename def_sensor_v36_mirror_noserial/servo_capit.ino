// ================================================================================
// berisi kode untuk pengaturan derajat servo capit yang digunakan pada aksi korban
// ================================================================================

void arah_kiri() { //servo1
  for (int k = 90; k <= 180; k+=5) {
    servo1.write(k);
    delay(25);
    if (k == 180) {
      servo1.write(180);
    }
  }
}

void arah_lurusdrkiri() { 
  for (int k = 180; k >= 90; k-=5) {
    servo1.write(k);
    delay(25);
    if (k == 90) {
      servo1.write(90);
    }
  }
}

void arah_knn() {
  for (int k = 90; k >= 0; k-=5) {
    servo1.write(k);
    delay(25);
    if (k == 0) {
      servo1.write(0);
    }
  }
}

void arah_lurusdrknn() {
  for (int k = 0; k <= 90; k+=5) {
    servo1.write(k);
    delay(25);
    if (k == 90) {
      servo1.write(90);
    }
  }
}

void arah_serongknn() {
  for (int k = 90; k >= 50; k-=5) {
    servo1.write(k);
    delay(25);
    if (k == 50) {
      servo1.write(50);
    }
  }
}

void arah_serongknn2() {
  for (int k = 90; k >= 40; k-=5) {
    servo1.write(k);
    delay(25);
    if (k == 40) {
      servo1.write(40);
    }
  }
}

void arah_serongkr() {
  for (int k = 90; k <= 115; k+=5) {
    servo1.write(k);
    delay(25);
    if (k == 115) {
      servo1.write(115);
    }
  }
}

void arah_serongkr2() {
  for (int k = 90; k <= 140; k+=5) {
    servo1.write(k);
    delay(25);
    if (k == 140) {
      servo1.write(140);
    }
  }
}

void arah_lurusdrserongknn() {
  for (int k = 50; k <= 90; k+=5) {
    servo1.write(k);
    delay(25);
    if (k == 90) {
      servo1.write(90);
    }
  }
}

void arah_lurusdrserongknn2() {
  for (int k = 40; k <= 90; k+=5) {
    servo1.write(k);
    delay(25);
    if (k == 90) {
      servo1.write(90);
    }
  }
}

void arah_lurusdrserongkr() {
  for (int k = 115; k >= 90; k-=5) {
    servo1.write(k);
    delay(25);
    if (k == 90) {
      servo1.write(90);
    }
  }
}

void arah_lurusdrserongkr2() {
  for (int k = 140; k >= 90; k-=2) {
    servo1.write(k);
    delay(25);
    if (k == 90) {
      servo1.write(90);
    }
  }
}

void svr2_naik() {
  for (int k = 85; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_naik_94_0() {
  for (int k = 94; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_naik_100_0() {
  for (int k = 100; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_naik_110_0() {
  for (int k = 110; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_naik1() {
  for (int k = 100; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_naik3() {
  for (int k = 85; k >= 50; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 50) {
      servo2.write(50);
    }
  }
}

void svr2_naik4() {
  for (int k = 50; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_naik5() {
  for (int k = 85; k >= 45; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 45) {
      servo2.write(45);
    }
  }
}

void svr2_naik6() {
  for (int k = 45; k >= 0; k-=2) {
    servo2.write(k);
    delay(25);
    if (k == 0) {
      servo2.write(0);
    }
  }
}

void svr2_trn() {
  for (int k = 0; k <= 85; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 85) {
      servo2.write(85);
    }
  }
}

void svr2_trn_0_94() {
  for (int k = 0; k <= 94; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 94) {
      servo2.write(94);
    }
  }
}

void svr2_trn_0_100() {
  for (int k = 0; k <= 100; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 100) {
      servo2.write(100);
    }
  }
}

void svr2_trn_0_110() {
  for (int k = 0; k <= 110; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 110) {
      servo2.write(110);
    }
  }
}

//void svr2_trn_0_110(int awal, int akhir) {
//  for (int k = awal; k <= akhir; k+=2) {
//    servo2.write(k);
//    delay(25);
//    if (k == akhir) {
//      servo2.write(akhir);
//    }
//  }
//}
//
//void svr2_trn_0_110(0, 110);
//void svr2_trn_0_110(50, 100);


void svr2_trn3() {
  for (int k = 0; k <= 45; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 45) {
      servo2.write(45);
    }
  }
}

void svr2_trn4() {
  for (int k = 45; k <= 85; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 85) {
      servo2.write(85);
    }
  }
}

void svr2_trn_new() {
  for (int k = 0; k <= 95; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 95) {
      servo2.write(95);
    }
  }
}

void svr2_trn1() {
  for (int k = 0; k <= 110; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 110) {
      servo2.write(110);
    }
  }
}

void svr2_trn2() {
  for (int k = 0; k <= 100; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 100) {
      servo2.write(100);
    }
  }
}

void svr2_trn5() {
  for (int k = 0; k <= 45; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 45) {
      servo2.write(45);
    }
  }
}

void svr2_trn6() {
  for (int k = 45; k <= 85; k+=2) {
    servo2.write(k);
    delay(25);
    if (k == 85) {
      servo2.write(85);
    }
  }
}



void svr3_panjang() {
  for (int k = 150; k <= 180; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 180) {
      servo3.write(180);
    }
  }
}
void svr3_panjang1() {
  for (int k = 150; k <= 170; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 170) {
      servo3.write(170);
    }
  }
}

void svr3_panjang2() {
  for (int k = 150; k <= 165; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 165) {
      servo3.write(165);
    }
  }
}

void svr3_panjang3(){
  for (int k = 140; k <= 155; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 155) {
      servo3.write(155);
    }
  }
}

void svr3_panjang4() {
  for (int k = 170; k <= 156; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 156) {
      servo3.write(156);
    }
  }
}

void svr3_panjang5() {
  for (int k = 145; k <= 170; k++) {
    servo3.write(k);
    delay(25);
    if (k == 170) {
      servo3.write(170);
    }
  }
}

void svr3_panjang6() {
  for (int k = 145; k <= 170; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 170) {
      servo3.write(170);
    }
  }
}

void svr3_panjang7() {
  for (int k = 170; k <= 150; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 150) {
      servo3.write(150);
    }
  }
}

void svr3_panjang8() {
  for (int k = 135; k <= 170; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 170) {
      servo3.write(170);
    }
  }
}

void svr3_panjang9() {
  for (int k = 150; k <= 170; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 170) {
      servo3.write(170);
    }
  }
}

void svr3_panjang10() {
  for (int k = 150; k <= 175; k+=2) {
    servo3.write(k);
    delay(25);
    if (k == 175) {
      servo3.write(175);
    }
  }
}

void svr3_pendek() {
  for (int k = 180; k >= 160; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 160) {
      servo3.write(160);
    }
  }
}
void svr3_pendek1() {
  for (int k = 170; k >= 150; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 150) {
      servo3.write(150);
    }
  }
}



void svr3_pendek2() {
  for (int k = 170; k >= 150; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 150) {
      servo3.write(150);
    }
  }
}

void svr3_pendek4() {
  for (int k = 155; k >= 150; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 150) {
      servo3.write(150);
    }
  }
}

void svr3_pendek5() {
  for (int k = 170; k >= 145; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 145) {
      servo3.write(145);
    }
  }
}

void svr3_pendek6() {
  for (int k = 150; k >= 140; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 140) {
      servo3.write(140);
    }
  }
}

void svr3_pendek7() {
  for (int k = 170; k >= 130; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 130) {
      servo3.write(130);
    }
  }
}

void svr3_pendek8() {
  for (int k = 170; k >= 135; k-=5) {
    servo3.write(k);
    delay(25);
    if (k == 135) {
      servo3.write(135);
    }
  }
}


void tutupsrv4(){
  for (int k = 180; k >= 95; k-=5) {
    servo4.write(k);
    delay(25);
    if (k == 95) {
      servo4.write(95);
      //Serial.print("servo = ");
      //Serial.println(servo4.read());
    }
  }
}

void tutupsrv4_kecil(){
  for (int k = 145; k >= 95; k-=5) {
    servo4.write(k);
    delay(25);
    if (k == 95) {
      servo4.write(95);
      //Serial.print("servo = ");
      //Serial.println(servo4.read());
    }
  }
}

void kuncisrv4(){
  for (int k = 94; k >= 94; k-=2) {
    servo4.write(k);
    delay(25);
    if (k == 94) {
      servo4.write(94);
    }
  }
}

void bukasrv4(){
  for (int k = 95; k <= 180; k+=5) {
    servo4.write(k);
    delay(25);
    if (k == 180) {
      servo4.write(180);
    }
  }
}

void bukasrv4_kecil(){
  for (int k = 95; k <= 145; k+=5) {
    servo4.write(k);
    delay(25);
    if (k == 145) {
      servo4.write(145);
    }
  }
}

void bukasrv4_3(){
  for (int k = 130; k <= 150; k+=2) {
    servo4.write(k);
    delay(10);
    if (k == 150) {
      servo4.write(150);
    }
  }
}
