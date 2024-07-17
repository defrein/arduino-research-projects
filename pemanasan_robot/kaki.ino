void home1(){
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
    myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); 
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
}

void home2(){
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
    myservo.write(s3, hom[0] - 20); myservo.write(s15, hom[0] - 20); myservo.write(s12, hom[0] + 20); //hom
    myservo.write(s6, hom[0] + 20); myservo.write(s18, hom[0] + 20); myservo.write(s9, hom[0] - 20);//hom
    myservo.write(s5, hom[0]+20); myservo.write(s17, hom[0]+20); myservo.write(s8, hom[0]-20);
    myservo.write(s2, hom[0]-20); myservo.write(s14, hom[0]-20); myservo.write(s11, hom[0]+20);
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
}

void home2_balik() {
      myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);

    for (int n2 = 130, n14 = 130, n8 =130, n3 = 130, n15 = 130, n9 =130 , n11 = 170, n5 = 170,  n17 = 170, n12 = 170, n6 = 170,  n18 = 170   ; 
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

void maju_ok(){
    myservo.write(s3, hom[0]-5); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
    myservo.write(s2, hom[0]+15); myservo.write(s14, hom[0]+15); myservo.write(s11, hom[0]-15);//naik
    delay(50);
    
    myservo.write(s1, hom[0]-20); myservo.write(s13, hom[0]-20); myservo.write(s10, hom[0]+15);//maju
    delay(50);
    
    myservo.write(s2, hom[0]-5); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
    delay(50);
    
    myservo.write(s5, hom[0]-15); myservo.write(s17, hom[0]-15); myservo.write(s8, hom[0]+15);//naik
    delay(50);
    
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
    delay(50);

    myservo.write(s4, hom[0]+20); myservo.write(s16, hom[0]+20); myservo.write(s7, hom[0]-20);//maju
    delay(50);
    
    myservo.write(s5, hom[0]+5); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]-2);//turun
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
