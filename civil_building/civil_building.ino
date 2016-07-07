#include <Servo.h>
Servo lock;

int ledPin = 13; // choose the pin for the LED
int inPin = 7;   // choose the input pin (for a pushbutton)
int val = 0;     // variable for reading the pin status
int pos=0;

void setup() {
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inPin, INPUT);    // declare pushbutton as input
  lock.attach(9);
}

void loop(){
  val = digitalRead(inPin);  // read input value
  if (val == HIGH) 
    {         // check if the input is HIGH (button released)
    digitalWrite(ledPin, LOW);  // turn LED OFF

    for(pos = 120; pos>=30; pos-=1)     // goes from 180 degrees to 0 degrees 
        {                                
        lock.write(pos);                // tell servo to go to position in variable 'pos' 
        delay(15);                       // waits 15ms for the servo to reach the position 
        } 
    } 
  else 
    {
    digitalWrite(ledPin, HIGH);  // turn LED ON

    for(pos = 30; pos <= 120; pos += 1) // goes from 0 degrees to 180 degrees 
        {                                  // in steps of 1 degree 
        lock.write(pos);              // tell servo to go to position in variable 'pos' 
        delay(15);                       // waits 15ms for the servo to reach the position 
        }
    }
}
