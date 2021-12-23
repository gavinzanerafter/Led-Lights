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
for (int i = -200; i < NUMPIXELS; i += 5) {
  int index1 = (i + 200) / 5;
  int index2 = (i + 100) / 5;
  int index3 = (i) / 5;
  pixels.setPixelColor(i+200, pixels.Color(0,0,0));
  pixels.setPixelColor(i+100, pixels.Color(0,0,0));
  pixels.setPixelColor(i, pixels.Color(0,0,0));
  for (int j = 0; j < 5; j++) {
    pixels.setPixelColor(i+j+200, pixels.Color(colors[index1%3][0],colors[index1%3][1],colors[index1%3][2]));
    pixels.setPixelColor((i +200 - 5 - j), pixels.Color(0,0,0));
  }
  for (int j = 0; j < 5; j++) {
    pixels.setPixelColor(i+j+100, pixels.Color(colors[index2%3][0],colors[index2%3][1],colors[index2%3][2]));
    pixels.setPixelColor((i+ 100 - 5 - j), pixels.Color(0,0,0));
  }
  for (int j = 0; j < 5; j++) {
    pixels.setPixelColor(i+j, pixels.Color(colors[index3%3][0],colors[index3%3][1],colors[index3%3][2]));
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
  delay(DELAY1);
}
for (int j = 0; j < 255; j += 1) {
  for (int i = 0; i < NUMPIXELS; i+= 3) {
    pixels.setPixelColor(i, pixels.Color(0,j,0));
  }
  pixels.show();
  delay(15);
}
delay(3000);
for (int j = 0; j < 255; j += 1) {
  for (int i = 0; i < NUMPIXELS; i+= 3) {
    pixels.setPixelColor(i, pixels.Color(0,255-j,0));
    if (255 - j <= 10) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
    }
  }
  for (int i = 0; i < NUMPIXELS; i+= 3) {
    pixels.setPixelColor(i+1, pixels.Color(j,0,0));
  }
  pixels.show();
  delay(15);
}
delay(3000);
for (int j = 0; j < 255; j += 1) {
  for (int i = 0; i < NUMPIXELS; i+= 3) {
    pixels.setPixelColor(i+1, pixels.Color(255-j,0,0));
    if (255 - j <= 10) {
      pixels.setPixelColor(i+1, pixels.Color(0,0,0));
    }
  }
  pixels.show();
  delay(15);
}

}
