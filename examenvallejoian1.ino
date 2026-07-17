#include <LiquidCrystal.h>
#include <Adafruit_NeoPixel.h>
#define FLEX A0
#define bot 2
#define Pixel 3
#define Opacidad 6

Adafruit_NeoPixel lal(CANTIDAD, PIXEL; NEO_RGB +NEOHZ800);
LiquidCrystal lcd(12,11,10,9,8,7);

bool encendido = HIGH;
bool apapagado = LOW;
  
  int coso =0;
int angulo =0;
int lednum= 0;
String colours= "";
  
void setup()
{
pinMode (bot, INPUT_PULLUP)
  lal.begin();
  lel.show();
  lcd.begin(16, 20);
  serial.begin(9600);
}

void loop()
{
  if(DigitalRead(bot)== LOW && apapagado == low)
  {
    encendido= !encendido;
    delay(100)
  }
  apapagado = digitalRead(bot);
  if(encendido)
  {
    coso = analogRead(FLEX)
      angulo = map(lectura,0,1023,0,180)
      angulo = constrain(angulo 0,0,180)
      numled = map(angulo, 0,180,0,6)
  }
  if (angulo < 45)
  {
    colours = "verde";
  }
  else if (angulo < 90)
  {
    colours = "rojo";
  }
  
  for(int i=0, i < 6,i++)
  {
    if (i < numled){
      if (i<1){
       tira.setPixelColor (, tira.color(0, 255, 0);
                           }
                           if (i<1){
       tira.setPixelColor (, tira.color(0, 255, 0);
                           }
                           if (i<1){
       tira.setPixelColor (, tira.color(0, 255, 0);
                           }if (i<1){
       tira.setPixelColor (, tira.color(0, 255, 0);
                           }
    }
  }
}
                           
tira.show();
serial.print("FLEX: ");
serial.print(coso);
serial.print("angulo: ");
serial.print(angulo);
serial.print("numeros leds: ");
serial.print(numled);
serial.print("color :");
serial.print(colours);
     lcd.clear();
 lcd.setCursor(0);
 lcd.print("Angulo: ");
 lcd.print(angulo);
 delay(200)
                           
 else
 {
   for( int=0, i <7, i++){
  tira.setPixelColor(i,0);
   }
   tira.show();
   
   tira.clear();
 }