int boton = 7;
int contador = 0;

void setup() {
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(boton, INPUT_PULLUP); 
}

void loop() {
  if (digitalRead(boton) == LOW) {
    
    contador = contador + 1; 
    delay(300);


    if (contador > 3) {
      contador = 0;
    }


    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);


    if (contador == 1) {
      digitalWrite(3, HIGH);
    }
    if (contador == 2) {
      digitalWrite(5, HIGH);
    }
    if (contador == 3) {
      digitalWrite(6, HIGH);
    }
  }
}