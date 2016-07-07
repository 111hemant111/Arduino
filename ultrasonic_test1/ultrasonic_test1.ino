
/****************Smart blind stick****************/
/******Made by Ayesha, Harshitha, Bhargavi, Jahnavi and Hemant*****/

#include <NewPing.h>

unsigned long echo = 0;
int ultrasignalout = 12; // Ultrasonic signal output pin...***TRIG***
int ultrasignalin = 13; // Utltrasonic signal input pin...***ECHO***
unsigned long ultrasoundValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ultrasignalout,OUTPUT);
  pinMode(ultrasignalin,INPUT);
  pinMode(2,OUTPUT);
}
void(* resetFunc) (void) = 0; // To bring reset function into existence
unsigned long ping()
{ digitalWrite(ultrasignalin,LOW);
  //pinMode(ultraSignalout, OUTPUT); // Switch signalpin to output
  digitalWrite(ultrasignalout, LOW); // Send low pulse 
  delayMicroseconds(3); // Wait for 2 microseconds
  digitalWrite(ultrasignalout, HIGH); // Send high pulse
  delayMicroseconds(5); // Wait for 5 microseconds
  digitalWrite(ultrasignalout, LOW); // Holdoff
  //pinMode(ultraSoundSignal, INPUT); // Switch signalpin to input
  digitalWrite(ultrasignalin, HIGH); // Turn on pullup resistor
  
  echo = pulseIn(ultrasignalin, HIGH); //Listen for echo
  if(echo!=0)
    ultrasoundValue = (echo / 58.138); //convert to CM then to inches
  else
    resetFunc();
  return ultrasoundValue;
}

void loop()
{
  int x = 0;
  x = ping();
  Serial.println(x);
  if (x>30)
    {
      digitalWrite(2,HIGH);
      delay(250);
      digitalWrite(2,LOW);
      delay(250);
    }
  delay(250); //delay 1/4 seconds.
}
