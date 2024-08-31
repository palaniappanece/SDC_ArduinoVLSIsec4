// C++ code
//
void setup()
{
  
  pinMode(3,INPUT);
  pinMode(1,OUTPUT);
 
}

void loop()
{
  int a=digitalRead(3);
  if(a==1)
  {
    digitalWrite(1,HIGH);
  }
  else
  {
    digitalWrite(1,LOW);
  }
 
}