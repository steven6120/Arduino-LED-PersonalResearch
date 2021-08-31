#include "Arduino.h"
#include "HardwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    12
#define BRIGHTNESS  64
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100

HardwareSerial mySerial(1);
DFRobotDFPlayerMini myDFPlayer;

CRGBPalette16 currentPalette;
TBlendType    currentBlending;

extern CRGBPalette16 myRedWhiteBluePalette;
extern const TProgmemPalette16 myRedWhiteBluePalette_p PROGMEM;


void setup() {
 // delay( 3000 ); // power-up safety delay
  mySerial.begin(9600,SERIAL_8N1, 4, 2);// TX, RX
  Serial.begin(115200);


  
  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
    if (!myDFPlayer.begin(mySerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  
 
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    FastLED.setBrightness(  BRIGHTNESS );
    
 //  currentPalette = RainbowColors_p;
 //  currentBlending = LINEARBLEND;
  
  // delay(1500);
   myDFPlayer.volume(25);  //Set volume value. From 0 to 30
   myDFPlayer.play(1);  //Play the first mp3
}

int r = 0;
int g = 0;
int b = 0;
int h = 0;

void loop()
{
   
    if (h == 0){
      delay(1500); //LED開始的延時(1.5秒)
      h = 1;
    }else if (h == 1){
    for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(200); //延時(1.5秒)
    }
    for (int i = 0; i < NUM_LEDS; i++) {
    leds[i].r = r;     // 光带上LED灯珠的RGB数值中R数值
    leds[i].g = g;     // 光带上LED灯珠的RGB数值中G数值
    leds[i].b = b;     //光带上LED灯珠的RGB数值中B数值
    FastLED.show();
    }
    h = 2;
    } 
  
}
