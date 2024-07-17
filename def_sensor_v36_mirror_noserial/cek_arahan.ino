// ============================================================================
// berisi fungsi-fungsi cek arah, dan ada fungsi tambahan untuk rintangan start
// ============================================================================

void cek_arah(bool is_retak, int max_looping) { // untuk rintangan jalan retak (setelah k1) dan jalan miring
  int arah_benar = 0;
  int left_bearing = 85;
  int right_bearing = 95;
  int looping = 0; // variabel untuk menyimpan jumlah looping saat ini

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
    //Serial.print("bearing = ");
    //Serial.print(bearing);
    //Serial.print(" | imajinasi = ");
    //Serial.print(imaginary_bearing);
    //Serial.print(" | orientasi : ");
    //Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
      //Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 5) {
      //Serial.println("DEAD ZONE KIRI");
      // serong kanan
      is_retak ? serong_kanan_tinggi() : serong_kanan();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 5) {
      //Serial.println("DEAD ZONE KANAN");
      // serong kiri
      is_retak ? serong_kiri_tinggi() : serong_kiri();
    }
    else if (imaginary_bearing < left_bearing) {
      //Serial.println("cek arah [belok kanan]");
      is_retak ? belok_kanan_for_new() : belok_kanan_turun();
    } else if (imaginary_bearing > right_bearing) {
      //Serial.println("cek arah [belok kiri]");
      is_retak ? belok_kiri_for_new() : belok_kiri_turun();
    }

    // update variabel looping
    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    // JIKA BUTTON POWER DITEKAN, HENTIKAN LOOP
    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_batu_koral(int max_looping) { // untuk rintangan jalan batu koral (yang ada safe zone 1)
  int arah_benar = 0;
  int left_bearing = 85;
  int right_bearing = 95;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
    //Serial.print("bearing = ");
    //Serial.print(bearing);
    //Serial.print(" | imajinasi = ");
    //Serial.print(imaginary_bearing);
    //Serial.print(" | orientasi : ");
    //Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
      //Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 5) {
      //Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 5) {
      //Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri();
    }
    else if (imaginary_bearing < left_bearing) {
      //Serial.println("cek arah [belok kanan]");
      belok_kanan_tinggi();
    } else if (imaginary_bearing > right_bearing) {
      //Serial.println("cek arah [belok kiri]");
      belok_kiri_kelereng();
    }

    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_biasa(int max_looping) { // untuk rintangan batu di bawah
  int arah_benar = 0;
  int left_bearing = 85;
  int right_bearing = 95;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
    //Serial.print("bearing = ");
    //Serial.print(bearing);
    //Serial.print(" | imajinasi = ");
    //Serial.print(imaginary_bearing);
    //Serial.print(" | orientasi : ");
    //Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
      //Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 5) {
      //Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan_tinggi();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 5) {
      //Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri_tinggi();
    }
    else if (imaginary_bearing < left_bearing) {
      //Serial.println("cek arah [belok kanan]");
      belok_kanan_new();
    } else if (imaginary_bearing > right_bearing) {
      //Serial.println("cek arah [belok kiri]");
      belok_kiri_new();
    }

    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_start(int max_looping) { // untuk rintangan start
  int arah_benar = 0;
  int left_bearing = 83;
  int right_bearing = 97;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
    //Serial.print("bearing = ");
    //Serial.print(bearing);
    //Serial.print(" | imajinasi = ");
    //Serial.print(imaginary_bearing);
    //Serial.print(" | orientasi : ");
    //Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
      //Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing) {
      //Serial.println("cek arah [serong kanan]");
      serong_kanan();
    } else if (imaginary_bearing > right_bearing) {
      //Serial.println("cek arah [serong kiri]");
      serong_kiri();
    }

    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}



