// =========================================================================
// berisi fungsi-fungsi kaki jalan, seperti maju, mundur, belok, geser, dll
// ada yang pakai for, ada yang tidak
// =========================================================================

void home1() {
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
}

void home2() {
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  myservo.write(s3, hom[0] - 20); myservo.write(s15, hom[0] - 20); myservo.write(s12, hom[0] + 20); //hom
  myservo.write(s6, hom[0] + 20); myservo.write(s18, hom[0] + 20); myservo.write(s9, hom[0] - 20);//hom
  myservo.write(s5, hom[0] + 20); myservo.write(s17, hom[0] + 20); myservo.write(s8, hom[0] - 20);
  myservo.write(s2, hom[0] - 20); myservo.write(s14, hom[0] - 20); myservo.write(s11, hom[0] + 20);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
}

void home2_balik() {
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);

  for (int n2 = 130, n14 = 130, n8 = 130, n3 = 130, n15 = 130, n9 = 130 , n11 = 170, n5 = 170,  n17 = 170, n12 = 170, n6 = 170,  n18 = 170   ;
       !(n2 == 160 && n14 == 160 && n8 == 160 && n3 == 160 && n15 == 160 && n9 == 160 && n11 == 140 && n5 == 140 && n17 == 140  && n12 == 140 && n6 == 140 && n18 == 140 );
       n2 += 10, n14 += 10, n8 += 10, n3 += 10, n15 += 10, n9 += 10, n11 -= 10, n5 -= 10, n17 -= 10, n12 -= 10, n6 -= 10, n18 -= 10 ) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s8, n8);
    myservo.write(s11, n11);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s3, n3);
    myservo.write(s15, n15);
    myservo.write(s9, n9);
    myservo.write(s12, n12);
    myservo.write(s6, n6);
    myservo.write(s18, n18);

    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//turun


}

void home3() {
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  myservo.write(s3, hom[0] - 40); myservo.write(s15, hom[0] - 40); myservo.write(s12, hom[0] + 40); //hom
  myservo.write(s6, hom[0] + 40); myservo.write(s18, hom[0] + 40); myservo.write(s9, hom[0] - 40);//hom
  myservo.write(s5, hom[0] + 40); myservo.write(s17, hom[0] + 40); myservo.write(s8, hom[0] - 40);
  myservo.write(s2, hom[0] - 40); myservo.write(s14, hom[0] - 40); myservo.write(s11, hom[0] + 40);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
}

void home4() {
  myservo.write(s14, hom[0] - 20); myservo.write(s15, hom[0] - 20); myservo.write(s17, hom[0] + 20); myservo.write(s18, hom[0] + 20);
  myservo.write(s2, hom[0] + 10); myservo.write(s3, hom[0] + 10);  myservo.write(s5, hom[0] - 10);  myservo.write(s6, hom[0] - 10);
  myservo.write(s8, hom[0] - 20); myservo.write(s9, hom[0] - 20);  myservo.write(s11, hom[0] + 20);  myservo.write(s12, hom[0] + 20); //hom
  myservo.write(s13, hom[0] + 20);  myservo.write(s16, hom[0] - 20);
  myservo.write(s1, hom[0]);  myservo.write(s10, hom[0] + 10);
  myservo.write(s4, hom[0]); myservo.write(s7, hom[0] - 10);
}

void home5() {
  myservo.write(s14, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s17, hom[0] + 30); myservo.write(s18, hom[0] + 30);
  myservo.write(s2, hom[0] + 10); myservo.write(s3, hom[0] + 10);  myservo.write(s5, hom[0] - 10);  myservo.write(s6, hom[0] - 10);
  myservo.write(s8, hom[0] - 10); myservo.write(s9, hom[0] - 10);  myservo.write(s11, hom[0] + 10);  myservo.write(s12, hom[0] + 10); //hom
  myservo.write(s13, hom[0] + 20);  myservo.write(s16, hom[0] - 20);
  myservo.write(s1, hom[0]);  myservo.write(s10, hom[0] - 20);
  myservo.write(s4, hom[0]); myservo.write(s7, hom[0] + 20);

}

void home9() {
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0] - 20);
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);
}

