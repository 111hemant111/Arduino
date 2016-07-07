//#include <SoftwareSerial.h>

//SoftwareSerial mySerial(0,1);
void setup()
{
  
  // initialize the led pin as an output.
  pinMode(13, OUTPUT);  
  // start serial port at 9600 bps
  Serial.begin(9600);
  // wait for a while till the serial port is ready
  delay(100);
  Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  
  /*Serial.print("AT+CMGS=");
  Serial.print('"');
  Serial.print("+917799117795");
  Serial.print('"');
  Serial.print('\r');*/
  
  delay(1000);
  Serial.print("THIS IS ARDUINO");
  delay(100);
  Serial.println((char)26);
  delay(1000);
}
 
void loop()
{
    digitalWrite(13, HIGH);       
    delay(1000);                  
    digitalWrite(13, LOW);       
    delay(1000);                
}
