// ========================================================================
// berisi fungsi-fungsi untuk melewati rintangan sesuai lapangan KRSRI 2023
// ========================================================================

void lap_start() { // dari start (menghadap ke salah satu dinding), keluar home, ambil korban 1, hingga maju sebelum jalan retak
  int start_done = 0;
  while (!start_done && isButtonPressed) {
    int step_maju;
    nilai_kompas();
    kompas_imajinasi();
    switch (imaginary_bearing) {
      case 0:
        if (pitch == 0 && roll == 0) {
          //Serial.println("[PLAN B]");
        }
        else {
          belok_kanan_new();
        }
        break;
      case 1 ... 74:
        belok_kanan_new();
        break;

      case 75 ... 82:
        serong_kanan();
        break;
      case 83 ... 97:
        home1();
        if (orientasi == LAP_ATAS) {
          step_maju = 10;
        } else if (orientasi == LAP_BAWAH) {
          step_maju = 9;
        } else {
          step_maju = 10;
        }
        for (int i = 0; i < step_maju; i++) {
          maju_ok ();

          // tiap dua kali step cek arah
          if (step_maju % 2 == i % 2) {
            cek_arah_start(3);
          }
        }
        cek_korban1();
        cek_arah_start(2);
        korban_1fleksibel();
        cek_arah_start(3);
        geser_tengah_start();

        // maju dikit dulu
        for (int i = 0; i < 4; i++) {
          maju_ok();
          if (i == 2) { // step terakhir cek arah
            cek_arah_start(3);
          }
        }
        start_done = 1;
        break;
      case 98 ... 105:
        serong_kiri();
        break;
      case 106 ... 269:
        belok_kiri_new();
        break;
      case 270 ... 359:
        belok_kanan_new();
        break;
      default:
        //Serial.println("SKIP");
        break;
    }
    //    delay(100);

    // JIKA BUTTON POWER DITEKAN, HENTIKAN LOOP
    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}


void rintangan_jalan_retak() {
  int jln_retak = 0;
  int iter_step = 5;

  int counter_retak = 0;

  while (!jln_retak && isButtonPressed) {
    for (int i = 0; i < iter_step; i++) {
      if(counter_retak < 2){
        jalan_retak_23juni_tinggi();
      }else{
        jalan_retak_depan();
      }
      kuncisrv4();
      nilai_kompas_retak();
      // gak perlu kompas imajinasi, soalnya yang dipakai cuma pitch
      if (pitch >= 7) {
        jln_retak = 1;
        home1();
        break;
      }
    }
    if (jln_retak == 0) {
      cek_arah(true, 3);

    }

    counter_retak++;
    // JIKA BUTTON POWER DITEKAN, HENTIKAN LOOP
    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void rintangan_maju_turun() {
  int r_turun = 0;
  int iter_step = 3;
  for (int i = 0; i < 8; i++) {
//    jalan_turun();
    jalan_turun_depan();
    if ((i + 1) % 3 == 0) {
      cek_arah(false, 5);
    }
  }
  while (!r_turun && isButtonPressed) {
    for (int i = 0; i < iter_step; i++) {
      // turun tapi ada batu di lintasan
      jalan_retak_baru();
      kuncisrv4();

      nilai_kompas_retak();
      // gak perlu kompas imajinasi, soalnya yang dipakai cuma pitch
      if (pitch <= 4) { // mulai normal, pitch berkurang
        // keterangan: pitch normal (lantai datar) = 0 (22/06/23)
        r_turun = 1;
        home1();
        break;
      }
    }
    if (r_turun == 0) {
      cek_arah(true, 3);
    }

    // JIKA BUTTON POWER DITEKAN, HENTIKAN LOOP
    state = digitalRead(power_btn);
    if (state == HIGH && isButtonPressed) {
      isButtonPressed = false;
      break;
    }
  }
}

void rintangan_batu_bawah() { // batu bawah sampai belok kiri dan maju dikit
  // maju di koral pakai step dan cek jarak jika sudah step ke 4
  for (int i = 0; i < 8; i++) {
    if ((i + 1) >= 4) {
      home2();
      for (int i = 0; i < 3; i++) {
        nilai_sonar();
      }
      home2_balik();
      if (jarak_dpn < 20) {
        break;
      }
      else {
        if (jarak_dpn <= 25) {
          jalan_retak_baru();
        } else {
          for (int i = 0; i < 2; i++) {
            jalan_retak_baru();
          }
        }
        kuncisrv4();
        cek_arah_batu_koral(3);
      }
    } else {
      //Serial.println("jalan di batu koral");
      for (int i = 0; i < 2; i++) {
        jalan_retak_baru();
      }
      kuncisrv4();
      cek_arah_batu_koral(3);
    }
  }

  cek_arah_batu_koral(3);
  //Serial.println("TURUNKAN KORBAN");
  korban_1drop();

  // setelah korban turun, maju dikit
  for (int i = 0; i < 4; i++) {
    if ((i + 1) >= 2) {
      for (int i = 0; i < 3; i++) {
        nilai_sonar();
      }
      if (jarak_dpn < 15) {
        home1();
        break;
      } else {
        for (int i = 0; i < 2; i++) {
          jalan_retak();
        }
      }
    } else {
      jalan_retak();
    }
  }


  // belok kanan
  int belok_kanan_koral = 0;
  while (!belok_kanan_koral) {
    nilai_kompas_retak();
    kompas_imajinasi();
    if (imaginary_bearing >= 173 && imaginary_bearing <= 187) {
      home1();
      belok_kanan_koral = 1;
    }
    else if (imaginary_bearing > 187 && imaginary_bearing <= 190) {
      // serong kiri
      serong_kiri_tinggi();
    }
    else if (imaginary_bearing < 173 && imaginary_bearing >= 170) {
      // serong kanan
      serong_kanan_tinggi();
    }
    else if (imaginary_bearing > 190 && imaginary_bearing <= 359) {
      belok_kiri_tinggi();
    } else if (imaginary_bearing < 170 && imaginary_bearing >= 0) {
      belok_kanan_tinggi();
    }
  }

  cek_arah_biasa_atas(3);


  // cek jarak kanan, jika lebih dari 18 geser kanan lebar
  int geser_ke_tengah = 0;
  int counter_geser_tgh = 0;
  while (!geser_ke_tengah && counter_geser_tgh < 4) {
    home2();
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    home2_balik();
    if (jarak_kr <= 18 && jarak_kr >= 15) {
      geser_ke_tengah = 1;
    } else if (jarak_kr > 18) {
      geser_kiri_tinggi_1();
      cek_arah_biasa_atas(3);
    } else if (jarak_kr < 15) {
      home1();
      geser_kanan_tinggi_2();
      cek_arah_biasa_atas(3);
    }
    counter_geser_tgh++;
  }
  // maju 3 step
  for (int i = 0; i < 3; i++) {
    jalan_retak_baru();
  }
  cek_arah_biasa_atas(3);
}

void rintangan_kelereng() {
  // 3 kali step kelereng, cek arah per step
  for (int i = 0; i < 15; i++) {
    jalan_retak_baru_cepat();
    if ((i + 1) % 2 == 0) {
      // cek jarak depan/belakang
      cek_arah_biasa_atas(3);
      home2();
      for (int i = 0; i < 2; i++) { // perulangan scan jarak
        nilai_sonar();
      }
      home2_balik();
      if ((jarak_blkg >= 50 && jarak_blkg <= 60) || (jarak_dpn >= 40 && jarak_dpn <= 50) ) {
        home1();
        break;
      }
    }
  }

  // ambil korban 2
  // cek jarak kiri
  for (int i = 0; i < 3; i++) { // perulangan scan jarak
    nilai_sonar();
  }

  if (jarak_kr >= 20) {
    serong_kanan_tinggi();
    korban_2dkt();
    serong_kiri_tinggi();
  } else {
    serong_kanan_tinggi();
    korban_2jauh();
    serong_kiri_tinggi();
  }

  // jalan di kelereng
  for (int i = 0; i < 20; i++) {
    jalan_retak_baru_cepat();

    if ((i + 1) >= 6) { // step ke dua
      if ((i + 1) % 3 == 0) {
        cek_arah_biasa_atas(3);
        home2();
        for (int i = 0; i < 2; i++) { // perulangan scan jarak
          nilai_sonar();
        }
        home2_balik();
        if (jarak_dpn < 20) {

          break;
        }
      }
    } else if ((i + 1) <= 6) {
      if ((i + 1) % 3 == 0) {
        cek_arah_biasa_atas(3);
      }
    }


  }
  // letakkan korban 2
  korban_2drop();
  // maju dikit lagi
  for (int i = 0; i < 4; i++) {
    jalan_retak_baru_cepat();

    if ((i + 1) % 3 == 0) {
      cek_arah_biasa_atas(3);
      for (int i = 0; i < 2; i++) { // perulangan scan jarak
        nilai_sonar();
      }
      if (jarak_dpn < 10) {
        break;
      }
    }

  }
  // belok kanan
  int belok_kanan_kelerengs = 0;
  while (!belok_kanan_kelerengs) {
    nilai_kompas_retak();
    kompas_imajinasi();
    if (imaginary_bearing >= 260 && imaginary_bearing <= 280) {
      home1();
      belok_kanan_kelerengs = 1;
    } else if (imaginary_bearing >= 280 && imaginary_bearing <= 283) {
      serong_kiri();
    }
    else if (imaginary_bearing >= 257 && imaginary_bearing <= 260) {
      serong_kanan();
    }
    else if (imaginary_bearing < 260 && imaginary_bearing >= 90) {
      belok_kanan_tinggi();
    }
    else if (imaginary_bearing < 90 && imaginary_bearing >= 0) {
      belok_kiri_kelereng();
    } else if (imaginary_bearing > 283 && imaginary_bearing <= 359) {
      belok_kiri_kelereng();
    }
  }
}


void rintangan_empty() {
  for (int i = 0; i < 16; i++) {
    if (i <= 10) {
      jalan_retak_baru_cepat();
    } else {
      maju_ok();
    }
    if ((i + 1) % 3 == 0) {
      cek_arah_empty_serong_knn_mir(3);
    }
  }


  // cek arah
  cek_arah_empty(3);

  // maju dikit
  for (int i = 0; i < 1; i++) {
    maju_ok();
  }
  cek_arah_empty(3);

  // kalo sudah, geser kiri
  int geser_empty = 0;
  int counter_geser = 0;
  while (!geser_empty && counter_geser < 3) {
    //    home2();
    for (int i = 0; i < 2; i++) { // perulangan scan jarak
      nilai_sonar();
    }
    if (jarak_knn <= 17 && jarak_kr < 45) {
      // kena, maju dikit dulu
      for (int i = 0; i < 1; i++) {
        maju_ok_no_delay();
      }
    } else if (jarak_knn <= 25 && jarak_kr > 30) {
      geser_empty = 1;
    } else {
      for (int i = 0; i < 2; i++) {
        geser_kanan_tinggi_2();
      }
      counter_geser++;
    }
  }

  //belok kanan empty
  int belok_kiri_empty = 0;
  while (!belok_kiri_empty) {
    nilai_kompas_retak();
    kompas_imajinasi();
    if (imaginary_bearing >= 173 && imaginary_bearing <= 187) {
      home1();
      belok_kiri_empty = 1;
    }
    else if (imaginary_bearing > 187 && imaginary_bearing <= 190) {
      // serong kiri
      serong_kiri();
    }
    else if (imaginary_bearing < 173 && imaginary_bearing >= 170) {
      // serong kanan
      serong_kanan();
    }
    else if (imaginary_bearing > 190 && imaginary_bearing <= 359) {
      belok_kiri_new();
    } else if (imaginary_bearing < 170 && imaginary_bearing >= 0 ) {
      belok_kanan_new();
    }
  }
}

void retak_k3_k4_go2() {
  int geser_go = 0;
  while (!geser_go) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    if (jarak_knn <= 15) {
      geser_go = 1;
    }
    else if (jarak_knn <= 25) {
      for (int i = 0; i < 2; i++) {
        geser_kanan_retak_bawah();
      }
      cek_arah_biasa_atas(3);
    }
    else {
      for (int i = 0; i < 5; i++) {
        geser_kanan_retak_bawah();
      }
      cek_arah_biasa_atas(3);
    }
  }

  int maju_ke_depan = 0;
  while (!maju_ke_depan) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }

    if (jarak_dpn <= 10) {
      maju_ke_depan = 1;
    } else {
      for (int i = 0; i < 2; i++) {
        jalan_retak_baru_cepat();
      }
      cek_arah_biasa_atas(3);
    }
  }
}