void turun_hom3() {
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);


  for (int n2 = 110, n14 = 110, n11 = 190, n5 = 190, n17 = 190, n8 = 110; !(n2 == 155 && n14 == 155 && n11 == 145 && n5 == 145 && n17 == 145 && n8 == 155);
       n2 += 5, n14 += 5, n11 -= 5, n5 -= 5, n17 -= 5, n8 += 5) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
  }//turun

  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
}
void maju_ok() {
  myservo.write(s3, hom[0] - 5); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  delay(50);

  myservo.write(s1, hom[0] - 20); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 15); //maju
  delay(50);

  myservo.write(s2, hom[0] - 5); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]); //turun
  delay(50);

  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik
  delay(50);

  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);

  myservo.write(s4, hom[0] + 20); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 20); //maju
  delay(50);

  myservo.write(s5, hom[0] + 5); myservo.write(s17, hom[0]); myservo.write(s8, hom[0] - 2); //turun
  delay(50);

  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

void maju_ok_no_delay() {
  myservo.write(s3, hom[0] - 5); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  myservo.write(s1, hom[0] - 20); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 15); //maju
  myservo.write(s2, hom[0] - 5); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]); //turun
  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  myservo.write(s4, hom[0] + 20); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 20); //maju
  myservo.write(s5, hom[0] + 5); myservo.write(s17, hom[0]); myservo.write(s8, hom[0] - 2); //turun
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}



void maju() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  delay(100);
  myservo.write(s1, hom[0] - 20); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 15); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(100);
  myservo.write(s4, hom[0] + 15); myservo.write(s16, hom[0] + 15); myservo.write(s7, hom[0] - 15); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(100);
}

void maju2_baru() {
  myservo.write(s3, hom[0] - 5); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  delay(50);

  myservo.write(s1, hom[0] - 35); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 15); //maju
  delay(50);

  myservo.write(s2, hom[0] - 5); myservo.write(s14, hom[0] - 5); myservo.write(s11, hom[0]); //turun
  delay(50);

  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik
  delay(50);

  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);

  myservo.write(s4, hom[0] + 10); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 25); //maju
  delay(50);

  myservo.write(s5, hom[0] - 3); myservo.write(s17, hom[0] - 3); myservo.write(s8, hom[0] - 5); //turun
  delay(50);

  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

void maju_pendek() {
  myservo.write(s3, hom[0] - 5); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  delay(50);
  myservo.write(s1, hom[0] - 6); myservo.write(s13, hom[0] - 6); myservo.write(s10, hom[0] + 6); //maju
  delay(50);

  myservo.write(s2, hom[0] - 5); myservo.write(s14, hom[0] - 5); myservo.write(s11, hom[0]); //turun
  delay(50);

  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik
  delay(50);

  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);

  myservo.write(s4, hom[0] + 6); myservo.write(s16, hom[0] + 6); myservo.write(s7, hom[0] - 6); //maju
  delay(50);

  myservo.write(s5, hom[0] - 3); myservo.write(s17, hom[0] - 3); myservo.write(s8, hom[0] - 5); //turun
  delay(50);

  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik

}

void mundur() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom

  myservo.write(s5, hom[0] - 10); myservo.write(s8, hom[0] + 10); myservo.write(s17, hom[0] - 10); //naik
  delay(50);
  myservo.write(s4, hom[0] - 25); myservo.write(s7, hom[0] + 30); myservo.write(s16, hom[0] - 28); //maju
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);
  myservo.write(s2, hom[0] + 10); myservo.write(s14, hom[0] + 10); myservo.write(s11, hom[0] - 10); //naik
  delay(50);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(50);
  myservo.write(s1, hom[0] + 20); myservo.write(s13, hom[0] + 20); myservo.write(s10, hom[0] - 30); //maju
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(50);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
}

void mundur_pendek() {
  myservo.write(s3, hom[0] - 5); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  delay(50);
  myservo.write(s1, hom[0] + 6); myservo.write(s13, hom[0] + 6); myservo.write(s10, hom[0] - 6); //maju
  delay(50);

  myservo.write(s2, hom[0] - 5); myservo.write(s14, hom[0] - 5); myservo.write(s11, hom[0]); //turun
  delay(50);

  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik
  delay(50);

  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);

  myservo.write(s4, hom[0] - 6); myservo.write(s16, hom[0] - 6); myservo.write(s7, hom[0] + 6); //maju
  delay(50);

  myservo.write(s5, hom[0] - 3); myservo.write(s17, hom[0] - 3); myservo.write(s8, hom[0] - 5); //turun
  delay(50);

  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik

}

void belok_kanan_new() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 15); //naik2
  delay(50);
  myservo.write(s4, hom[0] + 30); myservo.write(s16, hom[0] + 30); myservo.write(s7, hom[0] + 30); //maju
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);

  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 20); myservo.write(s11, hom[0] - 15); //naik
  delay(50);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(50);
  myservo.write(s1, hom[0] + 20); myservo.write(s13, hom[0] + 20); myservo.write(s10, hom[0] + 20); //maju
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(50);

  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik2
  delay(50);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);
}

