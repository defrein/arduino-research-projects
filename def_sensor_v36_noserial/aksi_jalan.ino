// =========================================================================
// berisi fungsi-fungsi aksi jalan, seperti jalan retak, jalan batu, dll
// ada yang pakai for, ada yang tidak
// =========================================================================

void jalan_turun_depan() {

 myservo.write(s1, hom[0]-20); myservo.write(s13, hom[0]+20);
 myservo.write(s4, hom[0]+20); myservo.write(s16, hom[0]-20);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 180 && n14 == 180 && n11  == 120); n2 += 10, n14 += 10, n11 -=10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
   delay(20); // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 130, n13 = 170, n10 = 150; !(n1 == 100 && n13 <= 140 && n10 == 180); n1 -= 10, n13 -= 10, n10 += 10) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20); // Delay untuk memberikan
  }

  for (int n2 = 170, n14 = 170, n11 = 130; !(n2 == 145 && n14 == 145 && n11 == 155); n2 -= 5, n14 -= 5, n11 += 5) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

   for (int n1 = 110, n13 = 150, n10 = 170, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 140 && n13 >= 180 && n10 <= 140 && n5 == 120 && n17 <= 120 && n8 == 180); 
    n1 += 10, n13 += 10, n10 -= 10, n5 -= 10, n17 -= 10, n8 += 10 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
    }

  for (int n4 = 170, n16 = 130, n7 = 150; !(n4 == 200 && n16 == 160 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14  
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 130, n17 = 130, n8 = 170; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) { // 147,147,153
    myservo.write(s5, n5);    // Menggerakkan servo 1 
    myservo.write(s17, n17);  // Menggerakkan servo 13

    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 190, n16 = 150, n7 = 130; !(n4 == 160  && n16 == 120 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2 
    myservo.write(s16, n16);  // Menggerakkan servo 14
  
    myservo.write(s7, n7);  // Menggerakkan servo 11

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

 }

void jalan_retak_depan() {

 myservo.write(s1, hom[0]-20); myservo.write(s13, hom[0]+20);
 myservo.write(s4, hom[0]+20); myservo.write(s16, hom[0]-20);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 210 && n14 == 210 && n11  == 90); n2 += 20, n14 += 20, n11 -=20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
     myservo.write(s14, n14);  // Menggerakkan servo 14
   myservo.write(s11, n11);  // Menggerakkan servo 11
    
   delay(20); // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 130, n13 = 170, n10 = 150; !(n1 == 100 && n13 <= 140 && n10 == 180); n1 -= 10, n13 -= 10, n10 += 10) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20); // Delay untuk memberikan
  }

  for (int n2 = 190, n14 = 190, n11 = 110; !(n2 == 130 && n14 == 130 && n11 == 170); n2 -= 20, n14 -= 20, n11 += 20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

   for (int n1 = 110, n13 = 150, n10 = 170, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 140 && n13 >= 180 && n10 <= 140 && n5 == 90 && n17 <= 90 && n8 == 210); 
    n1 += 10, n13 += 10, n10 -= 10, n5 -= 20, n17 -= 20, n8 += 20 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
     myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
    }

  for (int n4 = 170, n16 = 130, n7 = 150; !(n4 == 200 && n16 == 160 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
   
    myservo.write(s16, n16);  // Menggerakkan servo 14
    
    myservo.write(s7, n7);  // Menggerakkan servo 11
   
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 110, n17 = 110, n8 = 190; !(n5 == 170 && n17 == 170 && n8 == 130); n5 += 20, n17 += 20, n8 -= 20) { // 147,147,153
    myservo.write(s5, n5);    // Menggerakkan servo 1
    
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 190, n16 = 150, n7 = 130; !(n4 == 160  && n16 == 120 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
     myservo.write(s7, n7);  // Menggerakkan servo 11
     delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

 }
void jalan_retak_23juni_tinggi() {

  myservo.write(s3, hom[0] - 20); myservo.write(s15, hom[0] - 20); myservo.write(s12, hom[0] + 20); //hom
  myservo.write(s6, hom[0] + 20); myservo.write(s18, hom[0] + 20); myservo.write(s9, hom[0] - 20);//hom
  myservo.write(s5, hom[0] + 20); myservo.write(s17, hom[0] + 20); myservo.write(s8, hom[0] - 20);
  myservo.write(s2, hom[0] - 20); myservo.write(s14, hom[0] - 20); myservo.write(s11, hom[0] + 20);

  for (int n2 = 130, n14 = 130, n11 = 170; !(n2 == 210 && n14 == 210 && n11  == 90); n2 += 20, n14 += 20, n11 -= 20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 111 && n13 == 111 && n10 == 189); n1 -= 13, n13 -= 13, n10 += 13) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 190, n14 = 190, n11 = 110; !(n2 == 110 && n14 == 110 && n11 == 190); n2 -= 20, n14 -= 20, n11 += 20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

   for (int n1 = 124, n13 = 124, n10 = 176, n5 = 170, n17 = 170, n8 = 130; !(n1 >= 163 && n13 >= 163 && n10 <= 137 && n5 == 80 && n17 <= 80 && n8 == 220); 
    n1 += 13, n13 += 13, n10 -= 13, n5 -= 30, n17 -= 30, n8 += 30 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
    }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 110, n17 = 110, n8 = 190; !(n5 == 190 && n17 == 190 && n8 == 110); n5 += 20, n17 += 20, n8 -= 20) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160 ); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
}
void jalan_retak_23juni() {

 myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
 myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 210 && n14 == 210 && n11  == 90); n2 += 20, n14 += 20, n11 -=20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
  myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 90 && n13 <= 128 && n10 == 189); n1 -= 20, n13 -= 11, n10 += 13) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
   myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
     delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 190, n14 = 190, n11 = 110; !(n2 == 130 && n14 == 130 && n11 == 170); n2 -= 20, n14 -= 20, n11 += 20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

   for (int n1 = 110, n13 = 128, n10 = 176, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 170 && n13 >= 161 && n10 <= 137 && n5 == 90 && n17 <= 90 && n8 == 210); 
    n1 += 20, n13 += 11, n10 -= 13, n5 -= 20, n17 -= 20, n8 += 20 ) {
    myservo.write(s1, n1);
   myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
   myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
    }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
   myservo.write(s7, n7);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 110, n17 = 110, n8 = 190; !(n5 == 170 && n17 == 170 && n8 == 130); n5 += 20, n17 += 20, n8 -= 20) { // 147,147,153
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10

    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 146 && n16 == 146 && n7 == 154); n4 -= 8, n16 -= 8, n7 += 8) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
   
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
}

