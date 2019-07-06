const int redLed=13;
const int yellowLED=12;
const int greenLED=11;
int i,j,k;
int rednum;
int yellownum;
int greennum;
void setup() {
  // put your setup code here, to run once:
pinMode(redLed,OUTPUT);
pinMode(yellowLED,OUTPUT);
pinMode(greenLED,OUTPUT);
 Serial.begin(115200);
 Serial.println("How many times do you want red led to blink? ");
 while(Serial.available()==0){};
 rednum=Serial.parseInt();
 
 Serial.println("How many times do you want yellow led to blink? ");
 while(Serial.available()==0){};
 yellownum=Serial.parseInt();
 
 Serial.println("How many times do you want green led to blink? ");
 while(Serial.available()==0){};
 greennum=Serial.parseInt();
 
}

void loop() {
 
  for(i=1;i<=rednum;i++)
  {
    digitalWrite(redLed,HIGH);
     delay(250);
    digitalWrite(redLed,LOW);
    delay(250);
  }
  for(j=1;j<=yellownum;j++)
  {
    digitalWrite(yellowLED,HIGH);
     delay(250);
    digitalWrite(yellowLED,LOW);
    delay(250);
}
 for(k=1;k<=greennum;k++)
 {
    digitalWrite(greenLED,HIGH);
    delay(250);
    digitalWrite(greenLED,LOW);
    delay(250);
 }
    
  }

