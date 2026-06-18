void setup() 
{
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
}

void loop() 
{
  int v = analogRead(A0);
  
  analogWrite(3, 255); 
  analogWrite(5, 0); 
  analogWrite(6, 255);
  analogWrite(9, 255); 
  analogWrite(10, 255); 
  analogWrite(11, 0);
  delay(v);
  
  analogWrite(3, 0); 
  analogWrite(5, 0); 
  analogWrite(6, 0);
  analogWrite(9, 0); 
  analogWrite(10, 0); 
  analogWrite(11, 0);
  delay(v);
}