void geser_kiri_retak_bawah() {
  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 90 && n17 == 90 && n8  >= 210); n5 -= 20, n17 -= 20, n8 += 20) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
   myservo.write(s8, n8);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik


  for (int n6 = 150, n18 = 150, n9 = 150; !(n6 == 195 && n18 == 195 && n9 == 195); n6 += 15, n18 += 15, n9 += 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
   myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 110, n17 = 110, n8 = 190; !(n5 == 170 && n17 == 170 && n8 <= 130); n5 += 20, n17 += 20, n8 -= 20) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 180, n18 = 180, n9 = 180, n2 = 150, n14 = 150, n11 = 150; !(n6 == 135 && n18 == 135 && n9 == 135 && n2 <= 210 && n14 <= 210 && n11 >= 90);
       n6 -= 15, n18 -= 15, n9 -= 15, n2 += 20, n14 += 20, n11 -= 20 ) {
    myservo.write(s6, n6);
    myservo.write(s18, n18);
    myservo.write(s9, n9);
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s12, hom[0] - 20);

    myservo.write(s11, n11);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 150, n15 = 150, n12 = 150; !(n3 == 195 && n15 == 195 && n12 == 195); n3 += 15, n15 += 15, n12 += 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    myservo.write(s15, n15);  // Menggerakkan servo 13
   myservo.write(s12, n12);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 190, n14 = 190, n11 = 110; !(n2 == 130 && n14 == 130 && n11 >= 170); n2 -= 20, n14 -= 20, n11 += 20) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
   myservo.write(s14, n14);  // Menggerakkan servo 14
   myservo.write(s11, n11);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 180, n15 = 180, n12 = 180, n5 = 150, n17 = 150, n8 = 150; !(n3 == 135 && n15 == 135 && n12 == 135 && n5 <= 90 && n17 <= 90 && n8 >= 210);
       n3 -= 15, n15 -= 15, n12 -= 15, n5 -= 20, n17 -= 20, n8 += 20 ) {
    myservo.write(s3, n3);
    myservo.write(s15, n15);
    myservo.write(s12, n12);
    myservo.write(s5, n5);
      myservo.write(s17, n17);
      myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n5 = 110, n17 = 110, n8 = 190; !(n5 == 170 && n17 == 170 && n8 <= 130); n5 += 20, n17 += 20, n8 -= 20) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
  myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}

void jalan_retak_baru() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  == 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 90 && n13 <= 128 && n10 == 189); n1 -= 20, n13 -= 11, n10 += 13) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 140 && n14 == 140 && n11 == 160); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//turun

  for (int n1 = 110, n13 = 128, n10 = 176, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 170 && n13 >= 161 && n10 <= 137 && n5 == 105 && n17 <= 105 && n8 == 195);
       n1 += 20, n13 += 11, n10 -= 13, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 156 && n17 == 156 && n8 == 144); n5 += 9, n17 += 9, n8 -= 9) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 146 && n16 == 146 && n7 == 154); n4 -= 8, n16 -= 8, n7 += 8) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun


}

void jalan_retak_baru_cepat() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  == 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(1);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 90 && n13 <= 128 && n10 == 189); n1 -= 20, n13 -= 11, n10 += 13) {
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

  for (int n1 = 110, n13 = 128, n10 = 176, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 170 && n13 >= 161 && n10 <= 137 && n5 == 105 && n17 <= 105 && n8 == 195);
       n1 += 20, n13 += 11, n10 -= 13, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(1);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(1);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 156 && n17 == 156 && n8 == 144); n5 += 9, n17 += 9, n8 -= 9) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(1);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 146 && n16 == 146 && n7 == 154); n4 -= 8, n16 -= 8, n7 += 8) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(1);
  }//turun


}

void jalan_retak_bawah() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 210 && n14 == 210 && n11  == 90); n2 += 20, n14 += 20, n11 -= 20) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(1);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 90 && n13 <= 128 && n10 == 189); n1 -= 20, n13 -= 11, n10 += 13) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    delay(1);
  }

  for (int n2 = 190, n14 = 190, n11 = 110; !(n2 == 130 && n14 == 130 && n11 == 170); n2 -= 20, n14 -= 20, n11 += 20) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(20);
  }//turun

  for (int n1 = 110, n13 = 128, n10 = 176, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 170 && n13 >= 161 && n10 <= 137 && n5 == 90 && n17 <= 90 && n8 == 210);
       n1 += 20, n13 += 11, n10 -= 13, n5 -= 20, n17 -= 20, n8 += 20 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(1);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(1);
  }//turun

  for (int n5 = 110, n17 = 110, n8 = 190; !(n5 == 170 && n17 == 170 && n8 == 130); n5 += 20, n17 += 20, n8 -= 20) { // 147,147,153
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 146 && n16 == 146 && n7 == 154); n4 -= 8, n16 -= 8, n7 += 8) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(1);
  }//turun


}

