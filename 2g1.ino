void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  int s = map(analogRead(A0), 0, 1023, 1, 255);
  analogWrite(3, s);
}