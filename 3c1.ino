int activo = 0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);
}

void loop() 
{
  if (digitalRead(2) == LOW) 
  { 
    delay(300); activo = 1; 
  }

  if (activo) 
  {
    for (int p = 3; p <= 7; p++) 
    {
      int t = analogRead(A0);
      digitalWrite(p, HIGH);
      delay(t);
      digitalWrite(p, LOW);
      delay(t);
    }
  }
}