void rintang_maju_tangga() { // sampai belok
  // geser kiri aja dulu pokoknya,sampai roll tertentu, perhatikan jarak depan dan belakang
  int geser_kanan_dbatu = 0;
  while (!geser_kanan_dbatu) {
    nilai_kompas_retak(); // gak pakai kompas imajinasi soalnya yg dipakai cuma roll
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    // kalau dapat roll tertentu, keluar
    if (roll > 25) { // roll normal = 3
      geser_kanan_dbatu = 1;
    }

    else if (jarak_blkg <= 5 || jarak_dpn >= 15) {
      for (int i = 0; i < 1; i++) {
        jalan_retak_baru_cepat();
      }
    }
    else {
      for (int i = 0; i < 2; i++) {
         geser_kanan_tangga_bawah();
      }
    }
    nilai_kompas_retak();
    if (!geser_kanan_dbatu && roll < 15 ) {
      cek_arah_biasa_atas(3);
    }
    //else if (!geser_kiri_dbatu && roll <= -15) {
    //      cek_arah_tangga_normal(1);
    //    }
  }

  // ubah ke mode geser kiri tengah 1
  int geser_kanan_tgh = 0;
//  home9();
  while (!geser_kanan_tgh) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    if (jarak_kr >= 70) {
      geser_kanan_tgh = 1;
    }

    else if (jarak_kr < 20) {
      if (jarak_blkg <= 8) {
        for (int i = 0; i < 1; i++) {
          jalan_maju_tangga3();
        }
      } else {
        for (int i = 0; i < 3; i++) {
          geser_kanan_tangga_tengah1();
        }
        if (!geser_kanan_tgh) {
          cek_arah_tangga_mirror(1);
        }
      }
    }
    else if (jarak_kr >= 20) {
      if (jarak_blkg <= 5) {
        for (int i = 0; i < 1; i++) {
          jalan_maju_tangga3();
        }
      } else {
        for (int i = 0; i < 3; i++) {
          geser_kanan_tangga_tengah1();
        }
        if (!geser_kanan_tgh) {
          cek_arah_tangga_mirror(1);
        }
      }
    }
    else {
      for (int i = 0; i < 3; i++) {
        geser_kanan_tangga_tengah1();
      }
      if (!geser_kanan_tgh) {
        cek_arah_tangga_mirror(1);
      }
    }

  }

  // ubah ke geser tangga tengah 2
  // pakai jarak
  int geser_kanan_tgh2 = 0;
  while (!geser_kanan_tgh2) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    if (jarak_kr > 90) {
      geser_kanan_tgh2 = 1;
    }

    else if (jarak_blkg <= 5) {
      for (int i = 0; i < 1; i++) {
        jalan_maju_tangga3();
      }

    }
    else {
      for (int i = 0; i < 3; i++) {
        geser_kanan_tangga_tengah2();
      }
    }
    if (!geser_kanan_tgh2) {
      cek_arah_tangga_mirror(1);
    }
  }

  // kalo udah di ujung atas, ubah lagi ke geser kiri bawah
  int geser_kanan_atas = 0;
  while (!geser_kanan_atas) { // sampai roll jadi sedikit normal roll > -5
    nilai_kompas();
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    // geser lagi sampai sensor kiri dapat jarak ...
    if (roll >= 15) {
      if (jarak_knn <= 23 && jarak_dpn <= 15) {
        geser_kanan_atas = 1;
      }
      else if (jarak_dpn > 15) {
        jalan_retak_baru_cepat();
      }
      else if (jarak_kr > 23) {
        geser_kanan_tangga_bawah();
      }
      if (!geser_kanan_atas) {
        cek_arah_biasa_atas(3);
      }

    }

    else if (jarak_blkg <= 5) {
      for (int i = 0; i < 1; i++) {
        jalan_maju_tangga();
      }

    }
    else {
      for (int i = 0; i < 2; i++) {
        geser_kanan_tangga_bawah();
      }
      if (!geser_kanan_atas) {
        cek_arah_tangga_mirror(1);
      }
    }
  }

  // belok kiri (265 - 275)
  int belok_batu_atas = 0;
  while (!belok_batu_atas) {
    nilai_kompas_retak();
    kompas_imajinasi();
    if (imaginary_bearing >= 260 && imaginary_bearing <= 280) {
      home1();
      belok_batu_atas = 1;
    } else if (imaginary_bearing >= 280 && imaginary_bearing <= 283) {
      serong_kiri_tinggi();
    }
    else if (imaginary_bearing >= 257 && imaginary_bearing <= 260) {
      serong_kanan_tinggi();
    }
    else if (imaginary_bearing < 260 && imaginary_bearing >= 90) {
      belok_kanan_tinggi();
    }
    else if (imaginary_bearing < 90 && imaginary_bearing >= 0) {
      belok_kiri_tinggi();
    } else if (imaginary_bearing > 283 && imaginary_bearing <= 359) {
      belok_kiri_tinggi();
    }
  }
}

