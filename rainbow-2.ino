#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 300
#define DELAY1     25
#define DELAY2     50
int colors[5][3] = {{255,0,0},{0,255,0},{0,255,255},{0,0,255},{255,0,255}};
int r = 255;
int g = 0;
int b = 0;
int rgb = 1;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  for (int j = 0; j < NUMPIXELS;j++) {
    pixels.setPixelColor(j, pixels.Color(255, 0, 0));
  }
  pixels.show();
}

void loop() {
  if(rgb == 1)  {
    g++;
    if (g > 254) {
      rgb++;
    }
  }
  if(rgb == 2)  {
    r--;
    if (r < 1) {
      rgb++;
    }
  }
  if(rgb == 3) {
    b++;
    if (b > 254) {
      rgb++;
    }
  }
  if(rgb == 4) {
    g--;
    if (g < 1) {
      rgb++;
    }
  }
  if(rgb == 5) {
    r++;
    if (r > 254) {
      rgb++;
    }
  }
  if(rgb == 6) {
    b--;
    if (b < 1) {
      rgb = 1;
    }
  }
  for (int j = 0; j < NUMPIXELS;j++) {
    pixels.setPixelColor(j, pixels.Color(r, g, b));
  }
  pixels.show();
  delay(5);
}
