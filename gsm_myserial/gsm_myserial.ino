#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1);

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  // initialize the led pin as an output.
  pinMode(13, OUTPUT);  
  // start serial port at 9600 bps
  //Serial.begin(9600);
  // wait for a while till the serial port is ready
  delay(100);
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  
  mySerial.println("AT+CMGS=\"+917799117795\"\r");
  delay(1000);
  mySerial.print("THIS IS ARDUINO");
  delay(100);
  mySerial.println((char)26);
  delay(1000);
}
 
void loop()
{
    digitalWrite(13, HIGH);       
    delay(1000);                  
    digitalWrite(13, LOW);       
    delay(1000);                
}
