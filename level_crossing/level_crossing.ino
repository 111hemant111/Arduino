
#include <Servo.h> 
 
Servo gpcet;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
int pos = 0, sense=0;    // variable to store the servo position 
 
void setup() 
{ 
  pinMode(13,OUTPUT);
  //Serial.begin(9600);
  gpcet.attach(9);  // attaches the servo on pin 9 to the servo object 
  //DDRF=0b00000000;
} 
 
void loop() 
{ 
  int val = analogRead(0);
  //Serial.println(val);
  if(val>5)
      {
        digitalWrite(13,HIGH);
  //sense=(PINF&0b00000001);
  //if(sense==0b00000001)
     for(pos = 120; pos>=30; pos-=1)     // goes from 180 degrees to 0 degrees 
    {                                
      gpcet.write(pos);                // tell servo to go to position in variable 'pos' 
      delay(15);                       // waits 15ms for the servo to reach the position 
    } 
      for(pos = 30; pos <= 120; pos += 1) // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      gpcet.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(15);                       // waits 15ms for the servo to reach the position 
     
  }
 
  
 
}
else
      digitalWrite(13,LOW);
}
