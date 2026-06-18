void setup() {
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW);
  for (int f = 600; f < 1000; f++) { tone(5, f); delay(2); }
  
  digitalWrite(3, LOW); 
  digitalWrite(4, HIGH);
  for (int f = 1000; f > 600; f--) { tone(5, f); delay(2); }
}