// jalan retak
void jalan_retaks() {

  myservo.write(s3, hom[0] - 10); myservo.write(s15, hom[0] - 10); myservo.write(s12, hom[0] + 10); //hom
  myservo.write(s6, hom[0] + 10); myservo.write(s18, hom[0] + 10); myservo.write(s9, hom[0] - 10);//hom
  myservo.write(s5, hom[0] + 10); myservo.write(s17, hom[0] + 10); myservo.write(s8, hom[0] - 10);
  myservo.write(s2, hom[0] - 10); myservo.write(s14, hom[0] - 10); myservo.write(s11, hom[0] + 10);

  for (int n2 = 140, n14 = 140, n11 = 160; !(n2 == 185 && n14 == 185 && n11  == 115); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(20);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 118 && n13 == 118 && n10 == 182); n1 -= 8, n13 -= 8, n10 += 8) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    delay(20);
  }

  for (int n2 = 170, n14 = 170, n11 = 130; !(n2 == 130 && n14 == 130 && n11 == 170); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//turun

  for (int n1 = 124, n13 = 124, n10 = 176, n5 = 160, n17 = 160, n8 = 140; !(n1 >= 163 && n13 >= 163 && n10 <= 137 && n5 == 115 && n17 <= 115 && n8 == 185);
       n1 += 13, n13 += 13, n10 -= 13, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(20);
  }//turun

  for (int n5 = 130, n17 = 130, n8 = 170; !(n5 == 170 && n17 == 170 && n8 == 130); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(20);
  }//turun
}

void jalan_retak() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  == 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(20);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 111 && n13 == 111 && n10 == 189); n1 -= 13, n13 -= 13, n10 += 13) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    delay(20);
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 140 && n14 == 140 && n11 == 160); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);

    myservo.write(s14, n14);

    myservo.write(s11, n11);
    delay(20);
  }//turun

  for (int n1 = 124, n13 = 124, n10 = 176, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 163 && n13 >= 163 && n10 <= 137 && n5 == 105 && n17 <= 105 && n8 == 195);
       n1 += 13, n13 += 13, n10 -= 13, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(20);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(20);
  }//turun
}


void jalan_retak_biasa() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 40); myservo.write(s14, hom[0] + 40); myservo.write(s11, hom[0] - 40); //naik
  delay(10);
  myservo.write(s1, hom[0] - 35); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 15); //maju
  delay(10);
  myservo.write(s2, hom[0] - 10); myservo.write(s14, hom[0] - 10); myservo.write(s11, hom[0] + 10);
  delay(10);
  myservo.write(s5, hom[0] - 40); myservo.write(s17, hom[0] - 40); myservo.write(s8, hom[0] + 40); //naik
  delay(10);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(10);
  myservo.write(s4, hom[0] + 10); myservo.write(s16, hom[0] + 10); myservo.write(s7, hom[0] - 33); //maju
  delay(10);
  myservo.write(s5, hom[0] + 10); myservo.write(s17, hom[0] + 10); myservo.write(s8, hom[0] - 10);
  delay(10);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

void jalan_retak_for() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 190 && n14 == 190 && n11  == 110); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 118 && n13 == 118 && n10 == 182); n1 -= 8, n13 -= 8, n10 += 8) {
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

  for (int n1 = 126, n13 = 126, n10 = 174, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 150 && n13 >= 150 && n10 <= 150 && n5 == 110 && n17 <= 110 && n8 == 190);
       n1 += 8, n13 += 8, n10 -= 8, n5 -= 10, n17 -= 10, n8 += 10 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
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

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun
}

void jalan_retak2() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 210 && n14 == 210 && n11  == 90); n2 += 20, n14 += 20, n11 -= 20) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(100);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 118 && n13 == 118 && n10 == 182); n1 -= 8, n13 -= 8, n10 += 8) {
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

  for (int n1 = 126, n13 = 126, n10 = 174, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 150 && n13 >= 150 && n10 <= 150 && n5 == 75 && n17 == 75 && n8 == 225);
       n1 += 8, n13 += 8, n10 -= 8, n5 -= 25, n17 -= 25, n8 += 25 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(100);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
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

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun
}

void jalan_retak3() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 210 && n14 == 210 && n11  == 90); n2 += 20, n14 += 20, n11 -= 20) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(5);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 118 && n13 == 118 && n10 == 182); n1 -= 8, n13 -= 8, n10 += 8) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    delay(5);
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 148 && n14 == 148 && n11 == 152); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(5);
  }//turun

  for (int n1 = 126, n13 = 126, n10 = 174, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 150 && n13 >= 150 && n10 <= 150 && n5 == 75 && n17 == 75 && n8 == 225);
       n1 += 8, n13 += 8, n10 -= 8, n5 -= 25, n17 -= 25, n8 += 25 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(5);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(5);
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(5);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(5);
  }//turun
}

void maju_turun() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]); myservo.write(s1, hom[0] - 28); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 20); //maju
  delay(100);
  myservo.write(s2, hom[0] + 20); myservo.write(s14, hom[0] + 20); myservo.write(s11, hom[0] - 20); //angkat Kanan
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0] + 3);
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
  delay(100);
  myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0] - 10); myservo.write(s8, hom[0] + 10); //maju kiri
  delay(100);
  myservo.write(s4, hom[0] + 30); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 20);
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
  delay(100);
}


// jalan turun
void jalan_turun_siput() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 160 && n14 == 160 && n11  == 140); n2 += 2, n14 += 2, n11 -= 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(10);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 128 && n13 == 128 && n10 == 172); n1 -= 2, n13 -= 2, n10 += 2) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(10);
  }

  for (int n2 = 160, n14 = 160, n11 = 140; !(n2 == 150 && n14 == 150 && n11 == 150); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(10);
  }//turun

  for (int n1 = 130, n13 = 130, n10 = 170, n5 = 150, n17 = 150, n8 = 150; !(n1 == 150 && n13 == 150 && n10 == 150 && n5 == 130 && n17 == 130 && n8 == 170);
       n1 += 2, n13 += 2, n10 -= 2, n5 -= 2, n17 -= 2, n8 += 2 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(10);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 170 && n16 == 170 && n7 == 130); n4 += 2, n16 += 2, n7 -= 2) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(10);
  }//turun

  for (int n5 = 130, n17 = 130, n8 = 170; !(n5 == 154 && n17 == 154 && n8 == 146); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(10);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 150 && n16 == 150 && n7 == 150); n4 -= 2, n16 -= 2, n7 += 2) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(10);
  }//turun
}


