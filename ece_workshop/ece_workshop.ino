char a;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0)
  {
    a=Serial.read();
  }
  if (a=='0')
  digitalWrite(12,HIGH);
  else 
  digitalWrite(12,LOW);
  // put your main code here, to run repeatedly:

}
