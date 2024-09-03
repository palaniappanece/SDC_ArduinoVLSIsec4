#include<Servo.h>
Servo q;
void setup()
{
 q.attach(8);
  
}

void loop()
{
  for(int i=0;i<=180;i++)
  {
    q.write(i);
    delay(15);
  }
  for(int i=180;i>=0;i--)
  {
    q.write(i);
    delay(15);
  }
}