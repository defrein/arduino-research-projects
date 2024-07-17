// ========================================================
// kode ini dibuat karena nilai kompas (bearing) yang error
// ========================================================

// rumus agar bisa membalikkan bearing ke nilai 0 setelah 359
int normalize_bearing(int bearing) {
  bearing %= 360;
  if (bearing < 0) {
    bearing += 360;
  }
  return bearing;
}

// ini dipanggil HANYA ketika TIDAK TAU orientasi (arah) robot sebelum switch power dinyalakan,
// lebih jelasnya tanya ke pembuat kode
void cek_orientasi() {

  while (jarak_dpn <= JARAK_START && jarak_knn <= JARAK_START && jarak_kr <= JARAK_START && jarak_blkg <= JARAK_START) {
    for (int i = 0; i < 5; i++) {
      nilai_sonar();
      delay(50);
    }
  }
  //Serial.println("SCAN JARAK SELESAI");

  if (jarak_knn >= JARAK_START) {
    orientasi = LAP_ATAS;
    //Serial.println("LAP_ATAS");
  } else if (jarak_dpn >= JARAK_START) {
    orientasi = LAP_KANAN;
    //Serial.println("LAP_KANAN");
  } else if (jarak_kr >= JARAK_START) {
    orientasi = LAP_BAWAH;
    //Serial.println("LAP_BAWAH");
  } else if (jarak_blkg >= JARAK_START) {
    orientasi = LAP_KIRI;
    //Serial.println("LAP_KIRI");
  } else {
    orientasi = TIDAK_ADA_ARAH;
    //Serial.println("TIDAK ADA ARAH");
  }
}


// ini HARUS SELALU dipanggil setelah memanggil fungsi kompas agar bisa memanipulasi nilai raw bearing dari kompas yang error: bearing 0 setiap kali dinyalakan
void kompas_imajinasi() {
  int m = 0;
  switch (orientasi) {
    case LAP_ATAS:
      m = bearing;
      break;
    case LAP_KANAN:
      m = bearing + 90;
      break;
    case LAP_BAWAH:
      m = bearing - 180;
      break;
    case LAP_KIRI:
      m = bearing - 90;
      break;
    case TIDAK_ADA_ARAH:
      m = -1;
      break;
  }
  m = normalize_bearing(m);
  imaginary_bearing = m;
}
