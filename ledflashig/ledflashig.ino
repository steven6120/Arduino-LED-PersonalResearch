#include <FastLED.h>

#define LED_PIN     5     //我的LED信号线IN接在8引脚
#define NUM_LEDS    30    //我的灯带一共级联了12颗LED
#define BRIGHTNESS  20
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);  //可以设置全局亮度，调低亮度不刺眼
}

int r = 0;
int g = 0;
int b = 0;
int mib = 0;

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i].r = r;     // 光带上LED灯珠的RGB数值中R数值
    leds[i].g = g;     // 光带上LED灯珠的RGB数值中G数值
    leds[i].b = b;     //光带上LED灯珠的RGB数值中B数值
    FastLED.show();
  }
  delay(2);
  if (b == 255)
  {
  mib = 1;
  delay(10);
  }
  else if (b == 0)
  {
  mib = 0;
  delay(800);
  }

  if (mib == 1){
    b = (b - 15);
  }else if(mib == 0){
    b = (b + 15);
  }
  
}
