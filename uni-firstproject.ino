int led1 = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(3000);
digitalWrite(led1,LOW);
delay(1000);
}
