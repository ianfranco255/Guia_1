int r = 9; 
int g = 10; 
int b = 11;

void setup() {
  pinMode(r, OUTPUT); 
  pinMode(g, OUTPUT); 
  pinMode(b, OUTPUT);
}

void loop() {
  analogWrite(r, 0); 
  analogWrite(g, 80); 
  analogWrite(b, 80); 
  delay(300);
  analogWrite(r, 0); 
  analogWrite(g, 160); 
  analogWrite(b, 160); 
  delay(300);
  analogWrite(r, 0); 
  analogWrite(g, 255); 
  analogWrite(b, 255); 
  delay(300);
  
  analogWrite(r, 80); 
  analogWrite(g, 0); 
  analogWrite(b, 0); 
  delay(300);
  analogWrite(r, 160); 
  analogWrite(g, 0); 
  analogWrite(b, 0); 
  delay(300);
  analogWrite(r, 255); 
  analogWrite(g, 0); 
  analogWrite(b, 0); 
  delay(300);
  
  
  analogWrite(r, 80); 
  analogWrite(g, 80); 
  analogWrite(b, 0); 
  delay(300);
  analogWrite(r, 160); 
  analogWrite(g, 160); 
  analogWrite(b, 0); 
  delay(300);
  analogWrite(r, 255); 
  analogWrite(g, 255); 
  analogWrite(b, 0); 
  delay(300);
}