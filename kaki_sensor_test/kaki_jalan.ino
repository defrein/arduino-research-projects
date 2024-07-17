void home1(){
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);
    myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]); 
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);
}

void maju(){
    myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom 
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
    myservo.write(s2, hom[0]+10); myservo.write(s14, hom[0]+10); myservo.write(s11, hom[0]-10);//naik
    myservo.write(s1, hom[0]-35); myservo.write(s13, hom[0]-35); myservo.write(s10, hom[0]+20);//maju
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
    myservo.write(s5, hom[0]-10); myservo.write(s17, hom[0]-10); myservo.write(s8, hom[0]+10);//naik
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
    myservo.write(s4, hom[0]+20); myservo.write(s16, hom[0]+20); myservo.write(s7, hom[0]-30);//maju
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
}

void mundur(){
    myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom 
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
    
    myservo.write(s5, hom[0]-10); myservo.write(s8, hom[0]+10); myservo.write(s17, hom[0]-10);//naik
    myservo.write(s4, hom[0]-25); myservo.write(s7, hom[0]+30); myservo.write(s16, hom[0]-28);//maju
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
    myservo.write(s2, hom[0]+10); myservo.write(s14, hom[0]+10); myservo.write(s11, hom[0]-10);//naik
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
    myservo.write(s1, hom[0]+20); myservo.write(s13, hom[0]+20); myservo.write(s10, hom[0]-30);//maju
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
}

void belok_kanan(){
    myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom 
    myservo.write(s2, hom[0]+10); myservo.write(s14, hom[0]+10); myservo.write(s11, hom[0]-10);//naik 
    myservo.write(s1, hom[0]+20); myservo.write(s13, hom[0]+20); myservo.write(s10, hom[0]+20);//maju
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun    
    myservo.write(s5, hom[0]-10); myservo.write(s17, hom[0]-10); myservo.write(s8, hom[0]+10);//naik2
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik   
    myservo.write(s4, hom[0]+30); myservo.write(s16, hom[0]+30); myservo.write(s7, hom[0]+30);//maju  
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun   
    myservo.write(s2, hom[0]+10); myservo.write(s14, hom[0]+10); myservo.write(s11, hom[0]-10);//naik    
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik   
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//naik 
    
}

void belok_kiri(){
    myservo.write(s3, hom[0]); myservo.write(s15, hom[0]); myservo.write(s12, hom[0]);//hom
    myservo.write(s6, hom[0]); myservo.write(s18, hom[0]); myservo.write(s9, hom[0]);//hom
    myservo.write(s5, hom[0]-10); myservo.write(s17, hom[0]-10); myservo.write(s8, hom[0]+10);//naik2 
    myservo.write(s4, hom[0]-20); myservo.write(s16, hom[0]-20); myservo.write(s7, hom[0]-20);//maju
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
    myservo.write(s2, hom[0]+10); myservo.write(s14, hom[0]+10); myservo.write(s11, hom[0]-10);//naik 
    myservo.write(s4, hom[0]); myservo.write(s16, hom[0]); myservo.write(s7, hom[0]);//balik
    myservo.write(s1, hom[0]-30); myservo.write(s13, hom[0]-30); myservo.write(s10, hom[0]-30);//maju
    myservo.write(s2, hom[0]); myservo.write(s14, hom[0]); myservo.write(s11, hom[0]);//turun 
    myservo.write(s5, hom[0]-10); myservo.write(s17, hom[0]-10); myservo.write(s8, hom[0]+10);//naik2
    myservo.write(s1, hom[0]); myservo.write(s13, hom[0]); myservo.write(s10, hom[0]);//balik
    myservo.write(s5, hom[0]); myservo.write(s17, hom[0]); myservo.write(s8, hom[0]);//turun
}
