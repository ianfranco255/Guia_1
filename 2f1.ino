void setup() 
{
  pinMode(3, OUTPUT);
}

void loop() 
{
  int t = map(analogRead(A0), 0, 1023, 200, 10000);
  digitalWrite(3, HIGH);
  delay(t);
  digitalWrite(3, LOW);
  delay(t);
}