// C++ code
//
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}

void loop()
{
 digitalWrite(3,LOW);
 delayMicroseconds(2);
 digitalWrite(3,HIGH);
 delayMicroseconds(10);
 digitalWrite(3,LOW);
 long duration=pulseIn(2,HIGH);
 int distance=0.034*duration/2;
 Serial.print(distance);
 Serial.println("cm");
 
}