void jalan_turun() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 180 && n14 == 180 && n11  == 120); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(10);
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 120 && n13 == 120 && n10 == 180); n1 -= 10, n13 -= 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(10);  // Delay untuk memberikan
  }

  for (int n2 = 160, n14 = 160, n11 = 140; !(n2 == 150 && n14 == 150 && n11 == 150); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(10);
  }//turun

  for (int n1 = 130, n13 = 130, n10 = 170, n5 = 150, n17 = 150, n8 = 150; !(n1 == 155 && n13 == 155 && n10 == 145 && n5 == 125 && n17 == 125 && n8 == 175);
       n1 += 5, n13 += 5, n10 -= 5, n5 -= 5, n17 -= 5, n8 += 5 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(10);
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(10);
  }//turun

  for (int n5 = 130, n17 = 130, n8 = 170; !(n5 == 152 && n17 == 152 && n8 == 148); n5 += 2, n17 += 2, n8 -= 2) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(10);
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(10);
  }//turun

}

void jalan_turun2() {

  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 180 && n14 == 195 && n11  == 120); n2 += 10, n14 += 15, n11 -= 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
 myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
   delay(10);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 120 && n13 == 120 && n10 == 180); n1 -= 10, n13 -= 10, n10 += 10) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
   myservo.write(s13, n13);  // Menggerakkan servo 13
     myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(10);  // Delay untuk memberikan
  }

  for (int n2 = 170, n14 = 180, n11 = 130; !(n2 == 145 && n14 == 145 && n11 == 155); n2 -= 5, n14 -= 7, n11 += 5) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11

    delay(10);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n1 = 130, n13 = 130, n10 = 170, n5 = 150, n17 = 150, n8 = 150; !(n1 == 155 && n13 == 155 && n10 == 145 && n5 == 125 && n17 == 115 && n8 == 175);
       n1 += 5, n13 += 5, n10 -= 5, n5 -= 5, n17 -= 7, n8 += 5 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
   myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
   
    myservo.write(s8, n8);
    delay(10);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
   delay(10);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 130, n17 = 122, n8 = 170; !(n5 == 155 && n17 == 157 && n8 == 145); n5 += 5, n17 += 7, n8 -= 5) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(10);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo
    myservo.write(s16, n16);  // Menggerakkan servo 14
   myservo.write(s7, n7);  // Menggerakkan servo 11
   delay(10);  // Delay untuk memberikan waktu servos bergerak
  }//turun
}
// jalan batu
void jalan_batu0() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(200);
  myservo.write(s1, hom[0] - 30); myservo.write(s13, hom[0] - 30); myservo.write(s10, hom[0] + 20); //maju
  delay(200);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(200);
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30); //naik
  delay(200);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(200);
  myservo.write(s4, hom[0] + 30); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 35); //maju
  delay(200);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(200);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

void jalan_batu() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(100);
  myservo.write(s1, hom[0] - 20); myservo.write(s13, hom[0] - 20); myservo.write(s10, hom[0] + 20); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30); //naik
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(100);
  myservo.write(s4, hom[0] + 35); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 25); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

// jalan kelereng
void jalan_kelereng() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(200);
  myservo.write(s1, hom[0] - 35); myservo.write(s13, hom[0] - 30); myservo.write(s10, hom[0] + 20); //maju
  delay(200);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(200);
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30); //naik
  delay(200);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(200);
  myservo.write(s4, hom[0] + 30); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 35); //maju
  delay(200);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(200);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

// jalan naik

void belok_kiri_kelereng() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s5, hom[0] - 35); myservo.write(s17, hom[0] - 35); myservo.write(s8, hom[0] + 35); //naik2
  delay(100);
  myservo.write(s4, hom[0] - 20); myservo.write(s16, hom[0] - 20); myservo.write(s7, hom[0] - 20); //maju
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
  delay(100);
  myservo.write(s2, hom[0] + 35); myservo.write(s14, hom[0] + 35); myservo.write(s11, hom[0] - 35);
  delay(100);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
  delay(100);
  myservo.write(s1, hom[0] - 30); myservo.write(s13, hom[0] - 30); myservo.write(s10, hom[0] - 30); //maju
  delay(100);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(100);
  myservo.write(s5, hom[0] - 35); myservo.write(s17, hom[0] - 35); myservo.write(s8, hom[0] + 35); //naik2
  delay(100);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(100);
  myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
}