void belok_kanan_for() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);  // Delay untuk memberikan
    //maju
  }
  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 180); n4 += 10, n16 += 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 180 && n13 == 180 && n10 == 180); n1 += 10, n13 += 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }


  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//turun

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  for (int n1 = 170, n13 = 170, n10 = 170; !(n1 == 140 && n13 == 140 && n10 == 140); n1 -= 10, n13 -= 10, n10 -= 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }
  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

}

void belok_kanan_for_new() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8 == 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(1);
    //maju
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 195 && n16 == 195 && n7 == 195); n4 += 15, n16 += 15, n7 += 15) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(1);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10 , n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(1);
    //maju
  }

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  == 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(1);
  }//naik

  for (int n4 = 180, n16 = 180, n7 = 180; !(n4 == 140 && n16 == 140 && n7 == 140); n4 -= 10, n16 -= 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(1);
  }//turun

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 180 && n13 == 180 && n10 == 180); n1 += 10, n13 += 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    delay(1);
  }


  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 140 && n14 == 140 && n11 == 160); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(1);
  }//turun

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8 == 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(1);
    //maju
  }

  for (int n1 = 170, n13 = 170, n10 = 170; !(n1 == 140 && n13 == 140 && n10 == 140); n1 -= 10, n13 -= 10, n10 -= 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    delay(1);
  }



  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(1);
    //maju
  }

}


void belok_kanan_turun() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 10); //naik2
  delay(50);
  myservo.write(s4, hom[0] + 30); myservo.write(s16, hom[0] + 30); myservo.write(s7, hom[0] + 30); //maju
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);

  myservo.write(s2, hom[0] + 10); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 10); //naik
  delay(50);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(50);
  myservo.write(s1, hom[0] + 20); myservo.write(s13, hom[0] + 20); myservo.write(s10, hom[0] + 20); //maju
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(50);

  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); //naik2
  delay(50);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);
}

void belok_kanan_tinggi() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 20); //naik2
  delay(100);
  myservo.write(s4, hom[0] + 30); myservo.write(s16, hom[0] + 30); myservo.write(s7, hom[0] + 30); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);

  myservo.write(s2, hom[0] + 20); myservo.write(s14, hom[0] + 20); myservo.write(s11, hom[0] - 20); //naik
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(100);
  myservo.write(s1, hom[0] + 20); myservo.write(s13, hom[0] + 20); myservo.write(s10, hom[0] + 20); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);

  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 20); //naik2
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
}

void belok_kiri_new() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik2
  delay(50);
  myservo.write(s4, hom[0] - 20); myservo.write(s16, hom[0] - 20); myservo.write(s7, hom[0] - 20); //maju
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);
  myservo.write(s2, hom[0] + 15); myservo.write(s14, hom[0] + 15); myservo.write(s11, hom[0] - 15); //naik
  delay(50);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(50);
  myservo.write(s1, hom[0] - 30); myservo.write(s13, hom[0] - 30); myservo.write(s10, hom[0] - 30); //maju
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(50);
  myservo.write(s5, hom[0] - 15); myservo.write(s17, hom[0] - 15); myservo.write(s8, hom[0] + 15); //naik2
  delay(50);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
}

void belok_kiri_for() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 120 && n16 == 120 && n7 == 120); n4 -= 10, n16 -= 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);


    delay(20);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  for (int n4 = 130, n16 = 130, n7 = 130; !(n4 == 160 && n16 == 160 && n7 == 160); n4 += 10, n16 += 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);


    delay(20);
  }//turun

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 110 && n13 == 110 && n10 == 110); n1 -= 10, n13 -= 10, n10 -= 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//turun


  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  for (int n1 = 120, n13 = 120, n10 = 120; !(n1 == 160 && n13 == 160 && n10 == 160); n1 += 10, n13 += 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }
}

void belok_kiri_for_new() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8 == 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);


    delay(1);
    //maju
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 120 && n16 == 120 && n7 == 120); n4 -= 10, n16 -= 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(1);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);


    delay(1);
    //maju
  }

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  == 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(1);
  }//naik

  for (int n4 = 130, n16 = 130, n7 = 130; !(n4 == 160 && n16 == 160 && n7 == 160); n4 += 10, n16 += 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);


    delay(1);
  }//turun

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 105 && n13 == 105 && n10 == 105); n1 -= 15, n13 -= 15, n10 -= 15) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(1);
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 140 && n14 == 140 && n11 == 160); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(1);
  }//turun


  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8 == 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(1);
    //maju
  }


  for (int n1 = 120, n13 = 120, n10 = 120; !(n1 == 165 && n13 == 165 && n10 == 165); n1 += 15, n13 += 15, n10 += 15) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(1);
  }

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(1);
    //maju
  }
}

