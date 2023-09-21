#include <Adafruit_NeoPixel.h>
#define NUMPIXELS 32
#define PIN 13
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

const int buttonPin = 8;


void setup() {
  pinMode(buttonPin,INPUT);
  strip.begin();
  Serial.begin(9600);
  pinMode(A3,INPUT);
}

//Heisan hopsan
void loop(){

int ButtonState = digitalRead(buttonPin);





}