void jalan_setelah_kelereng() {
  myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
  myservo.write(s2, hom[0] + 30); myservo.write(s14, hom[0] + 30); myservo.write(s11, hom[0] - 30); //naik
  delay(200);
  myservo.write(s1, hom[0] - 30); myservo.write(s13, hom[0] - 30); myservo.write(s10, hom[0] + 20); //maju
  delay(200);
  myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
  delay(200);
  myservo.write(s5, hom[0] - 30); myservo.write(s17, hom[0] - 30); myservo.write(s8, hom[0] + 30); //naik
  delay(200);
  myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
  delay(200);
  myservo.write(s4, hom[0] + 20); myservo.write(s16, hom[0] + 20); myservo.write(s7, hom[0] - 20); //maju
  delay(200);
  myservo.write(s5, hom[0] - 5); myservo.write(s17, hom[0] - 5); myservo.write(s8, hom[0] + 5); //turun
  delay(200);
  myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

void jalan_naik2() {
  myservo.write(s3, hom[0] + 10); myservo.write(s12, hom[0] + 20); myservo.write(s15, hom[0] - 20);
  myservo.write(s9, hom[0] - 20);  myservo.write(s6, hom[0] - 10); myservo.write(s18, hom[0] + 20);
  //     myservo.write(s14, hom[0]-20);  myservo.write(s2, hom[0]+10);  myservo.write(s11, hom[0]+20);

  for (int n2 = 160, n14 = 130, n11 = 170; !(n2 == 205 && n14 == 175 && n11  == 125); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);
    delay(20);
  }

  //  // myservo.write(s1, hom[0]);  myservo.write(s10, hom[0]);   myservo.write(s13, hom[0]+20);

  for (int n1 = 150, n13 = 170, n10 = 160; !(n1 == 120 && n13 == 140 && n10 == 190); n1 -= 10, n13 -= 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);
  }

  for (int n2 = 190, n14 = 160, n11 = 140; !(n2 == 150 && n14 == 120 && n11  == 180); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  // myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0]+20);   myservo.write(s8, hom[0]-20);
  for (int n1 = 130, n13 = 150, n10 = 180, n5 = 140, n17 = 170, n8 = 130; !(n1 == 160 && n13 == 180 && n10 == 150 && n5 == 95 && n17 <= 125 && n8 == 175 );
       n1 += 10, n13 += 10, n10 -= 10, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  //         myservo.write(s4, hom[0]); myservo.write(s7, hom[0]-10);  myservo.write(s16, hom[0] - 20);

  for (int n4 = 150, n16 = 130, n7 = 140; !(n4 == 180 && n16 == 160 && n7 == 110); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);


    delay(20);
  }//turun

  // myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0]+20);   myservo.write(s8, hom[0]-20);

  for (int n5 = 110, n17 = 140, n8 = 160; !(n5 == 150 && n17 == 180 && n8 == 120); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }
  //      myservo.write(s4, hom[0]); myservo.write(s7, hom[0]-10);  myservo.write(s16, hom[0] - 20);

  for (int n4 = 170, n16 = 150, n7 = 120; !(n4 == 140 && n16 == 120 && n7 == 150); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun

}

void jalan_naik() {
  myservo.write(s3, hom[0] + 10); myservo.write(s12, hom[0] + 20); myservo.write(s15, hom[0] - 20);
  myservo.write(s9, hom[0] - 20);  myservo.write(s6, hom[0] - 10); myservo.write(s18, hom[0] + 20);
  //     myservo.write(s14, hom[0]-20);  myservo.write(s2, hom[0]+10);  myservo.write(s11, hom[0]+20);

  for (int n2 = 160, n14 = 130, n11 = 170; !(n2 == 205 && n14 == 175 && n11  == 125); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik

  // myservo.write(s1, hom[0]);  myservo.write(s10, hom[0]);   myservo.write(s13, hom[0]+20);
  for (int n1 = 150, n13 = 170, n10 = 160; !(n1 == 120 && n13 == 140 && n10 == 190); n1 -= 10, n13 -= 10, n10 += 10) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);

    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 190, n14 = 160, n11 = 140; !(n2 == 158 && n14 == 128 && n11  == 172); n2 -= 2, n14 -= 2, n11 += 2) {
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s11, n11);

    delay(20);
  }//naik
  //    // myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0]+20);   myservo.write(s8, hom[0]-20);
  for (int n1 = 130, n13 = 150, n10 = 180, n5 = 140, n17 = 170, n8 = 130; !(n1 == 160 && n13 == 180 && n10 == 150 && n5 == 95 && n17 <= 125 && n8 == 175 );
       n1 += 10, n13 += 10, n10 -= 10, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);
    //maju
  }

  //         myservo.write(s4, hom[0]); myservo.write(s7, hom[0]-10);  myservo.write(s16, hom[0] - 20);

  for (int n4 = 150, n16 = 130, n7 = 140; !(n4 == 180 && n16 == 160 && n7 == 110); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);

    delay(20);
  }//turun

  // myservo.write(s5, hom[0] - 10); myservo.write(s17, hom[0]+20);   myservo.write(s8, hom[0]-20);

  for (int n5 = 110, n17 = 140, n8 = 160; !(n5 == 150 && n17 == 180 && n8 == 120); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);
    //maju
  }
  //      myservo.write(s4, hom[0]); myservo.write(s7, hom[0]-10);  myservo.write(s16, hom[0] - 20);

  for (int n4 = 170, n16 = 150, n7 = 120; !(n4 == 148 && n16 == 128 && n7 == 142); n4 -= 2, n16 -= 2, n7 += 2) {
    myservo.write(s4, n4);
    myservo.write(s16, n16);
    myservo.write(s7, n7);
    delay(20);
  }

}

void jalan_naik_kbelakang() {
  for (int n14 = 130; !(n14 == 175); n14 += 15) {
    myservo.write(s14, n14);
    delay(20);
  }//naik

  for (int n13 = 170; !(n13 == 140 ); n13 -= 10) {
    myservo.write(s13, n13);
    delay(20);
  }
  for (int n14 = 160; !(n14 == 115 ); n14 -= 15) {
    myservo.write(s14, n14);
    delay(20);
  }
}

void jalan_naik_kibelakang() {
  //  myservo.write(s17, hom[0] + 30);  myservo.write(s16, hom[0] - 20);
  for (int n17 = 180; !(n17 == 135  ); n17 -= 15) {
    myservo.write(s17, n17);
    delay(20);
  }
  for (int n16 = 130; !(n16 == 160  ); n16 += 10) {
    myservo.write(s16, n16);
    delay(20);
  }
  for (int n17 = 160; !(n17 == 205  ); n17 += 15) {
    myservo.write(s17, n17);
    delay(20);
  }
}