void belok_kiri_turun() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); //naik2
  delay(100);
  myservo.write(s4, hom[0] - 20); myservo.write(s16, hom[0] - 20); myservo.write(s7, hom[0] - 20); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
  myservo.write(s2, hom[0] + 10); myservo.write(s14, hom[0] + 10); myservo.write(s11, hom[0] - 10); //naik
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(100);
  myservo.write(s1, hom[0] - 30); myservo.write(s13, hom[0] - 30); myservo.write(s10, hom[0] - 30); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); //naik2
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
}

void belok_kiri_tinggi() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 20); //naik2
  delay(100);
  myservo.write(s4, hom[0] - 20); myservo.write(s16, hom[0] - 20); myservo.write(s7, hom[0] - 20); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
  myservo.write(s2, hom[0] + 20); myservo.write(s14, hom[0] + 20); myservo.write(s11, hom[0] - 20); //naik
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(100);
  myservo.write(s1, hom[0] - 30); myservo.write(s10, hom[0] - 30); myservo.write(s13, hom[0] - 30); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 20); //naik2
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s10, hom[0]); myservo.write(s13, hom[0]);//balik
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
}

void serong_kanan() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 10); myservo.write(s14, hom[0] + 10); myservo.write(s11, hom[0] - 10); //naik
  delay(50);
  myservo.write(s1, hom[0] + 20); myservo.write(s13, hom[0] + 20); myservo.write(s10, hom[0] + 20); //maju
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(50);
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); //naik2
  delay(50);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);
}

void serong_kanan_tinggi() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(100);
  myservo.write(s1, hom[0] + 20); myservo.write(s13, hom[0] + 20); myservo.write(s10, hom[0] + 20); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30); //naik2
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
}

void serong_kanan_for() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom


  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik



  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 180 && n13 == 180 && n10 == 180); n1 += 10, n13 += 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//turun

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);


    delay(20);
    //maju
  }

  for (int n1 = 170, n13 = 170, n10 = 170; !(n1 == 140 && n13 == 140 && n10 == 140); n1 -= 10, n13 -= 10, n10 -= 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

}

void serong_kanan_for_tangga() {
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);


  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik



  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 180 && n13 == 180 && n10 == 180); n1 += 10, n13 += 10, n10 += 10) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n1 = 170, n13 = 170, n10 = 170; !(n1 == 140 && n13 == 140 && n10 == 140); n1 -= 10, n13 -= 10, n10 -= 10) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }


  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

}

void serong_kiri() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); //naik2
  delay(50);
  myservo.write(s4, hom[0] - 20); myservo.write(s16, hom[0] - 20); myservo.write(s7, hom[0] - 20); //maju
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(50);
  myservo.write(s2, hom[0] + 10); myservo.write(s14, hom[0] + 10); myservo.write(s11, hom[0] - 10); //naik
  delay(50);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(50);
}

void serong_kiri_tinggi() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30); //naik2
  delay(100);
  myservo.write(s4, hom[0] - 20); myservo.write(s16, hom[0] - 20); myservo.write(s7, hom[0] - 20); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
}

void serong_kiri_for() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom


  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 120 && n16 == 120 && n7 == 120); n4 -= 10, n16 -= 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  for (int n4 = 130, n16 = 130, n7 = 130; !(n4 == 160 && n16 == 160 && n7 == 160); n4 += 10, n16 += 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun


  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
}

void serong_kiri_for_tangga() {
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);


  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 110 && n17 == 110 && n8 == 190); n5 -= 10, n17 -= 10, n8 += 10) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 120 && n16 == 120 && n7 == 120); n4 -= 10, n16 -= 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10

    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n4 = 130, n16 = 130, n7 = 130; !(n4 == 160 && n16 == 160 && n7 == 160); n4 += 10, n16 += 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun


  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
}

