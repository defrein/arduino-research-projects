void sensor_us_depan(){
  digitalWrite(trigdpn, LOW);
  delayMicroseconds(5);
  digitalWrite(trigdpn, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigdpn, LOW);
  duration = pulseIn(echodpn, HIGH);
  x1 = duration/58;
  a5 = a4;
  a4 = a3;
  a3 = a2;
  a2 = a1;
  a1 = x1;
  jarak_dpn = x1; // (a1+a2+a3+a4+a5)/5;
}