void geser_kiri_tangga_bawah() {
  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8  >= 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik


  for (int n6 = 150, n18 = 150, n9 = 150; !(n6 == 195 && n18 == 195 && n9 == 195); n6 += 15, n18 += 15, n9 += 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 180, n18 = 180, n9 = 180, n2 = 150, n14 = 150, n11 = 150; !(n6 == 135 && n18 == 135 && n9 == 135 && n2 <= 195 && n14 <= 195 && n11 >= 105);
       n6 -= 15, n18 -= 15, n9 -= 15, n2 += 15, n14 += 15, n11 -= 15 ) {
    myservo.write(s6, n6);
    myservo.write(s18, n18);
    myservo.write(s9, n9);
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s12, hom[0] - 20);
    myservo.write(s11, n11);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 150, n15 = 150, n12 = 150; !(n3 == 195 && n15 == 195 && n12 == 195); n3 += 15, n15 += 15, n12 += 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    myservo.write(s15, n15);  // Menggerakkan servo 13
    myservo.write(s12, n12);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 135 && n14 == 135 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 180, n15 = 180, n12 = 180, n5 = 150, n17 = 150, n8 = 150; !(n3 == 135 && n15 == 135 && n12 == 135 && n5 <= 105 && n17 <= 105 && n8 >= 195);
       n3 -= 15, n15 -= 15, n12 -= 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s3, n3);
    myservo.write(s15, n15);
    myservo.write(s12, n12);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 1
    myservo.write(s8, n8);  // Menggerakkan servo 11

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}



void geser_kiri_tangga_atas() {
  myservo.write(s3, hom[0] - 20); myservo.write(s15, hom[0] - 20); myservo.write(s12, hom[0]); //hom
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 20);//hom
  myservo.write(s5, hom[0] ); myservo.write(s17, hom[0] ); myservo.write(s8, hom[0] - 20);
  myservo.write(s2, hom[0] - 20); myservo.write(s14, hom[0] - 20); myservo.write(s11, hom[0] );

  
  for (int n5 = 150, n17 = 150, n8 = 130; !(n5 == 105 && n17 == 105 && n8  >= 175); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2


    myservo.write(s17, n17);  // Menggerakkan servo 14
   

    myservo.write(s8, n8);  // Menggerakkan servo 11
  

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik
  

  for (int n6 = 150, n18 = 150, n9 = 130; !(n6 == 195 && n18 == 195 && n9 == 169); n6 += 15, n18 += 15, n9 += 13) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
   
    myservo.write(s18, n18);  // Menggerakkan servo 14
   

    myservo.write(s9, n9);  // Menggerakkan servo 11
   

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
  

  for (int n5 = 120, n17 = 120, n8 = 160; !(n5 == 165 && n17 == 165 && n8 <= 115); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
  
    myservo.write(s17, n17);  // Menggerakkan servo 14
   

    myservo.write(s8, n8);  // Menggerakkan servo 11
    

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 180, n18 = 180, n9 = 156, n2 = 130, n14 = 130, n11 = 150; !(n6 == 135 && n18 == 135 && n9 == 117 && n2 <= 175 && n14 <= 175 && n11 >= 105);
       n6 -= 15, n18 -= 15, n9 -= 13, n2 += 15, n14 += 15, n11 -= 15 ) {
    myservo.write(s6, n6);
  
    myservo.write(s18, n18);
   

    myservo.write(s9, n9);
   
    myservo.write(s2, n2);
   
    myservo.write(s14, n14);
    

    myservo.write(s12, hom[0] - 20);

    myservo.write(s11, n11);
   

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 130, n15 = 130, n12 = 150; !(n3 == 175 && n15 == 175 && n12 == 195); n3 += 15, n15 += 15, n12 += 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    
    myservo.write(s15, n15);  // Menggerakkan servo 13
    
    myservo.write(s12, n12);  // Menggerakkan servo 10
    

    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 160, n14 = 160, n11 = 120; !(n2 == 115 && n14 == 115 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
   
    myservo.write(s14, n14);  // Menggerakkan servo 14
   

    myservo.write(s11, n11);  // Menggerakkan servo 11
   

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 160, n15 = 160, n12 = 180, n5 = 150, n17 = 150, n8 = 130; !(n3 == 115 && n15 == 115 && n12 == 135 && n5 <= 105 && n17 <= 105 && n8 >= 175);
       n3 -= 15, n15 -= 15, n12 -= 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s3, n3);

    myservo.write(s15, n15);
   

    myservo.write(s12, n12);
 

    myservo.write(s5, n5);
  
    myservo.write(s17, n17);
 
   

    myservo.write(s8, n8);
 

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n5 = 120, n17 = 120, n8 = 160; !(n5 == 165 && n17 == 165 && n8 <= 115); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
   

    myservo.write(s17, n17);  // Menggerakkan servo 14
    

    myservo.write(s8, n8);  // Menggerakkan servo 11
 

    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}

void geser_kiri_tangga_tengah2() { // dikit je
  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8  >= 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik


  for (int n6 = 150, n18 = 150, n9 = 120; !(n6 == 195 && n18 == 195 && n9 == 165); n6 += 15, n18 += 15, n9 += 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 180, n18 = 180, n9 = 150, n2 = 150, n14 = 150, n11 = 150; !(n6 == 135 && n18 == 135 && n9 == 105 && n2 <= 195 && n14 <= 195 && n11 >= 105);
       n6 -= 15, n18 -= 15, n9 -= 15, n2 += 15, n14 += 15, n11 -= 15 ) {
    myservo.write(s6, n6);
    myservo.write(s18, n18);
    myservo.write(s9, n9);
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s12, hom[0] - 20);
    myservo.write(s11, n11);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 120, n15 = 120, n12 = 150; !(n3 == 165 && n15 == 165 && n12 == 195); n3 += 15, n15 += 15, n12 += 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    myservo.write(s15, n15);  // Menggerakkan servo 13
    myservo.write(s12, n12);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 135 && n14 == 135 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 150, n15 = 150, n12 = 180, n5 = 150, n17 = 150, n8 = 150; !(n3 == 105 && n15 == 105 && n12 == 135 && n5 <= 105 && n17 <= 105 && n8 >= 195);
       n3 -= 15, n15 -= 15, n12 -= 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s3, n3);
    myservo.write(s15, n15);
    myservo.write(s12, n12);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}


