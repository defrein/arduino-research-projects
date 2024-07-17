// ===================================================
// berisi kode serial monitor, untuk monitoring nilai
// ===================================================

void serial_print(){
  Serial.print(" | DEPAN: ");
  Serial.print(jarak_dpn);
  Serial.print(" BELAKANG: ");
  Serial.print(jarak_blkg);
  Serial.print(" KANAN: ");
  Serial.print(jarak_knn);
  Serial.print(" KIRI: ");
  Serial.print(jarak_kr);

  Serial.print(" | $CMP,");
  Serial.print(bearing);
  Serial.print(",");
  Serial.print(pitch); 
  Serial.print(",");
  Serial.println(roll);
}
