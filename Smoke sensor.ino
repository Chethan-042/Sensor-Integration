void setup() 
{
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
Serial.begin(9600);
Serial.println("Gas sensor is warming");
delay(20000);
}
void loop() {
int sensorValue= analogRead(A0);
if (sensorValue>300) 
{
digitalWrite(2,HIGH);//LED on
Serial.println(“Fire Alert”);
}
else 
{
digitalWrite(2,LOW);//LED off
Serial.println(“No Fire”);
}
delay(1000);
}
