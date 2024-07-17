#include "Wire.h"
#include "CMPS03.h"

CMPS03 cmps03;


int arah_depan = 45;
int arah_kanan = 126;
int arah_belakang = 233;
int arah_kiri = 320;
int toleransi = 5

int tepi[4][2] = {
  {arah_depan - toleransi, arah_depan + toleransi},
  {arah_kanan - toleransi, arah_kanan + toleransi},
  {arah_belakang - toleransi, arah_belakang + toleransi},
  {arah_kiri - toleransi, arah_kiri + toleransi}
};
const int DEPAN = 1;
const int KANAN = 2;
const int BELAKANG = 3;
const int KIRI = 4;

int cmps;

void setup()
{
  Serial.begin(115200);
  Wire.begin();
}

void nilai_kompas(){
  cmps = map(cmps03.read(), 0,3599,0,359);
}

void menuju_arah(int inputArah){
  switch(inputArah){
    case KANAN:
      //statement
      
      break;
    default:
      break;
  }
}

void loop()
{
  int cmps = map(cmps03.read(), 0,3599,0,359);

  while(true){
    
  }
  Serial.println(cmps);
  delay(1000);
}
