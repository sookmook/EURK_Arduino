
#include <Wire.h>     // Wemos TTGO ESP8266 with 0.91 Inch OLED version B type
#include <EURK_Arduino.h>

#define OLED_SDA   2  // Wemos TTGO ESP8266 with 0.91 Inch OLED version B type
#define OLED_SCL   14 // Wemos TTGO ESP8266 with 0.91 Inch OLED version B type
#define OLED_RESET 4  // Wemos TTGO ESP8266 with 0.91 Inch OLED version B type (A type = 10)
Adafruit_SSD1306 display(OLED_RESET) ; // 디스플레이 오브젝트 생성

void setup()
{
  Serial.begin(115200) ;
  Wire.begin(OLED_SDA, OLED_SCL) ; // Wemos TTGO ESP8266 with 0.91 Inch OLED version B type
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C) ;             // 128x32 화면으로 설정
  display.clearDisplay() ;                                // 화면 지우기
  EURK_putsxy(0, 0, "한글 라이브러리 어우러기 Ver 1.0") ; // 문자열 출력
  display.display() ;                                     // 화면 표시
}

void loop()
{
}