void rintang_k5_atas() {
  // pastikan kanan dan depan jarak oke
  for (int i = 0; i < 2; i++) {
    jalan_retak_baru_cepat();
  }
  for (int i = 0; i < 2; i++) {
    geser_kiri_tinggi_1();
  }
  int ratakan_tgh_korban = 0;
  int counter_rata = 0;
  while (!ratakan_tgh_korban) {

    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }

    if (jarak_dpn < 20 && jarak_kr < 20 ) {
      ratakan_tgh_korban = 1;
    } else if (jarak_dpn >= 20) {
      for (int i = 0; i < 2; i++) {
        jalan_retak_baru_cepat();
      }
    } else if (jarak_kr >= 18) {
      geser_kanan();
    }
    if (!ratakan_tgh_korban && counter_rata >= 3) {
      cek_arah_retak_korban(3);
    }
    counter_rata++;
  }

  // drop k4
  //  korban_4drop();
  // ambil k5
  korban_5();

  // belok kiri
  int belok_kanan_batu = 0;
  while (!belok_kanan_batu) {
    nilai_kompas_retak();
    kompas_imajinasi();
    if ((imaginary_bearing >= 353 && imaginary_bearing <= 359) ||  (imaginary_bearing <= 7 && imaginary_bearing >= 0)) {
      home1();
      belok_kanan_batu = 1;
    } else if (imaginary_bearing >= 8 && imaginary_bearing <= 12) {
      serong_kiri();
    }
    else if (imaginary_bearing >= 348 && imaginary_bearing <= 352) {
      serong_kanan();
    }
    else if (imaginary_bearing < 348 && imaginary_bearing > 180) {
      belok_kanan_tinggi();
    }
    else if (imaginary_bearing <= 180 && imaginary_bearing > 12 ) {
      belok_kiri_kelereng();
    }
  }

  cek_arah_lap_bawah(true, 3);
  // pastikan jarak lagi, supaya bisa di tengah sebelum asuk R11 (jalan sempit)
  // jarak kanan: 38-42
  int ratakan_tgh_sempit = 0;
  while (!ratakan_tgh_sempit) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }
    if (jarak_kr <= 42 && jarak_kr <= 38) {
      ratakan_tgh_sempit = 1;
    } else if (jarak_kr > 42) {
      geser_kiri_tinggi_1();
    } else if (jarak_kr < 38) {
      geser_kanan_tinggi_2();
    }
    // cek arah 175-185
    cek_arah_lap_bawah(true, 3);
  }


}