void geser_kanan() {
  myservo.write(s6, hom[0] + 25); myservo.write(s9, hom[0] + 10); myservo.write(s18, hom[0] + 25); myservo.write(s5, hom[0] + 5); myservo.write(s17, hom[0] + 5);
  myservo.write(s3, hom[0] + 10); myservo.write(s15, hom[0] + 10); myservo.write(s12, hom[0] + 25); myservo.write(s11, hom[0] + 8);
  myservo.write(s2, hom[0] + 10); myservo.write(s14, hom[0] + 10); myservo.write(s11, hom[0] - 10); myservo.write(s11, hom[0]);
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); myservo.write(s5, hom[0]); myservo.write(s17, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s9, hom[0]); myservo.write(s18, hom[0]);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
}

void geser_kanan_tinggi() {
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30);
  delay(50);
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0] - 30);
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
  delay(50);
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30);
  delay(50);
  myservo.write(s6, hom[0] - 30); myservo.write(s18, hom[0] - 30); myservo.write(s9, hom[0] - 30);
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  delay(50);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
  delay(50);
}

void geser_kanan_tinggi_2() {
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30);
  delay(100);

  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0] - 30);
  delay(100);

  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
  delay(100);

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30);
  delay(100);

  myservo.write(s6, hom[0] - 30); myservo.write(s18, hom[0] - 30); myservo.write(s9, hom[0] - 30);
  delay(100);

  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  delay(100);

  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
  delay(100);

  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
  delay(100);

}

void geser_kanan_tinggi_for() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  <= 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 1
    myservo.write(s11, n11);  // Menggerakkan servo 11

    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n3 = 150, n15 = 150, n12 = 150; !(n3 == 105 && n15 == 105 && n12 == 105); n3 -= 15, n15 -= 15, n12 -= 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    myservo.write(s15, n15);  // Menggerakkan servo 13
    myservo.write(s12, n12);  // Menggerakkan servo 10

    delay(1);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 135 && n14 == 135 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11

    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 120, n15 = 120, n12 = 120, n5 = 150, n17 = 150, n8 = 150; !(n3 == 165 && n15 == 165 && n12 == 165 && n5 <= 105 && n17 <= 105 && n8 >= 195);
       n3 += 15, n15 += 15, n12 += 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s3, n3);

    myservo.write(s15, n15);
    myservo.write(s12, n12);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n6 = 150, n18 = 150, n9 = 150; !(n6 == 105 && n18 == 105 && n9 == 105); n6 -= 15, n18 -= 15, n9 -= 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11

    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//turun


  for (int n6 = 120, n18 = 120, n9 = 120, n2 = 150, n14 = 150, n11 = 150; !(n6 == 165 && n18 == 165 && n9 == 165, n2 == 195 && n14 == 195 && n11  <= 105); n6 += 15, n18 += 15, n9 += 15, n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 135 && n14 == 135 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(1);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}//turun



void geser_kiri() {
  myservo.write(s1, hom[0] + 5); myservo.write(s13, hom[0] + 5); myservo.write(s10, hom[0]); myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
  myservo.write(s3, hom[0] - 25); myservo.write(s12, hom[0] - 10); myservo.write(s15, hom[0] - 25); myservo.write(s2, hom[0] - 10); myservo.write(s14, hom[0] - 10);
  myservo.write(s6, hom[0] - 10); myservo.write(s18, hom[0] - 10); myservo.write(s9, hom[0] - 25); myservo.write(s8, hom[0] - 7);
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] - 18); myservo.write(s8, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  myservo.write(s2, hom[0] - 10); myservo.write(s14, hom[0] - 10); myservo.write(s11, hom[0] - 10); myservo.write(s2, hom[0]); myservo.write(s14, hom[0]);
  myservo.write(s3, hom[0]); myservo.write(s12, hom[0]); myservo.write(s15, hom[0]);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
}

void geser_kiri_tinggi_1() { // untuk setelah kelereng
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30);
  delay(50);
  myservo.write(s6, hom[0] + 30); myservo.write(s18, hom[0] + 30); myservo.write(s9, hom[0] + 30);
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  delay(50);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//naik
  delay(50);
}

void geser_kiri_tinggi_2() { // untuk di empty
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 20);
  delay(50);
  myservo.write(s6, hom[0] + 30); myservo.write(s18, hom[0] + 30); myservo.write(s9, hom[0] + 30);
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  delay(50);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);  myservo.write(s2, hom[0] + 20); myservo.write(s14, hom[0] + 20); myservo.write(s11, hom[0] - 20); //naik
  delay(50);
  myservo.write(s3, hom[0] + 30); myservo.write(s15, hom[0] + 30); myservo.write(s12, hom[0] + 30);
  delay(50);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//naik
  delay(50);
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s8, hom[0] + 20);
  delay(50);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  delay(50);
}
