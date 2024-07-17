int bearing = 0;
int jarak_start = 45;
int imaginary_bearing;
String orientasi;

void cek_orientasi() {
  if(jarak_knn >= jarak_start) {
    // lap_atas
    orientasi = "lap_atas";
    
  } else if(jarak_dpn >= jarak_start) {
    // lap_kanan
    orientasi = "lap_kanan";
  } else if(jarak_kr >= jarak_start) {
    // lap_bawah
    orientasi = "lap_bawah";
  } else if(jarak_blkg >= jarak_start) {
    // lap_kiri
    orientasi = "lap_kiri";
  } else {
    // tidak ada arah aman
    orientasi = "";
  }
}

void kompas_imajinasi() {
  int m = 0;
  if(orientasi == "lap_atas") {
    m = bearing;
  } else if(orientasi == "lap_kanan") {
    m = (bearing + 90) % 360;
  } else if(orientasi == "lap_bawah") {
    m = (bearing - 180) % 360;
  } else if(orientasi == "lap_kiri") {
    m = (bearing - 90) % 360;
  } else {
    // tidak ada arah aman, beri nilai default
    m = -1;
  }
  if(m < 0) {
    m += 360;
  }
  // Gunakan variabel imaginary_bearing yang sudah dideklarasikan sebelumnya
  imaginary_bearing = m;
}
