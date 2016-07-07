void setup() {
  // put your setup code here, to run once:
pinMode(10,INPUT);
Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(10));
  delay(100);
  // put your main code here, to run repeatedly:

}
