void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  analogWrite(3, 0);
  analogWrite(4, 64);
  analogWrite(5, 128);
  analogWrite(6, 192);
  analogWrite(7, 255);
}