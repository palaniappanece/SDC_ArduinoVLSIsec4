void setup()
{
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int t=analogRead(A0);
  float r=(float)t/1023;
  float temp=(r*500)-50;
  float  fahrenheit=(temp*9/5)+32;
  Serial.println(fahrenheit);
  if(fahrenheit>=99.1){
    Serial.println("fever");
  }else
  {
    Serial.println("normal");
  }
}