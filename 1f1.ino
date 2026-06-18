int boton = 5;
int buzzer = 4;

void setup()
{
  pinMode(boton, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  if(digitalRead(boton) == HIGH)
  {
    tone(buzzer, 500);
    delay(200);

    tone(buzzer, 1000);
    delay(200);
  }
  else
  {
    noTone(buzzer);
  }
}