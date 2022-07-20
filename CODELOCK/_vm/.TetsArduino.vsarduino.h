/* 
	Editor: https://www.visualmicro.com/
			This file is for intellisense purpose only.
			Visual micro (and the arduino ide) ignore this code during compilation. This code is automatically maintained by visualmicro, manual changes to this file will be overwritten
			The contents of the _vm sub folder can be deleted prior to publishing a project
			All non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
			Note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Generic STM32F103C6/fake STM32F103C8                                                                        (stm32duino_genericSTM32F103C6), Platform=STM32F1, Package=stm32duino
*/

#if defined(_VMICRO_INTELLISENSE)

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define DEBUG_LEVEL DEBUG_NONE
#define BOARD_generic_stm32f103c 1
#define VECT_TAB_ADDR 0x8000000
#define ERROR_LED_PORT GPIOC
#define ERROR_LED_PIN 13
#define F_CPU 72000000L
#define ARDUINO 108019
#define ARDUINO_GENERIC_STM32F103C 1
#define ARDUINO_ARCH_STM32F1 1
#define CONFIG_MAPLE_MINI_NO_DISABLE_DEBUG 1
#define MCU_STM32F103C6 1
#define __STM32F1__ 1
#define __cplusplus 201103L

#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __volatile__

#define __GNUC__ 6
#define  __GNUC_MINOR__ 3
#define  __GNUC_PATCHLEVEL__ 0
#define _Static_assert(x)
#define ___int8_t_defined
#define ___int16_t_defined
#define ___int32_t_defined
#define ___int64_t_defined


#undef __cplusplus
#define __cplusplus 201103L
typedef bool _Bool;
#define __ARMCC_VERSION 400678
#define __attribute__(noinline)

typedef int _bool;
typedef int intmax_t;
typedef int uintmax_t;
typedef int __intmax_t;
typedef unsigned int __uintmax_t;
//#define __INTPTR_TYPE__ +4
#define _INTPTR_EQ_LONG
typedef int __intptr_t;
typedef int __uintptr_t;
#define __UINTPTR_TYPE__ int
#define __INTPTR_TYPE__ int
#define __INT8_TYPE__ int
#define __INT16_TYPE__ int
#define __INT32_TYPE__ long
#define __INT64_TYPE__ double
#define __UINT8_TYPE__ unsigned int
#define __UINT16_TYPE__ unsigned int
#define __UINT32_TYPE__ unsigned long
#define __UINT64_TYPE__ unsigned long

#define __INT_LEAST8_TYPE__ int
#define __INT_LEAST16_TYPE__ int
#define __INT_LEAST32_TYPE__ long
#define __INT_LEAST64_TYPE__ double
#define __UINT_LEAST8_TYPE__ unsigned int
#define __UINT_LEAST16_TYPE__ unsigned int
#define __UINT_LEAST32_TYPE__ unsigned long
#define __UINT_LEAST64_TYPE__ unsigned long

#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ long
#define __INT_FAST64_TYPE__ double
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned long
#define __UINT_FAST64_TYPE__ unsigned long

#define __INTMAX_TYPE__ int;
#define __UINTMAX_TYPE__ unsigned int;

typedef void *__builtin_va_list;
typedef void* va_list;
typedef void* __gnuc_va_list;
#define __CHAR_BIT__
// Ensure ArduinoJSON Lib Intellisense works correctly
#define ARDUINOJSON_ENABLE_STD_STREAM 0

#include <arduino.h>
#include <pins_arduino.h> 
#include <variant.h> 
#include <board.cpp> 
typedef long unsigned int 	size_t;

FILE * tmpfile (void);
char * tmpnam (char *);
int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *__restrict, const char *__restrict, FILE *__restrict);
void setbuf (FILE *__restrict, char *__restrict);
int setvbuf (FILE *__restrict, char *__restrict, int, size_t);
int fprintf (FILE *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int printf (const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *__restrict, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int sscanf (const char *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int vfprintf (FILE *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *__restrict, int, FILE *__restrict);
int fputc (int, FILE *);
int fputs (const char *__restrict, FILE *__restrict);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void * __restrict, size_t _size, size_t _n, FILE *__restrict);
size_t fwrite (const void * __restrict , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *__restrict, fpos_t *__restrict);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *__restrict _name, const char *__restrict _type);
int sprintf (char *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);

int fseeko (FILE *, off_t, int);
off_t ftello ( FILE *);




int asiprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
char * asniprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
char * asnprintf (char *__restrict, size_t *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int asprintf (char **__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int diprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int fcloseall (void);
int fiprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fiscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int iprintf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)));
int iscanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int siprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int siscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int snprintf (char *__restrict, size_t, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int sniprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
char * tempnam (const char *, const char *);
int vasiprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int vasprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int vdiprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vfscanf (FILE *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int viprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)));
int viscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vsiprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int vsiscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vsniprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int vsnprintf (char *__restrict, size_t, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int vsscanf (const char *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))