void geser_kiri_tangga_tengah3() {
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s11, hom[0] - 20);
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);

  for (int n5 = 130, n17 = 130, n8 = 150; !(n5 == 85 && n17 == 85 && n8  >= 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik


  for (int n6 = 150, n18 = 150, n9 = 120; !(n6 == 195 && n18 == 195 && n9 == 165); n6 += 15, n18 += 15, n9 += 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 100, n17 = 100, n8 = 180; !(n5 == 145 && n17 == 145 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
      myservo.write(s5, n5); 
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 180, n18 = 180, n9 = 150, n2 = 150, n14 = 150, n11 = 130; !(n6 == 135 && n18 == 135 && n9 == 105 && n2 <= 195 && n14 <= 195 && n11 >= 85);
       n6 -= 15, n18 -= 15, n9 -= 15, n2 += 15, n14 += 15, n11 -= 15 ) {
    myservo.write(s6, n6);   
    myservo.write(s18, n18);
    myservo.write(s9, n9);    
    myservo.write(s2, n2);   
    myservo.write(s14, n14);  
    myservo.write(s12, hom[0] - 20);
    myservo.write(s11, n11);   
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 120, n15 = 120, n12 = 150; !(n3 == 171 && n15 == 171 && n12 == 195); n3 += 17, n15 += 17, n12 += 15) {
    myservo.write(s3, n3);   
    myservo.write(s15, n15);  
    myservo.write(s12, n12);
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 100; !(n2 == 135 && n14 == 135 && n11 >= 145); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2   
    myservo.write(s14, n14);  // Menggerakkan servo 14   
    myservo.write(s11, n11);  // Menggerakkan servo 11    
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 154, n15 = 154, n12 = 180, n5 = 130, n17 = 130, n8 = 150; !(n3 == 103 && n15 == 103 && n12 == 135 && n5 <= 85 && n17 <= 85 && n8 >= 195);
       n3 -= 17, n15 -= 17, n12 -= 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
   myservo.write(s3, n3);   
    myservo.write(s15, n15);
    myservo.write(s12, n12);
    myservo.write(s5, n5); 
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n5 = 100, n17 = 100, n8 = 180; !(n5 == 145 && n17 == 145 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5); 
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}

void jalan_maju_tangga() {

  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 180 && n14 == 180 && n11  == 120); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 111 && n13 == 111 && n10 == 189); n1 -= 13, n13 -= 13, n10 += 13) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 170, n14 = 170, n11 = 130; !(n2 == 140 && n14 == 140 && n11 == 160); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n1 = 124, n13 = 124, n10 = 176, n5 = 150, n17 = 150, n8 = 150; !(n1 >= 163 && n13 >= 163 && n10 <= 137 && n5 == 120 && n17 <= 120 && n8 == 180);
       n1 += 13, n13 += 13, n10 -= 13, n5 -= 10, n17 -= 10, n8 += 10 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 130, n17 = 130, n8 = 170; !(n5 == 160 && n17 == 160 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
}

void jalan_maju_tangga3() {
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s11, hom[0] - 20);

  for (int n2 = 150, n14 = 150, n11 = 130; !(n2 == 180 && n14 == 180 && n11  == 100); n2 += 10, n14 += 10, n11 -= 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n1 = 150, n13 = 150, n10 = 150; !(n1 == 111 && n13 == 111 && n10 == 189); n1 -= 13, n13 -= 13, n10 += 13) {
    myservo.write(s1, n1);    // Menggerakkan servo 1
    myservo.write(s13, n13);  // Menggerakkan servo 13
    myservo.write(s10, n10);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 170, n14 = 170, n11 = 110; !(n2 == 140 && n14 == 140 && n11 == 140); n2 -= 10, n14 -= 10, n11 += 10) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n1 = 124, n13 = 124, n10 = 176, n5 = 130, n17 = 130, n8 = 150; !(n1 >= 163 && n13 >= 163 && n10 <= 137 && n5 == 100 && n17 <= 100 && n8 == 180);
       n1 += 13, n13 += 13, n10 -= 13, n5 -= 10, n17 -= 10, n8 += 10 ) {
    myservo.write(s1, n1);
    myservo.write(s13, n13);
    myservo.write(s10, n10);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n4 = 150, n16 = 150, n7 = 150; !(n4 == 180 && n16 == 180 && n7 == 120); n4 += 10, n16 += 10, n7 -= 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 110, n17 = 110, n8 = 170; !(n5 == 140 && n17 == 140 && n8 == 140); n5 += 10, n17 += 10, n8 -= 10) {
    myservo.write(s5, n5);    // Menggerakkan servo 1
    myservo.write(s17, n17);  // Menggerakkan servo 13
    myservo.write(s8, n8);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
    //maju
  }

  for (int n4 = 170, n16 = 170, n7 = 130; !(n4 == 140 && n16 == 140 && n7 == 160); n4 -= 10, n16 -= 10, n7 += 10) {
    myservo.write(s4, n4);    // Menggerakkan servo 2
    myservo.write(s16, n16);  // Menggerakkan servo 14
    myservo.write(s7, n7);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}

