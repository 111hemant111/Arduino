#include<LiquidCrystal.h>
#include <IRremote.h>
int RECV_PIN = 9;          // Output pin of TSOP sensor
IRrecv irrecv(RECV_PIN);
decode_results results;

LiquidCrystal lcd(7,6,5,4,3,2);

#define light1 10
#define light2 11
#define TV 12

int temp=0,temp1;

void setup()
{
  lcd.begin(16,2);
  pinMode(light1,OUTPUT);
  pinMode(light2,OUTPUT);
  pinMode(TV,OUTPUT);
  pinMode(13,OUTPUT);
 
 
    lcd.setCursor(0,0);
  lcd.print("  Home/Office   ");
  lcd.setCursor(0,1);
  lcd.print(" Aplliances ctrl");
  delay(2000);
   lcd.setCursor(0,0);
  lcd.print("Using IR Remote ");
  lcd.setCursor(0,1);
  lcd.print("By Saddam Khan  ");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Engineers Garage");
  delay(2000);
 
  irrecv.enableIRIn(); // Start the receiver
}



void loop()
{
  int i,j,k,l,m;
  lcd.clear();
   while(1)
   {
     lcd.setCursor(0,1);
     lcd.print("System Ready  ");
     delay(100);
   if (irrecv.decode(&results))
   {
        digitalWrite(13, HIGH);
    delay(10);
    digitalWrite(13, LOW);
   
    if((results.value)== 33441975)        // on off red button
     {
       if(i%2==0)
       {
        digitalWrite(TV, LOW);
        digitalWrite(light2, LOW);
        digitalWrite(light1, LOW);
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("ALL OFF   ");
        delay(10);
       }
       else
       {
        digitalWrite(TV, HIGH);
        digitalWrite(light2, HIGH);
        digitalWrite(light1, HIGH);
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("ALL ON   ");
          delay(100);
       }
       i++;
     }
    
    
      if((results.value)== 33444015)    //  key 1
     {
      if(j%2==0)
      {
       digitalWrite(TV, HIGH);
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("TV ON");
       delay(10);
      }
     
      else
      {
        digitalWrite(TV, LOW);
        lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("TV OFF");
       delay(10);
      }
      j++;
     }
  
   if((results.value)== 33478695)     //  key  2
     {
      if(k%2==0)
      {
       digitalWrite(light1, HIGH);
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("LIGHT 1 ON");
       delay(10);
      }
     
      else
      {
        digitalWrite(light1, LOW);
        lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("LIGHT 1 OFF");
       delay(10);
      }
      k++;
     }
    
      if((results.value)== 33486855)  //  key  3
     {
      if(l%2==0)
      {
       digitalWrite(light2, HIGH);
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("LIGHT 2 ON");
       delay(10);
      }
     
      else
      {
        digitalWrite(light2, LOW);
        lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("LIGHT 2 OFF");
       delay(10);
      }
      l++;
     }  
      
irrecv.resume();           // Receive the next value
   }
   }
}
