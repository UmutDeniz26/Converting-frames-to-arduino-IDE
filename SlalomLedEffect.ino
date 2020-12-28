#include <FastLED.h>
#define LED_PIN 7
#define NUM_LEDS 60
int framecounter;
int choice=1;
int timer = 70;
int a1 = 255;
int a0 = 0;
CRGB leds [NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(9600);                          
  
}

void loop() {
  
frameToCode("1nnnnnnnnn1nnnnnnn1nnn1nnnnn1nnn1nnn1nnnnnnn1n1nnnnnnn1nnnnn");
frameToCode("n1nnnnnnnnnnnnnnn1n1nnn1nnnnn1n1nnn1nnnnnnnnn1n1nnnnn1nnnnnn");
frameToCode("nn1nnnnnnnnnnnnn1n1n1nnn1nnnnn1nnn1nnnnnnnnnnn1n1nnn1nnnnnnn");
frameToCode("nnn1nnnnnnnnnnn1n1nnn1nnn1nnnnnnn1nnnnn1nnnnnnn1n1n1nnnnnnnn");
frameToCode("nnnn1nnnnnnnnn1n1nnnnn1nnn1nnnnn1nnnnn1n1nnnnnnn1n1nnnnnnnnn");
frameToCode("nnnnn1nnnnnnn1n1nnnnnnn1nnn1nnn1nnnnn1nnn1nnnnnnn1nnnnnnnnnn");
frameToCode("nnnnnn1nnnnn1n1nnnnnnnnn1nnn1n1nnnnn1nnn1n1nnnnnnnnnnnnnnnn1");
frameToCode("nnnnnnn1nnn1n1nnnnnnnnnnn1nnn1nnnnn1nnn1n1n1nnnnnnnnnnnnnn1n");
frameToCode("nnnnnnnn1n1n1nnnnnnn1nnnnn1nnnnnnn1nnn1nnn1n1nnnnnnnnnnnn1nn");
frameToCode("nnnnnnnnn1n1nnnnnnn1n1nnnnn1nnnnn1nnn1nnnnn1n1nnnnnnnnnn1nnn");  

}
void frameToCode(String input) {
  int i=0;
  while(i<60){
    if(input[i]=='1'){
      leds[i]=CRGB(a1,a1,a1);
    }  
    if (input[i]=='n'){
      leds[i]=CRGB(a0,a0,a0);
    }
    i++;
    }
  FastLED.show();
  delay(timer);
}
