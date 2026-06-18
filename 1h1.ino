int color = 0;

void setup() {
  pinMode(6, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

  if (digitalRead(6) == LOW) {
    color = color + 1;
    delay(300); 
    
    if (color > 7) { color = 1; }


    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);


    if (color == 1) { digitalWrite(3, HIGH); }
    
    if (color == 2) { digitalWrite(4, HIGH); digitalWrite(5, HIGH); }
    
    if (color == 3) { digitalWrite(4, HIGH); }
    
    if (color == 4) { digitalWrite(3, HIGH); digitalWrite(5, HIGH); }
    
    if (color == 5) { digitalWrite(5, HIGH); } 
    
    if (color == 6) { digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5, HIGH); }
    
    if (color == 7) { digitalWrite(3, HIGH); digitalWrite(4, HIGH); }
  }
}