void rintang_sempit() {
  int keluar_batu_kelereng = 0;
  while (!keluar_batu_kelereng) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }

    if (jarak_blkg >= 40) {
      keluar_batu_kelereng = 1;
    } else if (jarak_blkg >= 15 && jarak_blkg <= 30) {
      if (jarak_kr >= 39 && jarak_kr <= 43) {
        for (int i = 0; i < 2; i++) {
          jalan_retak_baru();
        }
        kuncisrv4();
      } else if (jarak_kr < 39) {
        for (int i = 0; i < 2; i++) {
          geser_kanan_sempit_mirror();
        }
      } else if (jarak_kr > 43) {
        for (int i = 0; i < 2; i++) {
          geser_kiri_sempit_mirror();
        }
      }
      cek_arah_sempit(true, 3);
    } else {
      for (int i = 0; i < 2; i++) {
        jalan_retak_baru();
      }
      kuncisrv4();
      cek_arah_sempit(true, 3);
    }
  }
  // di jalan sempit ini, maju aja sampai sensor depan belakang dapat jarak ...
  int jalan_di_sempit = 0;
  while (!jalan_di_sempit) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }

    if (jarak_dpn <= 5 || jarak_blkg >= 75) {
      jalan_di_sempit = 1;
    } else {
      for (int i = 0; i < 3; i++) {
        jalan_retak_baru();
      }
      kuncisrv4();
      cek_arah_sempit(false, 3);
    }
  }

  int geser_sf5 = 0;
  while (!geser_sf5) {
    for (int i = 0; i < 2; i++) {
      nilai_sonar();
    }

    if (jarak_knn > 30) {
      geser_sf5 = 1;
    } else {
      for (int i = 0; i < 3; i++) {
        geser_kiri();
      }
    }
  }
  cek_arah_sempit(false, 3);

  korban_5drop();
}
