#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#define PIN             6
#define NUMPIXELS      20
#define sensorSound     9
boolean flag;
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN);

void setup() {  
  pixels.begin();
  Serial.begin(9600);
  pinMode(sensorSound, INPUT);
}
 
void loop() { 
  if(digitalRead(sensorSound) == LOW){
         uint32_t color;
          for(int i=0;i<NUMPIXELS;i++){
          color = pixels.Color(0, 0, 255); 
          pixels.setPixelColor(i,color);
          pixels.show();
          delay(300);
       }
  }
}