void geser_kiri_tangga_tengah1() { // ini banyak
  myservo.write(s5, hom[0] - 20); myservo.write(s17, hom[0] - 20); myservo.write(s11, hom[0] - 20);
  myservo.write(s3, hom[0] - 30); myservo.write(s15, hom[0] - 30); myservo.write(s12, hom[0]);
  myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0] - 30);

  for (int n5 = 130, n17 = 130, n8 = 150; !(n5 == 85 && n17 == 85 && n8  >= 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik


  for (int n6 = 150, n18 = 150, n9 = 120; !(n6 == 195 && n18 == 195 && n9 == 165); n6 += 15, n18 += 15, n9 += 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 100, n17 = 100, n8 = 180; !(n5 == 145 && n17 == 145 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 180, n18 = 180, n9 = 150, n2 = 150, n14 = 150, n11 = 130; !(n6 == 135 && n18 == 135 && n9 == 105 && n2 <= 195 && n14 <= 195 && n11 >= 85);
       n6 -= 15, n18 -= 15, n9 -= 15, n2 += 15, n14 += 15, n11 -= 15 ) {
    myservo.write(s6, n6);
    myservo.write(s18, n18);
    myservo.write(s9, n9);
    myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s12, hom[0] - 20);
    myservo.write(s11, n11);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 120, n15 = 120, n12 = 150; !(n3 == 165 && n15 == 165 && n12 == 195); n3 += 15, n15 += 15, n12 += 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    myservo.write(s15, n15);  // Menggerakkan servo 13
    myservo.write(s12, n12);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 100; !(n2 == 135 && n14 == 135 && n11 >= 145); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 150, n15 = 150, n12 = 180, n5 = 130, n17 = 130, n8 = 150; !(n3 == 105 && n15 == 105 && n12 == 135 && n5 <= 85 && n17 <= 85 && n8 >= 195);
       n3 -= 15, n15 -= 15, n12 -= 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s3, n3);
    myservo.write(s15, n15);
    myservo.write(s12, n12);
    myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

  for (int n5 = 100, n17 = 100, n8 = 180; !(n5 == 145 && n17 == 145 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

}

void geser_kanan_sempit() {

 myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);
 myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);

  for (int n2 = 150, n14 = 150, n11 = 150; !(n2 == 195 && n14 == 195 && n11  <= 105); n2 += 15, n14 += 15, n11 -= 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
      myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
     delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik

  for (int n3 = 150, n15 = 150, n12 = 150; !(n3 == 105 && n15 == 105 && n12 == 105); n3 -= 15, n15 -= 15, n12 -= 15) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
   
    myservo.write(s15, n15);  // Menggerakkan servo 13
   myservo.write(s12, n12);  // Menggerakkan servo 10
    delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 135 && n14 == 135 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
    myservo.write(s14, n14);  // Menggerakkan servo 14
   myservo.write(s11, n11);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

   for (int n3 = 120, n15 = 120, n12 = 120, n5 = 150, n17 = 150, n8 = 150; !(n3 == 165 && n15 == 165 && n12 == 165 && n5 <= 105 && n17 <= 105 && n8 >= 195); 
    n3 += 15, n15 += 15, n12 += 15, n5 -= 15, n17 -= 15, n8 += 15 ) {
    myservo.write(s3, n3);
    myservo.write(s15, n15);
    myservo.write(s12, n12);
     myservo.write(s5, n5);
    myservo.write(s17, n17);
    myservo.write(s8, n8);
   delay(20);  // Delay untuk memberikan waktu servos bergerak
    }  

    for (int n6 = 150, n18 = 150, n9 = 150; !(n6 == 105 && n18 == 105 && n9 == 105); n6 -= 15, n18 -= 15, n9 -= 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
    myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
   myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  
    for (int n6 = 120, n18 = 120, n9 = 120; !(n6 == 165 && n18 == 165 && n9 == 165); n6 += 15, n18 += 15, n9 += 15) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
   myservo.write(s18, n18);  // Menggerakkan servo 14
   myservo.write(s9, n9);  // Menggerakkan servo 11
     delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun
  
 }//turun


 void geser_kiri_sempit() {
  for (int n5 = 150, n17 = 150, n8 = 150; !(n5 == 105 && n17 == 105 && n8  >= 195); n5 -= 15, n17 -= 15, n8 += 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
   myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
  delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//naik


  for (int n6 = 150, n18 = 150, n9 = 150; !(n6 == 165 && n18 == 165 && n9 == 165); n6 += 5, n18 += 5, n9 += 5) {
    myservo.write(s6, n6);    // Menggerakkan servo 2
   myservo.write(s18, n18);  // Menggerakkan servo 14
    myservo.write(s9, n9);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n5 = 120, n17 = 120, n8 = 180; !(n5 == 165 && n17 == 165 && n8 <= 135); n5 += 15, n17 += 15, n8 -= 15) {
    myservo.write(s5, n5);    // Menggerakkan servo 2
    myservo.write(s17, n17);  // Menggerakkan servo 14
    myservo.write(s8, n8);  // Menggerakkan servo 11
    delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n6 = 160, n18 = 160, n9 = 160, n2 = 150, n14 = 150, n11 = 150; !(n6 == 145 && n18 == 145 && n9 == 145 && n2 <= 195 && n14 <= 195 && n11 >= 105);
       n6 -= 5, n18 -= 5, n9 -= 5, n2 += 15, n14 += 15, n11 -= 15 ) {
    myservo.write(s6, n6);
   myservo.write(s18, n18);
  
    myservo.write(s9, n9);
   myservo.write(s2, n2);
    myservo.write(s14, n14);
    myservo.write(s12, hom[0] - 20);

    myservo.write(s11, n11);
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }


  for (int n3 = 150, n15 = 150, n12 = 150; !(n3 == 165 && n15 == 165 && n12 == 165); n3 += 5, n15 += 5, n12 += 5) {
    myservo.write(s3, n3);    // Menggerakkan servo 1
    myservo.write(s15, n15);  // Menggerakkan servo 13
    myservo.write(s12, n12);  // Menggerakkan servo 10
   delay(20);  // Delay untuk memberikan
  }

  for (int n2 = 180, n14 = 180, n11 = 120; !(n2 == 135 && n14 == 135 && n11 >= 165); n2 -= 15, n14 -= 15, n11 += 15) {
    myservo.write(s2, n2);    // Menggerakkan servo 2
   myservo.write(s14, n14);  // Menggerakkan servo 14
    myservo.write(s11, n11);  // Menggerakkan servo 11
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }//turun

  for (int n3 = 160, n15 = 160, n12 = 160; !(n3 == 145 && n15 == 145 && n12 == 145 );
       n3 -= 5, n15 -= 5, n12 -= 5) {
    myservo.write(s3, n3);
   myservo.write(s15, n15);
   myservo.write(s12, n12);
   delay(20);  // Delay untuk memberikan waktu servos bergerak
  }

}
