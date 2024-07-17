int bearing;
int imaginary_bearing;
int jarak_start = 45;
String orientasi;

void cek_orientasi(){
  if(jarak_knn >= jarak_start){
    // lap_atas
    orientasi = "lap_atas";
    
  }else if(jarak_dpn >= jarak_start){
    // lap_kanan
    orientasi = "lap_kanan";
  }else if(jarak_kr >= jarak_start){
    // lap_bawah
    orientasi = "lap_bawah";
  }else if(jarak_blkg >= jarak_start){
    // lap_kiri
    orientasi = "lap_kiri";
  }else{
    // tdk ada arah aman
  }
}

void kompas_imajinasi(String orientasi_robot){
  if(orientasi_robot == "lap_atas"){
    imaginary_bearing = bearing + 0;
  }else if(orientasi_robot == "lap_kanan"){
    imaginary_bearing = (bearing + 90) % 360;
    if(m < 0){
      m+=360;
    }
  }else if(orientasi_robot == "lap_bawah"){
    imaginary_bearing = (bearing - 180) % 360;
    if(m < 0){
      m+=360;
    }
  }else if(orientasi_robot == "lap_kiri"){
    imaginary_bearing = (bearing - 90) % 360;
    if(m < 0){
      m+=360;
    }
  }
}
