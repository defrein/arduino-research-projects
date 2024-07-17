 void serial_print(){
  Serial.print(" | $CMP,");
  Serial.print(bearing);
  Serial.print(",");
  Serial.print(pitch); 
  Serial.print(",");
  Serial.println(roll);
 }
