#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'#','0','*'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad
int i=0;
int key1,key2,key3,key4;
int a;
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}

void loop(){
  //while(i==0)
  while(1)
  {
  //if (key1!=0)
    key1=keypad.getKey()-48;
    if(key1!=-48)
     break;
  }

  while(1)
  {
  //if (key1!=0)
    key2=keypad.getKey()-48;
    if(key2!=-48)
     break;
  }

  while(1)
  {
  //if (key1!=0)
    key3=keypad.getKey()-48;
    if(key3!=-48)
     break;
  }

  while(1)
  {
  //if (key1!=0)
    key4=keypad.getKey()-48;
    if(key4!=-48)
     break;
  }

  a=1000*key1+100*key2+10*key3+key4;

  Serial.println(a);
}