FILE * fdopen (int, const char *);

int fileno (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE * popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 332 "c:\\users\\vmicro\\appdata\\local\\arduino15\\packages\\arduino\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
int dprintf (int, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

FILE * fmemopen (void *__restrict, size_t, const char *__restrict);


FILE * open_memstream (char **, size_t *);



int vdprintf (int, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));







int _asiprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *__restrict, size_t *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *__restrict, int, FILE *__restrict);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
FILE * _fmemopen_r (struct _reent *, void *__restrict, size_t, const char *__restrict);
FILE * _fopen_r (struct _reent *, const char *__restrict, const char *__restrict);
FILE * _freopen_r (struct _reent *, const char *__restrict, const char *__restrict, FILE *__restrict);
int _fprintf_r (struct _reent *, FILE *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *__restrict, FILE *__restrict);
size_t _fread_r (struct _reent *, void * __restrict, size_t _size, size_t _n, FILE *__restrict);
int _fscanf_r (struct _reent *, FILE *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * __restrict, size_t _size, size_t _n, FILE *__restrict);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new)
                                          ;
int _scanf_r (struct _reent *, const char *__restrict, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int _siprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *__restrict, size_t, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *__restrict, const char *__restrict, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vfprintf_r (struct _reent *, FILE *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vprintf_r (struct _reent *, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *__restrict, size_t, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *__restrict, const char *__restrict, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
FILE *funopen (const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie));
FILE *_funopen_r (struct _reent *, const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie));




_PTR 	 memchr(const _PTR, int, size_t);
_PTR 	 memchr(const _PTR, int, size_t) {}
int 	  memcmp(const _PTR, const _PTR, size_t);
_PTR 	  memcpy(_PTR __restrict, const _PTR __restrict, size_t);
_PTR	  memmove(_PTR, const _PTR, size_t);
_PTR	  memset(_PTR, int, size_t);
_PTR	  memset(_PTR, int, size_t) {}
char* strcat(char* __restrict, const char* __restrict);
char* strcat(char* __restrict, const char* __restrict) {}
char* strchr(const char*, int);
char* strchr(const char*, int) {};
int	  strcmp(const char*, const char*);
int	  strcmp(const char*, const char*) {}
int	  strcoll(const char*, const char*);
int	  strcoll(const char*, const char*) {}
char* strcpy(char* __restrict, const char* __restrict);
char* strcpy(char* __restrict, const char* __restrict) {}
size_t	  strcspn(const char*, const char*);
size_t	  strcspn(const char*, const char*) {}
char* strerror(int);
char* strerror(int) {}
size_t	  strlen(const char*);
size_t	  strlen(const char*) {}
char* strncat(char* __restrict, const char* __restrict, size_t);
char* strncat(char* __restrict, const char* __restrict, size_t) {}
int	  strncmp(const char*, const char*, size_t);
int	  strncmp(const char*, const char*, size_t) {}
char* strncpy(char* __restrict, const char* __restrict, size_t);
char* strncpy(char* __restrict, const char* __restrict, size_t) {}
char* strpbrk(const char*, const char*);
char* strpbrk(const char*, const char*) {}
char* strrchr(const char*, int);
char* strrchr(const char*, int) {}
size_t	  strspn(const char*, const char*);
size_t	  strspn(const char*, const char*) {}
char* strstr(const char*, const char*);
char* strstr(const char*, const char*) {}
#ifndef _REENT_ONLY
char* strtok(char* __restrict, const char* __restrict);
char* strtok(char* __restrict, const char* __restrict) {}
#endif
size_t	  strxfrm(char* __restrict, const char* __restrict, size_t);
size_t	  strxfrm(char* __restrict, const char* __restrict, size_t) {}


// Math.h 
extern double atan (double);
double cos (double);
double sin (double);
double tan (double);
double tanh (double);
double frexp (double, int *);
double modf (double, double *);
double ceil (double);
double fabs (double);
double floor (double);
double acos (double);
double asin (double);
double atan2 (double, double);
double cosh (double);
double sinh (double);
double exp (double);
double ldexp (double, int);
double log (double);
double log10 (double);
double pow (double, double);
double sqrt (double);
double fmod (double, double);
typedef float float_t;
typedef double double_t;
int __isinff (float x);
int __isinfd (double x);
int __isnanf (float x);
int __isnand (double x);
int __fpclassifyf (float x);
int __fpclassifyd (double x);
int __signbitf (float x);
int __signbitd (double x);
double infinity (void);
double nan (const char *);
int finite (double);
double copysign (double, double);
double logb (double);
int ilogb (double);
double asinh (double);
double cbrt (double);
double nextafter (double, double);
double rint (double);
double scalbn (double, int);
double exp2 (double);
double scalbln (double, long int);
double tgamma (double);
double nearbyint (double);
long int lrint (double);
long long int llrint (double);
double round (double);
long int lround (double);
long long int llround (double);
double trunc (double);
double remquo (double, double, int *);
double fdim (double, double);
double fmax (double, double);
double fmin (double, double);
double fma (double, double, double);
double log1p (double);
double expm1 (double);
double acosh (double);
double atanh (double);
double remainder (double, double);
double gamma (double);
double lgamma (double);
double erf (double);
double erfc (double);
double log2 (double);
double hypot (double, double);
float atanf (float);
float cosf (float);
float sinf (float);
float tanf (float);
float tanhf (float);
float frexpf (float, int *);
float modff (float, float *);
float ceilf (float);
float fabsf (float);
float floorf (float);
float acosf (float);
float asinf (float);
float atan2f (float, float);
float coshf (float);
float sinhf (float);
float expf (float);
float ldexpf (float, int);
float logf (float);
float log10f (float);
float powf (float, float);
float sqrtf (float);
float fmodf (float, float);
float exp2f (float);
float scalblnf (float, long int);
float tgammaf (float);
float nearbyintf (float);
long int lrintf (float);
long long llrintf (float);
float roundf (float);
long int lroundf (float);
long long int llroundf (float);
float truncf (float);
float remquof (float, float, int *);
float fdimf (float, float);
float fmaxf (float, float);
float fminf (float, float);
float fmaf (float, float, float);
float infinityf (void);
float nanf (const char *);
int finitef (float);
float copysignf (float, float);
float logbf (float);
int ilogbf (float);
float asinhf (float);
float cbrtf (float);
float nextafterf (float, float);
float rintf (float);
float scalbnf (float, int);
float log1pf (float);
float expm1f (float);
float acoshf (float);
float atanhf (float);
float remainderf (float, float);
float gammaf (float);
float lgammaf (float);
float erff (float);
float erfcf (float);
float log2f (float);
float hypotf (float, float);
long double atanl (long double);
long double cosl (long double);
long double sinl (long double);
long double tanl (long double);
long double tanhl (long double);
long double frexpl (long double value, int *);
long double modfl (long double, long double *);
long double ceill (long double);
long double fabsl (long double);
long double floorl (long double);
long double log1pl (long double);
long double expm1l (long double);
long double acosl (long double);
long double asinl (long double);
long double atan2l (long double, long double);
long double coshl (long double);
long double sinhl (long double);
long double expl (long double);
long double ldexpl (long double, int);
long double logl (long double);
long double log10l (long double);
long double powl (long double, long double);
long double sqrtl (long double);
long double fmodl (long double, long double);
long double hypotl (long double, long double);
long double copysignl (long double, long double);
long double nanl (const char *);
int ilogbl (long double);
long double asinhl (long double);
long double cbrtl (long double);
long double nextafterl (long double, long double);
long double rintl (long double);
long double scalbnl (long double, int);
long double exp2l (long double);
long double scalblnl (long double, long);
long double tgammal (long double);
long double nearbyintl (long double);
long int lrintl (long double);
long long int llrintl (long double);
long double roundl (long double);
long lroundl (long double);
long long int llroundl (long double);
long double truncl (long double);
long double remquol (long double, long double, int *);
long double fdiml (long double, long double);
long double fmaxl (long double, long double);
long double fminl (long double, long double);
long double fmal (long double, long double, long double);
long double acoshl (long double);
long double atanhl (long double);
long double remainderl (long double, long double);
long double lgammal (long double);
long double erfl (long double);
long double erfcl (long double);
double drem (double, double);
void sincos (double, double *, double *);
double gamma_r (double, int *);
double lgamma_r (double, int *);
double y0 (double);
double y1 (double);
double yn (int, double);
double j0 (double);
double j1 (double);
double jn (int, double);
float dremf (float, float);
void sincosf (float, float *, float *);
float gammaf_r (float, int *);
float lgammaf_r (float, int *);
float y0f (float);
float y1f (float);
float ynf (int, float);
float j0f (float);
float j1f (float);
float jnf (int, float);
double exp10 (double);
double pow10 (double);
float exp10f (float);
float pow10f (float);

// ctypesw
int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);
int isblank (int __c);
int isascii (int __c);
int toascii (int __c);
#include "TetsArduino.ino"
#endif
#endif
