//int rs=0;

void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A8,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int l2 = analogRead(A8)>=40?1:0;
  //rs=(PINC&0b0000001);
  Serial.println(analogRead(A8));
  if (l2==1)
  //if(rs==0b00000001)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(100);    
    }
}
