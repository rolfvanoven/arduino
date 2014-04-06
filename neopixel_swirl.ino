#include <Adafruit_NeoPixel.h>

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags

Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, 6, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.


int rood = 100;
int groen = 0;
int blauw=100;
int k = 0;


void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}




void loop() {
  for (int p=0; p<16; p++) {
      
      if(k<300) {
       k = k + 1;
      } else {
        k = 0;
      }
      
      
        
        
        
      if(k < 100) {
      rood = 100 - k;
      groen = k;
      blauw = 0;
    } else if(k < 200) {
      rood = 0;
      groen = 200 - k;
      blauw = k -100;
    } else {
      rood = k - 200;
      groen = 0;
      blauw = 300 - k;
    }


   
   
   
        
      
      strip.setPixelColor(p, strip.Color(rood, groen, blauw));
      strip.setPixelColor(p-1, strip.Color(rood * 0.8, groen * 0.8, blauw*0.8));
      strip.setPixelColor(p-2, strip.Color(rood * 0.6, groen * 0.6, blauw*0.6));
      strip.setPixelColor(p-3, strip.Color(rood * 0.4, groen * 0.4, blauw*0.4));
      strip.setPixelColor(p-4, strip.Color(rood * 0.2, groen * 0.2, blauw*0.2));
      strip.setPixelColor(p-5, 0);
      strip.setPixelColor(p+15, strip.Color(rood * 0.8, groen * 0.8, blauw*0.8));
      strip.setPixelColor(p+14, strip.Color(rood * 0.6, groen * 0.6, blauw*0.6));
      strip.setPixelColor(p+13, strip.Color(rood * 0.4, groen * 0.4, blauw*0.4));
      strip.setPixelColor(p+12, strip.Color(rood * 0.2, groen * 0.2, blauw*0.2));
      strip.setPixelColor(p+11, 0);




    strip.show();
    delay(25);
    
    
    
    }

}
