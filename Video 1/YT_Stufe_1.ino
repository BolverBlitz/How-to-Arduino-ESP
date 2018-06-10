//Genutze Bibliotheken
#include <Adafruit_NeoPixel.h>

//Genutze Variablen
int button = D2;
bool status = false;

//RGB Strip Setup
#define PIN 2
#define LEDS 50
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  pinMode(button, INPUT_PULLUP);  
  strip.begin();
}


void loop() {
 //Button in Seriel
 status = digitalRead(button);   
 Serial.println(status);

//Button mit LED

if(status == true) {
   strip.setPixelColor(0,0,255,0);
 }else{
   strip.setPixelColor(0,0,0,0);
 }
 strip.show(); 

 
}


