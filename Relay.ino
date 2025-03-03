void setup() 
{
pinMode(8,OUTPUT);
}
 
void loop() 
{
digitalWrite(8,LOW); // bulb ON
delay(5000);
digitalWrite(8,HIGH); // bulb OFF
delay(8000);
}
