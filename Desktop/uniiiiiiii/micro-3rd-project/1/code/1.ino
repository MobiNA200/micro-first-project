int pin = 8;
int ledpin = 2;
int buttonstate = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
pinMode(buttonstate, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate = digitalRead(pin);
if (buttonstate == HIGH)
{
  digitalWrite(ledpin , HIGH);
}
else 
{
  digitalWrite(ledpin , LOW);  
}
  }
