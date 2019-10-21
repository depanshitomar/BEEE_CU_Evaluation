void setup()
{
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
}
void loop()
{
  digitalWrite(9,LOW);
  delayMicroseconds(2);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  long t=pulseIn(10,HIGH);
  int dis=0.017*t;
  Serial.print("distance");
  Serial.println(dis);
  if(dis<50)
  {
    digitalWrite(6,HIGH);
    delay(100);
    digitalWrite(6,LOW);
    delay(100);
  }
}