void cek_arah_biasa_atas(int max_looping) { // untuk rintangan kelereng
  int arah_benar = 0;
  int left_bearing = 175;
  int right_bearing = 185;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas();
    kompas_imajinasi();
//    Serial.print("bearing = ");
//    Serial.print(bearing);
//    Serial.print(" | imajinasi = ");
//    Serial.print(imaginary_bearing);
//    Serial.print(" | orientasi : ");
//    Serial.println(orientasi);

    if ((imaginary_bearing >= left_bearing && imaginary_bearing <= right_bearing)) {
//      Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 8) { // krg dari 353 dan lebih dari 350
//      Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan_tinggi();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 8) { // lebih dari 7 dan krg dari 10
//      Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri_tinggi();
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >=0) {
//      Serial.println("cek arah [belok kanan]");
      belok_kanan_tinggi();
      arah_benar = 0;
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <=359 ) {
//      Serial.println("cek arah [belok kiri]");
      belok_kiri_tinggi();
      arah_benar = 0;
    }

    looping++;
    if (looping > max_looping) {
//      Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_tangga_mirror(int max_looping) {
  int arah_benar = 0;
  int left_bearing = 170;
  int right_bearing = 185;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas();
    kompas_imajinasi();
//    Serial.print("bearing = ");
//    Serial.print(bearing);
//    Serial.print(" | imajinasi = ");
//    Serial.print(imaginary_bearing);
//    Serial.print(" | orientasi : ");
//    Serial.println(orientasi);

    if ((imaginary_bearing >= left_bearing && imaginary_bearing <= right_bearing)) {
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing) {
//      Serial.println("serong kanan for di tangga");
      serong_kanan_for_tangga();

    } else if (imaginary_bearing > right_bearing) {
//      Serial.println("serong kiri for di tangga");
      serong_kiri_for_tangga();
    }

    looping++;
    if (looping > max_looping) {
//      Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}


void cek_arah_empty(int max_looping) { // untuk rintangan empty
  int arah_benar = 0;
  int left_bearing = 263;
  int right_bearing = 277;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
    //Serial.print("bearing = ");
    //Serial.print(bearing);
    //Serial.print(" | imajinasi = ");
    //Serial.print(imaginary_bearing);
    //Serial.print(" | orientasi : ");
    //Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
      //Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 5) {
      //Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 5) {
      //Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri();
    }
    else if (imaginary_bearing < left_bearing && imaginary_bearing >= 90) {
      //Serial.println("cek arah [belok kanan]");
      belok_kanan_new();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= 359 || imaginary_bearing >= 0 && imaginary_bearing < 90) {
      //Serial.println("cek arah [belok kiri]");
      belok_kiri_new();
    }

    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_empty_serong_knn_mir(int max_looping) { // untuk rintangan empty, sengaja serong kanan dikit supaya gak kena dinding K2
  int arah_benar = 0;
  int left_bearing = 245;
  int right_bearing = 255;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
//    Serial.print("bearing = ");
//    Serial.print(bearing);
//    Serial.print(" | imajinasi = ");
//    Serial.print(imaginary_bearing);
//    Serial.print(" | orientasi : ");
//    Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
//      Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 8) {
//      Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 8) {
//      Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri();
    }
    else if (imaginary_bearing < left_bearing) {
//      Serial.println("cek arah [belok kanan]");
      belok_kanan_new();
    } else if (imaginary_bearing > right_bearing) {
//      Serial.println("cek arah [belok kiri]");
      belok_kiri_new();
    }

    looping++;
    if (looping > max_looping) {
//      Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_retak_korban(int max_looping) { // untuk rintangan retak setelah empty
  int arah_benar = 0;
  int left_bearing = 263;
  int right_bearing = 277;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
//    Serial.print("bearing = ");
//    Serial.print(bearing);
//    Serial.print(" | imajinasi = ");
//    Serial.print(imaginary_bearing);
//    Serial.print(" | orientasi : ");
//    Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
//      Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 8) {
//      Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan_tinggi();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 8) {
//      Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri_tinggi();
    }
    else if (imaginary_bearing < left_bearing) {
//      Serial.println("cek arah [belok kanan]");
      belok_kanan_for_new();
    } else if (imaginary_bearing > right_bearing) {
//      Serial.println("cek arah [belok kiri]");
      belok_kiri_for_new();
    }

    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}


void cek_arah_lap_bawah(bool is_tinggi, int max_looping) { // untuk rintangan empty
  int arah_benar = 0;
  int left_bearing = 355;
  int right_bearing = 5;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas();
    kompas_imajinasi();
//    Serial.print("bearing = ");
//    Serial.print(bearing);
//    Serial.print(" | imajinasi = ");
//    Serial.print(imaginary_bearing);
//    Serial.print(" | orientasi : ");
//    Serial.println(orientasi);

    if ((imaginary_bearing >= left_bearing && imaginary_bearing <= 359) || (imaginary_bearing >= 0 && imaginary_bearing <= right_bearing)) {
//      Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 8) { // krg dari 353 dan lebih dari 350
//      Serial.println("DEAD ZONE KIRI");
      // serong kanan
      is_tinggi ? serong_kanan_tinggi() : serong_kanan();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 8) { // lebih dari 7 dan krg dari 10
//      Serial.println("DEAD ZONE KANAN");
      // serong kiri
      is_tinggi ? serong_kiri_tinggi() : serong_kiri();
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= 180) {
//      Serial.println("cek arah [belok kanan]");
      is_tinggi ? belok_kanan_tinggi() : belok_kanan_new();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing < 180) {
//      Serial.println("cek arah [belok kiri]");
      is_tinggi ? belok_kiri_tinggi() : belok_kiri_new();
    }

    looping++;
    if (looping > max_looping) {
//      Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_sempit(bool is_tinggi, int max_looping) { // untuk rintangan empty
  int arah_benar = 0;
  int left_bearing = 350;
  int right_bearing = 10;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas();
    kompas_imajinasi();
//    Serial.print("bearing = ");
//    Serial.print(bearing);
//    Serial.print(" | imajinasi = ");
//    Serial.print(imaginary_bearing);
//    Serial.print(" | orientasi : ");
//    Serial.println(orientasi);

    if ((imaginary_bearing >= left_bearing && imaginary_bearing <= 359) || (imaginary_bearing >= 0 && imaginary_bearing <= right_bearing)) {
//      Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= 180) {
//      Serial.println("cek arah [serong kanan]");
      is_tinggi ? serong_kanan_tinggi() : serong_kanan();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing < 180) {
//      Serial.println("cek arah [serong kiri]");
      is_tinggi ? serong_kiri_tinggi() : serong_kiri();
    }

    looping++;
    if (looping > max_looping) {
//      Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void cek_arah_batu_serong( int max_looping) {
  int arah_benar = 0;
  int left_bearing = 20;
  int right_bearing = 30;
  int looping = 0;

  while (!arah_benar && isButtonPressed) {
    nilai_kompas_retak();
    kompas_imajinasi();
    //Serial.print("bearing = ");
    //Serial.print(bearing);
    //Serial.print(" | imajinasi = ");
    //Serial.print(imaginary_bearing);
    //Serial.print(" | orientasi : ");
    //Serial.println(orientasi);
    if (imaginary_bearing <= right_bearing && imaginary_bearing >= left_bearing) {
      //Serial.println("cek arah [OK]");
      arah_benar = 1;
    } else if (imaginary_bearing < left_bearing && imaginary_bearing >= left_bearing - 5) {
      //Serial.println("DEAD ZONE KIRI");
      // serong kanan
      serong_kanan_tinggi();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= right_bearing + 5) {
      //Serial.println("DEAD ZONE KANAN");
      // serong kiri
      serong_kiri_tinggi();
    }
    else if ((imaginary_bearing < left_bearing && imaginary_bearing >= 0) || (imaginary_bearing > 180 && imaginary_bearing <= 359)) {
      //Serial.println("cek arah [belok kanan]");
      belok_kanan_tinggi();
    } else if (imaginary_bearing > right_bearing && imaginary_bearing <= 180) {
      //Serial.println("cek arah [belok kiri]");
      belok_kiri_tinggi();
    }

    looping++;
    if (looping > max_looping) {
      //Serial.println("Maksimum looping tercapai");
      break;
    }

    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}


// -------------------- THE END OF CEK ARAH ------------------- //

// salah satu langkah untuk ambil korban 1
void cek_korban1() { // maju dan mundur, biar pas di samping korban
  int maju_dikit_korban = 0;

  for (int i = 0; i < 2; i++) {
    us_belakang();
  }
  //Serial.print("jarak belakang = ");
  //Serial.println(jarak_blkg);
  while (!maju_dikit_korban) {

    for (int i = 0; i < 2; i++) {
      us_belakang();
    }
    //Serial.print("jarak belakang");
    //Serial.println(jarak_blkg);
    if (jarak_blkg >= 47 && jarak_blkg <= 50) {
      home1();
      maju_dikit_korban = 1;
    } else if (jarak_blkg < 47) {
      maju_pendek();
      //Serial.println("maju pendek");
    } else if (jarak_blkg > 50) {
      mundur_pendek();
      //Serial.println("mundur pendek");
    }
  }
}

// langkah setelah ambil korban, balik ke tengah lintasan agar pas di tengah saat jalan retak
void geser_tengah_start() {
  int geser_tengah = 0;
//  for (int i = 0; i < 2; i++) {
//    us_kanan();
//  }

  while (!geser_tengah) {
    for (int i = 0; i < 2; i++) {
      us_kiri();
    }
    if (jarak_kr >= 19 && jarak_kr <= 21) {
      home1();
      geser_tengah = 1;
    } else if (jarak_kr < 19) {
      geser_kanan();
    } else if (jarak_kr > 21) {
      geser_kiri();
    }
  }

}
