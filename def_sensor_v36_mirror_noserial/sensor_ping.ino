// =================================================================
// berisi kode untuk sensor ultrasonik, menggunakan library newping
// =================================================================

void nilai_sonar(){
  delay(50);
  jarak_dpn = sonar_dpn.ping_cm();
  delay(50);
  jarak_knn = sonar_knn.ping_cm();
  delay(50);
  jarak_blkg = sonar_blkg.ping_cm();
  delay(50);
  jarak_kr = sonar_kr.ping_cm();
}

void us_kanan(){
  delay(50);
  jarak_knn = sonar_knn.ping_cm();
  
}

void us_kiri(){
  delay(50);
  jarak_kr = sonar_kr.ping_cm();
}

void us_depan(){
  delay(50);
  jarak_dpn = sonar_dpn.ping_cm();
}

void us_belakang(){
  delay(50);
  jarak_blkg = sonar_blkg.ping_cm();
}
