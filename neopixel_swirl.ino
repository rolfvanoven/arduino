#include <Adafruit_NeoPixel.h>

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags

Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, 6, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

/*
// brightness hier (1-255)
int brightness = 255;

// snelheid hier (1-25?:
int snelheid = 5;

//draairichting (1 = tegen de klok, -1 = met de klok);
int draairichting = 1;
*/


/*
int rood = 0;
int groen = 0;
int blauw=0;
*/


int k = 0;
//int h = brightness;
int s = 40;
int r = 0;
int g = 0;
int b = 0;
//int d = draairichting;

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off
  
  //voor debugging
//  Serial.begin(9600);
}




void loop() {
  for (int p = 15; p > -1; p--) {
      
      if(k < 768) {
       k = k + 1;
      } else {
        k = 0;
      }
      
      
        
        
        
      if(k < 256) {
      r = 256 - k;
      g = k;
      b = 0;
    } else if(k < 512) {
      r = 0;
      g = 512 - k;
      b = k -256;
    } else {
      r = k - 512;
      g = 0;
      b = 768 - k;
    }
    
 
      
      strip.setPixelColor(p, strip.Color(r, g, b));
      strip.setPixelColor(p+1, strip.Color(r * 0.9, g * 0.9, b * 0.9));
      strip.setPixelColor(p+2, strip.Color(r * 0.8, g * 0.8, b * 0.8));
      strip.setPixelColor(p+3, strip.Color(r * 0.7, g * 0.7, b * 0.7));
      strip.setPixelColor(p+4, strip.Color(r * 0.6, g * 0.6, b * 0.6));
      strip.setPixelColor(p+5, strip.Color(r * 0.5, g * 0.5, b * 0.5));
      strip.setPixelColor(p+6, strip.Color(r * 0.4, g * 0.4, b * 0.4));
      strip.setPixelColor(p+7, strip.Color(r * 0.3, g * 0.3, b * 0.3));
      strip.setPixelColor(p+8, strip.Color(r * 0.2, g * 0.2, b * 0.2));
      strip.setPixelColor(p+9, strip.Color(r * 0.1, g * 0.1, b * 0.1));
      strip.setPixelColor(p+10, 0);

      strip.setPixelColor(p-15, strip.Color(r * 0.9, g * 0.9, b * 0.9));
      strip.setPixelColor(p-14, strip.Color(r * 0.8, g * 0.8, b * 0.8));
      strip.setPixelColor(p-13, strip.Color(r * 0.7, g * 0.7, b * 0.7));
      strip.setPixelColor(p-12, strip.Color(r * 0.6, g * 0.6, b * 0.6));
      strip.setPixelColor(p-11, strip.Color(r * 0.5, g * 0.5, b * 0.5));
      strip.setPixelColor(p-10, strip.Color(r * 0.4, g * 0.4, b * 0.4));
      strip.setPixelColor(p-9, strip.Color(r * 0.3, g * 0.3, b * 0.3));
      strip.setPixelColor(p-8, strip.Color(r * 0.2, g * 0.2, b * 0.2));
      strip.setPixelColor(p-7, strip.Color(r * 0.1, g * 0.1, b * 0.1));
      strip.setPixelColor(p-6, 0);



    strip.show();
    delay(s);


/*
    Serial.println(p);
    Serial.println(k);
    Serial.println(r);
    Serial.println(g);
    Serial.println(b);
*/
   
    
    }

}
