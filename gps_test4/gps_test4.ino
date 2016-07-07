#include <SoftwareSerial.h>
#include <TinyGPS.h>

long lat,lon;

SoftwareSerial gpsSerial(2,3);
TinyGPS gps;

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(4800);
}

void loop() {
  //Serial.print("check1");
   // delay(500);
  while(gpsSerial.available())
  { Serial.print("check2");
      delay(500);
    if (gps.encode(gpsSerial.read()))
    { Serial.print("check3");
      delay(500);
      gps.get_position(&lat,&lon);
      Serial.print("POSITION: ");
      Serial.println("Lat: ");Serial.print(lat);Serial.print(" ");
      Serial.print("Long: ");Serial.print(lon);
    }
  }
}
