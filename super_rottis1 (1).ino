#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_LEDS 12
#define POT A0
#define BTN 2

Adafruit_NeoPixel anillo(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

int modo = 0;
int vel = 500;
bool btnAnt = HIGH;
unsigned long debounce = 0;

void setup() {
  anillo.begin();
  anillo.setBrightness(40);
  anillo.show();
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  vel = map(analogRead(POT), 0, 1023, 100, 800);

  bool btn = digitalRead(BTN);
  if (btn == LOW && btnAnt == HIGH && millis() - debounce > 250) {
    modo = (modo + 1) % 3;
    apagar();
    debounce = millis();
  }
  btnAnt = btn;

  if (modo == 0) {
    efecto1();
    delay(1000);
  }
  if (modo == 1) {
    efecto2();
    delay(1000);
  }
  if (modo == 2) {
    efecto3();
    delay(1000);
  }
}

void efecto1() {
  uint32_t colores[] = {
    anillo.Color(255,0,0),
    anillo.Color(0,255,0),
    anillo.Color(0,0,255),
    anillo.Color(255,255,0),
    anillo.Color(255,0,255),
    anillo.Color(0,255,255),
    anillo.Color(255,128,0),
    anillo.Color(128,0,255),
    anillo.Color(0,128,255),
    anillo.Color(255,255,255),
    anillo.Color(128,128,0),
    anillo.Color(0,255,128)
  };

  for(int i = 0; i < NUM_LEDS; i++) {
    apagar();
    anillo.setPixelColor(i, colores[i]);
    anillo.show();
    delay(vel);
    if (digitalRead(BTN) == LOW) return;
  }
  apagar();
}

void efecto2() {
  for(int i = 0; i < NUM_LEDS; i++) {
    apagar();
    anillo.setPixelColor(i, anillo.Color(0,0,255));
    anillo.show();
    delay(vel);
    if (digitalRead(BTN) == LOW) return;
  }
  for(int i = NUM_LEDS - 1; i >= 0; i--) {
    apagar();
    anillo.setPixelColor(i, anillo.Color(255,0,0));
    anillo.show();
    delay(vel);
    if (digitalRead(BTN) == LOW) return;
  }
  apagar();
}

void efecto3() {
  uint32_t c1 = anillo.Color(255,0,0);
  uint32_t c2 = anillo.Color(0,0,255);

  for(int i = 0; i < NUM_LEDS; i += 2) {
    anillo.setPixelColor(i, c1);
  }
  anillo.show();
  delay(vel);
  apagar();
  delay(vel);

  for(int i = 1; i < NUM_LEDS; i += 2) {
    anillo.setPixelColor(i, c2);
  }
  anillo.show();
  delay(vel);
  apagar();
  delay(vel);

  c1 = anillo.Color(0,255,0);
  c2 = anillo.Color(255,255,0);
  for(int i = 0; i < NUM_LEDS; i += 2) {
    anillo.setPixelColor(i, c1);
  }
  anillo.show();
  delay(vel);
  apagar();
  delay(vel);
  for(int i = 1; i < NUM_LEDS; i += 2) {
    anillo.setPixelColor(i, c2);
  }
  anillo.show();
  delay(vel);
  apagar();
  delay(vel);
}

void apagar() {
  for(int i = 0; i < NUM_LEDS; i++) {
    anillo.setPixelColor(i, 0);
  }
  anillo.show();
}