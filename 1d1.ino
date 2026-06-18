int led1 = 3;
int led2 = 4;
int buzzer = 5;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() 
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  tone(buzzer, 440); 
  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  tone(buzzer, 330); 
  delay(500);
}