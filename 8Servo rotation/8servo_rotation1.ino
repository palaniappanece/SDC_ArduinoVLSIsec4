#include<Servo.h>
Servo s1;
void setup()
{
  s1.attach(8);
} 

void loop()
{
  s1.write(90);
  delay(1000);
  s1.write(180);
  delay(1000);

}