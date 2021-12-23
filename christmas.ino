#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 300
#define DELAY1     15
#define DELAY2     75
int colors[3][3] = {{255,0,0},{255,255,255},{0,255,0}};

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
for (int i = 0; i < NUMPIXELS; i ++) {
  int index = i / 5;
  pixels.setPixelColor(i, pixels.Color(0,0,0));
  pixels.setPixelColor(i, pixels.Color(colors[index%3][0],colors[index%3][1],colors[index%3][2]));
  pixels.setPixelColor((i - 20), pixels.Color(0,0,0));
  pixels.show();
  delay(DELAY1);
}
for(int i = NUMPIXELS - 21; i < NUMPIXELS; i++) {
  pixels.setPixelColor(i, pixels.Color(0,0,0));
  pixels.show();
  delay(DELAY1);
}
delay(DELAY2);
for (int i = 0; i < NUMPIXELS; i += 5) {
  int index = i / 5;
  pixels.setPixelColor(i, pixels.Color(0,0,0));
  for (int j = 0; j < 5; j++) {
    pixels.setPixelColor(i+j, pixels.Color(colors[index%3][0],colors[index%3][1],colors[index%3][2]));
    pixels.setPixelColor((i - 5 - j), pixels.Color(0,0,0));
  }

  pixels.show();
  delay(DELAY2);
}
for(int i = NUMPIXELS - 21; i < NUMPIXELS; i++) {
  pixels.setPixelColor(i, pixels.Color(0,0,0));
}
pixels.show();
for (int i = 0; i < NUMPIXELS; i += 3) {
  pixels.setPixelColor(i, pixels.Color(0,255,0));
  pixels.show();
  delay(DELAY1);
}
for(int i = 0; i < NUMPIXELS; i+=3) {
  pixels.setPixelColor(i, pixels.Color(255,0,0));
  pixels.show();
  delay(DELAY1);
}
for(int i = 0; i < NUMPIXELS; i+=3) {
  pixels.setPixelColor(i, pixels.Color(0,0,0));
  pixels.show();
  delay(25);
}
}
