#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 300
#define DELAY1     25
#define DELAY2     50
int colors[3][3] = {{255,0,255},{255,0,0},{0,0,255}};
int amt = 5;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
}

void loop() {
//  i += 1
//  // put your main code here, to run repeatedly:
//  pixels.setPixelColor(i, pixels.Color(0, 150, 0));
//  pixels.show();
//  delay(500);
  for (int i = 0; i < NUMPIXELS / 2; i++) {
    pixels.setPixelColor(i, pixels.Color(0,0,200));
    pixels.setPixelColor((NUMPIXELS - 1) - i, pixels.Color(0,0,200));
    pixels.setPixelColor(i - amt, pixels.Color(0,0,0));
    pixels.setPixelColor(((NUMPIXELS - 1) - i) + amt, pixels.Color(0,0,0));
    pixels.show();
    delay(40);
  }
  for (int i = NUMPIXELS / 2; i > 0; i--) {
    pixels.setPixelColor(i, pixels.Color(0,0,200));
    pixels.setPixelColor((NUMPIXELS - 1) - i, pixels.Color(0,0,200));
    pixels.setPixelColor(i + amt, pixels.Color(0,0,0));
    pixels.setPixelColor(((NUMPIXELS - 1) - i) - amt, pixels.Color(0,0,0));
    pixels.show();
    delay(40);
  }
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(200,0,0));
  }
  pixels.show();
  delay(200);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(200,200,0));
  }
  pixels.show();
  delay(200);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0,200,0));
  }
  pixels.show();
  delay(200);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0,200,200));
  }
  pixels.show();
  delay(200);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0,0,200));
  }
  pixels.show();
  delay(200);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(200,0,200));
  }
  pixels.show();
  delay(200);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(200,0,0));
  }
  pixels.show();
  for (int i = NUMPIXELS / 2; i > 0; i--) {
    pixels.setPixelColor(i, pixels.Color(200,0,0));
    pixels.setPixelColor((NUMPIXELS - 1) - i, pixels.Color(200,0,0));
    pixels.setPixelColor(i + amt, pixels.Color(0,0,0));
    pixels.setPixelColor(((NUMPIXELS - 1) - i) - amt, pixels.Color(0,0,0));
    pixels.show();
    delay(40);
  }
  
  
}
