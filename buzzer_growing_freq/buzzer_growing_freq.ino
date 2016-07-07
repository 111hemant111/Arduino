//extern int k=1;
void setup() {

pinMode(12,OUTPUT);  // put your setup code here, to run once:

}

void loop() {

  // put your main code here, to run repeatedly:
 // PORTB=0b00000001;
  tone(12,500,1000);
  delay(1000);
  noTone(12);
  tone(12,1000,1000);
  delay(1000);
  noTone(12);
  tone(12,1500,1000);
  delay(1000);
  noTone(12);
  tone(12,2000,1000);
  delay(1000);
  noTone(12);
  tone(12,2500,1000);
  delay(1000);
  noTone(12);
  tone(12,3000,1000);
  delay(1000);
  noTone(12);
  tone(12,3500,1000);
  delay(1000);
  noTone(12);
  tone(12,4000,1000);
  delay(1000);
  noTone(12);

}
