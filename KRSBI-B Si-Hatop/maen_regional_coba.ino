#include "deklarasi.h"
#include "gerak.h"
#include "PID.h"
#include "scan.h"
#include "parsingUtama.h"
#include "tendang.h"


void setup() {
  //Serial.begin(9600);
  setPin();
}

void loop() {
  if (Serial3.available()) {
    cobaa = Serial3.read();
    if (cobaa == 'Z') {
      dia = 1;
      while (dia == 1) {
        // mutar_kanan();
        //delay(2500);
        mutar_kananc();
        delay(1200);
        berhenti();
        delay(100);
        maju_depan();
        delay(3300);
        mutar_kiri();
        delay(2200);
        berhenti();


        //  serong_kanan();

        //delay(2000);
        //berhenti();
        //delay(1000);

        dia = 2;
        break;
      }
      //while ( dia == 2) {
      //berhenti();
      //  }
      while ( dia == 2) {
        data_kamera_depan();
        holder_m();
        aldo = digitalRead(ir1);
        aldos = digitalRead(ir2);
        if ( aldo == 0 && aldos == 0) {
          holder_h();
          berhenti();
          delay(2000);
          mutar_kiri();
          delay(1000);
          berhenti();
          holder_m();
          delay(1000);
          dia = 3;
          break;
        }
      }

      while ( dia == 3) {
        aku = 1;
        while (aku == 1) {
          tendangg();
          delay(100);
          berhenti();
          delay(2000);
          mutar_kiric();
          delay(2000);
          berhenti();
          delay(2000);
          maju_depan();
          delay(5200);
          berhenti();
          delay(2000);
          dia = 4;
          break;
          /* mutar_kanan();
            delay(6000);
            maju_depan();
            delay(3000);
            dia = 4;
            break;

            }
            }*/
        }
      }
      while (dia == 4){
        berhenti();
      }
    }
  }
}
