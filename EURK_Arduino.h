/*
  한글 라이브러리 '어우러기' 아두이노 버전 1.0
  설명 : OLED 디스플레이를 사용하는 아두이노 프로그램에서 한글 출력을 자유롭게 하기 위해
         만들어졌다.
  사용 라이브러리 : Adafruit에서 배포한 OLED 디스플레이용 라이브러리인
                    Adafruit_GFX, Adafruit_SSD1306
  사용 방법 : 모든 (세 가지) 라이브러리를 '(사용자)/문서/Arduino/libraries' 폴더에 설치하고,
              소스 파일에서 EURK_Arduino.h 헤더 파일을 인클루드한 후에,
              디스플레이 상황에 맞춰 display 오브젝트를 생성하고 나서,
              적절한 한글 라이브러리 함수들을 호출하면 된다.
  배포 : 숙묵미래정보재단 ( http://sookmook.org )
  만든 사람 : 숙묵 지영민 ( mailto://sookmook@sookmook.org )
              feat. 안병윤 ( mailto://hayansea@sookmook.org )
  만든 날짜 : 2018년 4월 24일
*/

#ifndef __EURK_ARDUINO_H
#define __EURK_ARDUINO_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "sfif_inc.h"
#include "Hangeul_Font.h"
#include "ASCII_Font.h"

/* 2바이트 조합형 한글을 위한 공용체 */
#ifndef __HAN_UNION
#define __HAN_UNION
union HAN_UNION {
  struct {
    word l : 5 ;
    word m : 5 ;
    word f : 5 ;
    word s : 1 ;
  } a ; /* 자모 */
  struct {
    byte s ;
    byte f ;
  } c ; /* 코드 */
} ;
#endif

/* 현대국어에서 표현 가능한 모든 한글의 수 = 11172 */
/* (초성 19 * 중성 21 * 종성(받침 없는 것 포함) 28 */
#ifndef ALL_OF_HAN
#define ALL_OF_HAN 11172
#endif

/* 한글 코드 정의 */
#ifndef __HANCODE__DEFINE
#define __HANCODE__DEFINE
#define HANCODE_UTF_8       0
#define HANCODE_EXTENED_KSC 1
#endif

/* 유니코드에서 한글의 시작 위치 */
#ifndef UNICODE_HAN_BASE
#define UNICODE_HAN_BASE 0xAC00
#endif

void EURK_hancode(int kind) ;
void EURK_setxy(int x, int y) ;
void EURK_puts(char *s) ;
void EURK_putsxy(int XPOS, int YPOS, char *s) ;

#endif
