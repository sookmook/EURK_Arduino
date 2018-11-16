/*****************************************************************************
  Module :  SFIF Standard Header File version 0.12
  What do : Define data types and macro const of libraries and functions
                  that made by SFIF.
				  Please refer to the user guide for more information.
  Language : C / C++ compatible
  Affiliated : Sookmook Future Informatics Foundation
  Auther : Young-min Ji (E-Mail : sookmook@sookmook.org)
  Period : From 1993/05/06 To 2004/06/23 (ver. 0.11)
           From 2011/01/28 To 2011/02/02 (ver. 0.12)
		   From 2015/09/27 To 2015/09/27 (ver. 0.13)
*****************************************************************************/

/* Define SFIF Standard Header  */
#ifndef __SFIF_INCLUDE_H
#define __SFIF_INCLUDE_H

/* Define names of data types */

#ifndef uint
typedef unsigned int uint ;
#endif

#ifndef uint8
typedef unsigned char  uint8 ;
#endif
#ifndef int8
typedef signed char    int8 ;
#endif
#ifndef uint16
typedef unsigned short uint16 ;
#endif
#ifndef int16
typedef signed short   int16 ;
#endif

/*
#ifndef uint32
typedef unsigned long  uint32 ;
#endif
#ifndef int32
typedef signed long    int32 ;
#endif
*/

/*
#ifndef uint64
typedef unsigned long long uint64 ;
#endif
#ifndef int64
typedef signed long long   int64 ;
#endif
*/

#ifndef byte
typedef unsigned char  byte ;
#endif
#ifndef word
typedef unsigned short word ;
#endif
/*
#ifndef dword
typedef unsigned long  dword ;
#endif
#ifndef boolean
typedef unsigned int   boolean ;
#endif
*/

/* Define macro const that has general logical state */
#ifndef TRUE
#define FALSE 0 
#define TRUE (!FALSE) 
#endif

/* Define macro const that set On/Off */
#ifndef ON
#define OFF 0 
#define ON (!OFF) 
#endif

/* Define macro const that set Yes/No */
#ifndef YES
#define NO   0 
#define YES (!NO)
#endif

/* Define macro const about error */
#ifndef NOERR
#define NOERR 0
#define ERR   (!NOERR)
#endif

/* Define NULL macro const */
#ifndef NULL
#if (sizeof(void *) == 2)
#define NULL 0
#else
#define NULL 0L
#endif
#endif

#endif
