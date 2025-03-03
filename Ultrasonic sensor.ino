void setup() 
{
pinMode(13, OUTPUT);
pinMode(11, INPUT);
pinMode(5, OUTPUT);
Serial.begin(9600);
}

void loop() 
{
float time, distance;
digitalWrite(13, LOW); 
delayMicroseconds(2);
digitalWrite(13, HIGH);
delayMicroseconds(10);
digitalWrite(13, LOW);
time= pulseIn(11, HIGH);
distance= (time / 2) * 0.034;
if (distance <= 20)
{
digitalWrite(5, HIGH);
Serial.println(“Object Detected”);
}
else 
{
digitalWrite(5, LOW);
Serial.println(“No Object Detected”);
}
delay(500);
}
