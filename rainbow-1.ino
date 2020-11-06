#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 50
#define DELAY1     25
#define DELAY2     50
int colors[5][3] = {{255,0,0},{0,255,0},{0,255,255},{0,0,255},{255,0,255}};

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
  for (int j = 0; j < NUMPIXELS;j++) {
    pixels.setPixelColor(j, pixels.Color(255, 0, 0));
  }
  pixels.show();
//  i += 1
//  // put your main code here, to run repeatedly:
//  pixels.setPixelColor(i, pixels.Color(0, 150, 0));
//  pixels.show();
//  delay(500);
  int r = 0;
  int g = 0;
  int b = 0;
  for (int j = 0; j < NUMPIXELS;j++) {
    pixels.setPixelColor(j, pixels.Color(255, 0, 0));
  }
  pixels.show();
  for (int i = 0; i < 255; i++) {
    g++;
    for (int j = 0; j < NUMPIXELS;j++) {
      pixels.setPixelColor(j, pixels.Color(255, g, 0));
    }
    pixels.show();
    delay(5);
  }
  for (int i = 0; i < 255; i++) {
    r--;
    for (int j = 0; j < NUMPIXELS;j++) {
      pixels.setPixelColor(j, pixels.Color(r, 255, 0));
    }
    pixels.show();
    delay(5);
  }
  for (int i = 0; i < 255; i++) {
    b++;
    for (int j = 0; j < NUMPIXELS;j++) {
      pixels.setPixelColor(j, pixels.Color(0, 255, b));
    }
    pixels.show();
    delay(5);
  }
  for (int i = 0; i < 255; i++) {
    g--;
    for (int j = 0; j < NUMPIXELS;j++) {
      pixels.setPixelColor(j, pixels.Color(0, g, 255));
    }
    pixels.show();
    delay(5);
  }
  for (int i = 0; i < 255; i++) {
    r++;
    for (int j = 0; j < NUMPIXELS;j++) {
      pixels.setPixelColor(j, pixels.Color(r, 0, 255));
    }
    pixels.show();
    delay(5);
  }
  for (int i = 0; i < 255; i++) {
    b--;
    for (int j = 0; j < NUMPIXELS;j++) {
      pixels.setPixelColor(j, pixels.Color(255, 0, b));
    }
    pixels.show();
    delay(5);
  }
}
