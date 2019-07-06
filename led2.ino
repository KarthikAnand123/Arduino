int redLED=13;
int switchPin=10;
int greenLED=11;
int yellowLED=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(switchPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(switchPin)==HIGH)
  {
    digitalWrite(redLED,HIGH);
    delay(500);
  }
  if(digitalRead(switchPin)==LOW)
  {
     digitalWrite(redLED,LOW);
      digitalWrite(greenLED,HIGH);
       digitalWrite(yellowLED,HIGH);
  }

}
