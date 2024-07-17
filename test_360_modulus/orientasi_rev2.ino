const int JARAK_START = 45;
enum Orientasi {LAP_ATAS, LAP_KANAN, LAP_BAWAH, LAP_KIRI, TIDAK_ADA_ARAH};
Orientasi orientasi = TIDAK_ADA_ARAH;

int normalize_bearing(int bearing) {
  bearing %= 360;
  if (bearing < 0) {
    bearing += 360;
  }
  return bearing;
}

void cek_orientasi() {
  if (jarak_knn >= JARAK_START) {
    orientasi = LAP_ATAS;
  } else if (jarak_dpn >= JARAK_START) {
    orientasi = LAP_KANAN;
  } else if (jarak_kr >= JARAK_START) {
    orientasi = LAP_BAWAH;
  } else if (jarak_blkg >= JARAK_START) {
    orientasi = LAP_KIRI;
  } else {
    orientasi = TIDAK_ADA_ARAH;
  }
}

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
