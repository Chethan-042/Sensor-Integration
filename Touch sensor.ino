void setup()
{
pinMode(11, INPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}
void loop()
{
int touchValue=digitalRead(11);
if (touchValue==0)
{
digitalWrite(2,LOW);//LED off
Serial.println("Touch Not Detected");
} 
if (touchValue==1)
{
digitalWrite(2,HIGH);//LED on
Serial.println("Touch Detected");
} 
delay(3000); 
}
