#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 300
#define DELAY1     25
#define DELAY2     50
int colors[5][3] = {{255,0,0},{0,255,0},{0,255,255},{0,0,255},{255,0,255}};

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
for (int i = 0; i < NUMPIXELS - 3; i += 4) {
  int index = i % 5;
  pixels.setPixelColor(i, pixels.Color(colors[index][0],colors[index][1],colors[index][2]));
  pixels.show();
  delay(DELAY1);
}
pixels.setPixelColor(0, pixels.Color(255,255,0));
pixels.show();
delay(200);
for (int i = 0; i < NUMPIXELS; i++) {
  pixels.setPixelColor(i - 1, pixels.Color(0,0,0));
  pixels.setPixelColor(i, pixels.Color(255,255,0));
  pixels.show();
  delay(DELAY2);
}
for (int i = 0; i < NUMPIXELS; i++) {
  pixels.setPixelColor((NUMPIXELS - i) + 1, pixels.Color(0,0,0));
  pixels.setPixelColor(NUMPIXELS - i, pixels.Color(255,255,0));
  pixels.show();
  delay(DELAY2);
}
}
