/*
  한글 라이브러리 '어우러기' 아두이노 버전 1.0을 위한 폰트 변환기
  배포 : 숙묵미래정보재단 ( http://sookmook.org )
  만든 사람 : 숙묵 지영민 ( mailto://sookmook@sookmook.org )
           feat. 안병윤 ( mailto://hayansea@sookmook.org )
  만든 날짜 : 2018년 4월 24일
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../sfif_inc.h"

#define PROGNAME "Font Converter for EURK library"
#define VERSION  "0.01"

#define TITLESTR "\n\
 "PROGNAME" Version "VERSION"            Date : "__DATE__"\n\
============================================================================\n\
 Copyright 2018 Sookmook Future Informatics Foundation All Rights Reserved.\n\n"

#define USAGESTR "\nUsage : FontConvert [font_file]\n\n"

#ifndef HANGEUL_FONT_SIZE
#define HANGEUL_FONT_SIZE 11520
#define ASCII_FONT_SIZE   4096
#endif

enum ERROR_CODE {
  E_NO = 0, E_USAGE,
  E_CANTOPENFONTFILE,
  E_NOTFONTFILE,
  E_CANTCREATSRCFILE,
  ERROR_MAX
} ;

void Title(void) ;
void Usage(void) ;
void ExitProgram(word code) ;
void ProcessArgument(int ac, byte *av[]) ;
int Puts(const char *s, FILE *fp) ;
int ConPuts(const char *s) ;
void FontConvert(byte *fonTfilEnamE) ;

void main(int argc, byte *argv[])
{
  ProcessArgument(argc, argv) ;
  ExitProgram(E_NO) ;
}

void Title(void)
/* Output title string. */
{
  ConPuts(TITLESTR) ;
}

void Usage(void)
/* Output usage message of the program. */
{
  ConPuts(USAGESTR) ;
  ExitProgram(E_USAGE) ;
}

void ExitProgram(word code)
/* Output error messages and exit the program. */
{
  byte *estr[ERROR_MAX] = {
    "Thank you for using our program...\nGood bye, see you again...\n",
    "",
    "Can't open the font file",
    "Not font file",
    "Can't creat C source file",
  } ;

  Puts("\n", stderr) ;
  Puts(estr[code], stderr) ;
  if (code > E_USAGE) Puts(" error...\a\n\n", stderr) ;
  exit(code) ;
}

void ProcessArgument(int ac, byte *av[])
/* Process the arguments in command line. */
{
  int i ;
  
  Title() ;
  if (ac < 2) { /* No arguments, Output usage. */
    Usage() ;
  } else {
    ac-- ;
    i = 0 ;
    while (i++ < ac) {          /* Process font file. */
      FontConvert(av[i]) ;
    }
  }
}

int Puts(const char *s, FILE *fp)
/*
  Put string to file pointer.
  It is same fputs() in stdio.h
*/
{
  return fputs(s, fp) ;
}

int ConPuts(const char *s)
/* Put string to monitor. */
{
  return Puts(s, stdout) ;
}

void FontConvert(byte *fonTfilEnamE)
/* Convert from font file to C source file. */
{
  int i ;
  long flen ;
  byte CsourcEfilEnamE[FILENAME_MAX] = "..\\Hangeul_Font.h" ;
  byte SrcString[80] = "static const byte PROGMEM H_in_font_Hangel_844[11520] = {" ;
  byte HexString[8] ;
  FILE *ffp, *sfp ;

  if ((ffp = fopen(fonTfilEnamE, "rb")) == NULL) ExitProgram(E_CANTOPENFONTFILE) ;
  fseek(ffp, 0, SEEK_END) ;
  flen = ftell(ffp) ;
  fseek(ffp, 0, SEEK_SET) ;
  if (((flen != HANGEUL_FONT_SIZE) && (flen != ASCII_FONT_SIZE))
   || (stricmp(fonTfilEnamE + strlen(fonTfilEnamE) - 4, ".SPC") == 0)) {
    fclose(ffp) ;
    ExitProgram(E_NOTFONTFILE) ;
  }
  if (flen == ASCII_FONT_SIZE) {
    strcpy(CsourcEfilEnamE, "..\\ASCII_Font.h") ;
    strcpy(SrcString, "static const byte PROGMEM H_in_font_ASCII[4096] = {") ;
  }
  if ((sfp = fopen(CsourcEfilEnamE, "wt")) == NULL) {
    fclose(ffp) ;
    ExitProgram(E_CANTCREATSRCFILE) ;
  }
  fputs("/*-------------------------------------------------------\n\n", sfp) ;
  fputs("  This C source file created by FontConvert program.\n", sfp) ;
  fputs("  From the font ", sfp) ;
  fputs(fonTfilEnamE, sfp) ;
  fputs("\n\n", sfp) ;
  fputs("-------------------------------------------------------*/\n\n", sfp) ;
  for (i = 0; i < flen; i++) {
    if ((i % 8) == 0) {
      strcat(SrcString, "\n") ;
      fputs((char *)SrcString, sfp) ;
      strcpy(SrcString, "  ") ;
    }
    sprintf(HexString, "0x%02X,", fgetc(ffp)) ;
    strcat(SrcString, HexString) ;
    if ((i % 8) < 7) strcat(SrcString, " ") ;
  }
  strcat(SrcString, "\n} ;\n") ;
  fputs((char *)SrcString, sfp) ;
  fclose(ffp) ;
  fclose(sfp) ;
}
