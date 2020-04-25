int s = A0;
int l = 7;
void setup()
{
  pinMode(l, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int s=analogRead (s);
  Serial.println(s);
  delay(200);
  if (s > 552)
  {
    digitalWrite(l,HIGH);
  }
  else
  {
  digitalWrite(l,LOW);
  }
}
