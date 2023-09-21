#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 32
#define PIN 13
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


int potPin =A3;
int potVal = 0;

void setup() {
  strip.begin();
  Serial.begin(9600);
  pinMode(A3,INPUT);
}


void loop(){

potVal = analogRead(A3);

Serial.println(potVal);



int c1 = random(0,255);
int c2 = random(0,255);
int c3 = random(0,255);

for(int k = 0; k < 32; k++)
{
strip.setPixelColor(k, strip.Color(c1, c2, c3));
  strip.show();
  delay(10);

  if (k == 32) 
  {
    k = 0;
  }

}


}