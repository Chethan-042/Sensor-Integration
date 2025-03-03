void setup()
{
pinMode(A0, INPUT);
Serial.begin(9600);
}
void loop()
{
int step=analogRead(A0);
float temp= step*0.48828125;
Serial.println(temp);
delay(2000);
}
