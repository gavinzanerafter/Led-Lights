#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 300
#define DELAY1     25
#define DELAY2     50
int colors[5][3] = {{255,0,0},{0,255,0},{0,255,255},{0,0,255},{255,0,255}};
int rgb = 1;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
}

void loop() {
  for (int i = 0; i < NUMPIXELS; i++) {
    SetXYColor(i % 16, floor(i / 16), 0, 0, 255);
    pixels.show();
    delay(50);
  }
}

void SetXYColor(int x, int y, int r, int g, int b) {
  if (y % 2 == 0) {
    pixels.setPixelColor(x + y * 16, pixels.Color(r, g, b));
  } else {
    pixels.setPixelColor(16 - x + y * 16, pixels.Color(r, g, b));
  }
}
