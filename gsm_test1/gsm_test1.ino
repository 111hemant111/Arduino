#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);

void setup()
{
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  //delay(1000);
}


void loop()
{
  Serial.println(Serial.available());
  //delay(1000);
  //Serial.println("ready1");
  if (Serial.available()>0)
  {//Serial.println("ready2");
    char a = (char)Serial.read();
    if (a=='s')
    {Serial.println("sending");
      SendMessage();
    }
    else if (a=='r')
    {Serial.println("receiving");
    RecieveMessage();
    }
  }
  //Serial.println(Serial.available());
  /* switch(Serial.read())
  {Serial.println("test1");
    case 's':
      SendMessage();
      break;
    case 'r':
      RecieveMessage();
      break;
  }*/
//Serial.println("test2");
 if (mySerial.available()>0){
   Serial.write(mySerial.read());
   //Serial.println("test3");
 }
}


 void SendMessage()
{ 
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"+917799117795\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println("Hi Hemant");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}


 void RecieveMessage()
{
  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to recieve a live SMS
  delay(1000);
 }
