
int trigPIN1=2;
int echoPIN1=3;
int trigPIN2=4;
int echoPIN2=5;
int trigPIN3=12;
int echoPIN3=13;
int trigPIN4=8;
int echoPIN4=9;
float y;
float x;
void setup() 
{
Serial.begin(9600);
pinMode(trigPIN1,OUTPUT);
pinMode(trigPIN2,OUTPUT);
pinMode(echoPIN2,INPUT);
pinMode(trigPIN3,OUTPUT);
pinMode(echoPIN3,INPUT);
pinMode(trigPIN4,OUTPUT);
pinMode(echoPIN4,INPUT);


pinMode(echoPIN1,INPUT);
 }

void loop() {long distance1,duration1;
  float dfeet1;
 digitalWrite(trigPIN1,HIGH);
 delayMicroseconds(1000);
digitalWrite(trigPIN1,LOW);
duration1=pulseIn(echoPIN1,HIGH);
distance1=(duration1/2)/29.1;
dfeet1=distance1/30.48;
Serial.print("Sensor 1 distance= ");
Serial.print(dfeet1);
Serial.println("feet\n");
delay(1000);

long distance2,duration2;
float dfeet2;
 digitalWrite(trigPIN2,HIGH);
 delayMicroseconds(1000);
digitalWrite(trigPIN2,LOW);
duration2=pulseIn(echoPIN2,HIGH);
distance2=(duration2/2)/29.1;
dfeet2=distance2/30.48;
Serial.print("Sensor 2 distance= ");
Serial.print(dfeet2);
Serial.println("feet\n");
delay(1000);

long distance3,duration3;
float dfeet3;
 digitalWrite(trigPIN3,HIGH);
 delayMicroseconds(1000);
digitalWrite(trigPIN3,LOW);
duration3=pulseIn(echoPIN3,HIGH);
distance3=(duration3/2)/29.1;
dfeet3=distance3/30.48;
Serial.print("Sensor 3 distance= ");
Serial.print(dfeet3);
Serial.println("feet\n");
delay(1000);

long distance4,duration4;
float dfeet4;
 digitalWrite(trigPIN4,HIGH);
 delayMicroseconds(1000);
digitalWrite(trigPIN4,LOW);
duration4=pulseIn(echoPIN4,HIGH);
distance4=(duration4/2)/29.1;
dfeet4=distance4/30.48;
Serial.print("Sensor 4 distance= ");
Serial.print(dfeet4);
Serial.println("feet\n");
delay(1000);
  

}
