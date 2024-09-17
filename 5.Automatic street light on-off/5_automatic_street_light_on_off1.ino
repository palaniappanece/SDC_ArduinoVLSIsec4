// C++ code
//
void setup()
{
 
  pinMode(A0,INPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop()
{
  int a=analogRead(A0);
  if(a>=750)
  {
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
  }
  else
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
  }
  
}