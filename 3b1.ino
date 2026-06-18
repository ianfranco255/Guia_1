int on = 0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);
}

void loop() 
{
  if (digitalRead(2) == LOW) { delay(300); on = !on; }

  if (on) 
  {
    int v = analogRead(A0);
    
    int r = map(v, 0, 341, 255, 0); 
    
    if(r<0) r=0;
    
    int g = map(v, 342, 682, 0, 255); 
    
    if(v<342 || v>682) g=0;
    
    int b = map(v, 683, 1023, 0, 255);
    if(v<683) b=0;
    
    analogWrite(3, r); 
    analogWrite(5, g); 
    analogWrite(6, b);
  } else 
  {
    analogWrite(3, 0); 
    analogWrite(5, 0); 
    analogWrite(6, 0);
  }
}