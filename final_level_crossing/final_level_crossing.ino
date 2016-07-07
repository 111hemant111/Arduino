/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo myservo1;  // create servo object to control a servo 
Servo myservo2;
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo1.attach(9);  // attaches the servo on pin 9 to the servo object 
  //myservo2.attach(10);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
} 
 
void loop() 
{ 
  int val = analogRead(0);
  if (val>10)
  {
    
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
  for(pos = 30; pos <= 120; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo1.write(pos);              // tell servo to go to position in variable 'pos' 
   // myservo2.write(150-pos);
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  
  delay(3000);
  
  for(pos = 120; pos>=30; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo1.write(pos);              // tell servo to go to position in variable 'pos' 
    // myservo2.write(150-pos);
    delay(20);                       // waits 15ms for the servo to reach the position 
  }
  
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
  
  }
 delay(100); 
} 

