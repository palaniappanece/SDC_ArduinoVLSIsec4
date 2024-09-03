//c++ code
//
void setup()
{
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int t=digitalRead(3);
  Serial.println(t);
}