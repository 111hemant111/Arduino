

/**************************LOCKING SYSTEM****************************/
/******************Developed by Hemant and Girish********************/


void setup() {
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("AT+CMGF=1");
  
}

void loop() {
  int val0 = analogRead(0);
  delay(100);
  int val1 = analogRead(1);
  //Serial.println(val);
  //delay(300);
  
  if (val0>10||val1>10)
    { 
      Serial.println("AT+CMGS=\"+917799117795\"\r");
      delay(1000);          
      Serial.println("Hemant, someone is robbing your home...ALERT..!!!!!");
      delay(100);
      Serial.println((char)26);
    }
  delay(100);
}
