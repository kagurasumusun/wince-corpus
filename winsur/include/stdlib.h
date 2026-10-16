/* stdlib.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 129 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _STDLIB_
#define _STDLIB_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DIV 0x0465

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* _cabs  [struct; ce-only; CE 5.0..599; coredll.dll] */
double _cabs( struct _complexz);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 2.0..209, 2.12..399, 5.0..599 */

/* Abs  [function; ce-only; CE 2.0..209, 2.12..399, 5.0..599; coredll.dll] */
INT abs( intn);

/* Cos  [function; ce-only; CE 2.0..209, 2.12..399, 5.0..599; coredll.dll] */
double cos( double x 
);double cosh( double x 
);

/* Sin  [function; ce-only; CE 2.0..209, 2.12..399, 5.0..599; coredll.dll] */
double sin( doublex);double sinh( doublex);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* _snprintf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, corestra.lib] */
int _snprintf(
 char *buffer,
 size_tcount, 
 const char *format [,
 argument] ... );int _snwprintf( wchar_t *buffer,
 size_tcount, 
 const wchar_t *format [,
 argument] ... );

/* fgets  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
char *fgets( char*string,intn,FILE*stream);wchar_t *fgetws( wchar_t*string,intn,FILE*stream);

/* fopen  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
FILE *fopen( const char*filename,constchar*mode);FILE *_wfopen( const wchar_t*filename,const wchar_t*mode);

/* fprintf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int fprintf( FILE* stream,const char*format [, argument ]...
);int fwprintf( FILE*stream,const wchar_t*format [, argument ]...);

/* fputc  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int fputc( intc,FILE*stream);wint_t fputwc( wint_tc,FILE*stream);

/* fputs  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int fputs( const char*string,FILE*stream);int fputws( const wchar_t*string,FILE*stream);

/* Free  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll] */
void free( void*memblock);

/* fscanf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int fscanf( FILE*stream, 
 const char*format[, argument]... 
);int fwscanf( FILE*stream,const wchar_t*format[, argument]... 
);

/* getchar  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int getchar( void );wint_t getwchar( void );

/* gets  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
char *gets( char*buffer);wchar_t *_getws( wchar_t*buffer);

/* printf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int printf( const char*format [,argument]... 
);int wprintf( const wchar_t*format [,argument]... 
);

/* putchar  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int putchar( intc);wint_t putwchar( wint_tc);

/* puts  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int puts( const char*string);int _putws( const wchar_t*string);

/* scanf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int scanf( const char*format [,argument]... 
);int wscanf( const wchar_t*format [,argument]...
);

/* sprintf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, corestra.lib] */
int sprintf( char *buffer, const char *format [, argument] ... );int swprintf( wchar_t *buffer, const wchar_t *format [, argument] ... );

/* sscanf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, corestra.lib] */
int sscanf( const char *buffer, const char *format [, argument ] ... );int swscanf( const wchar_t *buffer, const wchar_t *format [, argument ] ... );

/* vsprintf  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, corestra.lib] */
int vsprintf( char *buffer, constchar *format, va_listargptr);int vswprintf( wchar_t *buffer, constwchar_t *format, va_listargptr);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* atoi  [function; ce-only; CE 3.0..399, 5.0..699; entity-headers] */
int WINAPI atoi(
 const TCHAR* sz
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* __regsize  [function; ce-only; CE 4.0..699] */
int __cdecl __regsize(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* __isascii  [function; ce-only; CE 5.0..599; coredll.dll] */
int __isascii( int c);int iswascii( wint_t c);

/* _atoi64  [function; ce-only; CE 5.0..599; entity-headers] */
double atof( const char *string);int atoi( const char *string);_int64 _atoi64( const char *string);long atol( const char *string);

/* _ecvt  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_ecvt( doublevalue,intcount,int*dec,int*sign);

/* _fcloseall  [function; ce-only; CE 5.0..599; entity-headers] */
int _fcloseall( void );int fclose( FILE* stream);

/* _fcvt  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_fcvt( doublevalue,intcount,int*dec,int*sign);

/* _fileno  [function; ce-only; CE 5.0..599; coredll.dll] */
void* _fileno( FILE*stream);

/* _finite  [function; ce-only; CE 5.0..599; coredll.dll] */
int _finite( doublex);

/* _flushall  [function; ce-only; CE 5.0..599; coredll.dll] */
int _flushall( void );

/* _fpclass  [function; ce-only; CE 5.0..599; coredll.dll] */
int _fpclass( doublex);

/* _fpieee_flt  [function; ce-only; CE 5.0..599; coredll.dll] */
int _fpieee_flt( unsigned longexc_code,struct_EXCEPTION_POINTERS*exc_info,inthandler(_FPIEEE_RECORD *) );

/* _fpreset  [function; ce-only; CE 5.0..599; coredll.dll] */
void _fpreset( void );

/* _gcvt  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_gcvt( doublevalue,intdigits,char*buffer 
);

/* _hypot  [function; ce-only; CE 5.0..599; coredll.dll] */
double _hypot( doublex,doubley);

/* _isctype  [function; ce-only; CE 5.0..599; coredll.dll] */
int _isctype( int c, int desc);int iswctype( wint_tc, 
 wctype_tdesc);

/* _isnan  [function; ce-only; CE 5.0..599; coredll.dll] */
int _isnan( doublex);

/* _itoa  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_itoa( int value, char *string, int radix);wchar_t * _itow( int value, wchar_t *string, int radix);

/* _itow  [function; ce-only; CE 5.0..599; entity-headers] */
char *_itoa( int value, char *string, int radix);wchar_t * _itow( int value, wchar_t *string, int radix);

/* _j0  [function; ce-only; CE 5.0..599; coredll.dll] */
double _j0( double x);double _j1( double x);double _jn( int n, double x);

/* _j1  [function; ce-only; CE 5.0..599; entity-headers] */
double _j0( double x);double _j1( double x);double _jn( int n, double x);

/* _jn  [function; ce-only; CE 5.0..599; entity-headers] */
double _j0( double x);double _j1( double x);double _jn( int n, double x);

/* _logb  [function; ce-only; CE 5.0..599; coredll.dll] */
double _logb( doublex);

/* _lrotl  [function; ce-only; CE 5.0..599; coredll.dll] */
unsigned long _lrotl( unsigned longvalue, intshift 
);
unsigned long _lrotr( unsigned longvalue, intshift);

/* _lrotr  [function; ce-only; CE 5.0..599; entity-headers] */
unsigned long _lrotl( unsigned longvalue, intshift 
);
unsigned long _lrotr( unsigned longvalue, intshift);

/* _ltoa  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_ltoa( longvalue, char*string, intradix);wchar_t *_ltow( longvalue, wchar_t*string, intradix);

/* _ltow  [function; ce-only; CE 5.0..599; entity-headers] */
char *_ltoa( longvalue, char*string, intradix);wchar_t *_ltow( longvalue, wchar_t*string, intradix);

/* _memccpy  [function; ce-only; CE 5.0..599; coredll.dll] */
void *_memccpy( void*dest, const void*src, intc, unsigned intcount);

/* _memicmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int _memicmp( const void*buf1, const void*buf2, unsignedintcount);

/* _msize  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t _msize( void*memblock);

/* _nextafter  [function; ce-only; CE 5.0..599; coredll.dll] */
double _nextafter( doublex, doubley);

/* _rotl  [function; ce-only; CE 5.0..599; coredll.dll] */
unsigned int _rotl( unsigned intvalue,intshift);unsigned int _rotr( unsigned intvalue,intshift);

/* _rotr  [function; ce-only; CE 5.0..599; entity-headers] */
unsigned int _rotl( unsigned intvalue,intshift);unsigned int _rotr( unsigned intvalue,intshift);

/* _scalb  [function; ce-only; CE 5.0..599; coredll.dll] */
double _scalb( doublex,longexp);

/* _setmode  [function; ce-only; CE 5.0..599; coredll.dll] */
int _setmode( 
inthandle,intmode);

/* _y0  [function; ce-only; CE 5.0..599; coredll.dll] */
double _y0( double x );double _y1( double x );double _yn( int n, double x );

/* _y1  [function; ce-only; CE 5.0..599; entity-headers] */
double _y0( double x );double _y1( double x );double _yn( int n, double x );

/* _yn  [function; ce-only; CE 5.0..599; entity-headers] */
double _y0( double x );double _y1( double x );double _yn( int n, double x );

/* acos  [function; ce-only; CE 5.0..599; coredll.dll] */
double acos( doublex);

/* asin  [function; ce-only; CE 5.0..599; coredll.dll] */
double asin( doublex);

/* atan  [function; ce-only; CE 5.0..599; coredll.dll] */
double atan(doublex);double atan2(doubley, doublex);

/* atan2  [function; ce-only; CE 5.0..599; entity-headers] */
double atan(doublex);double atan2(doubley, doublex);

/* atof  [function; ce-only; CE 5.0..599; coredll.dll] */
double atof( const char *string);int atoi( const char *string);_int64 _atoi64( const char *string);long atol( const char *string);

/* atol  [function; ce-only; CE 5.0..599; entity-headers] */
double atof( const char *string);int atoi( const char *string);_int64 _atoi64( const char *string);long atol( const char *string);

/* ceil  [function; ce-only; CE 5.0..599; coredll.dll] */
double ceil( doublex);

/* clearerr  [function; ce-only; CE 5.0..599; coredll.dll] */
void clearerr( FILE*stream);

/* cosh  [function; ce-only; CE 5.0..599; entity-headers] */
double cos( double x 
);double cosh( double x 
);

/* div  [function; ce-only; CE 5.0..599; coredll.dll] */
div_t div( intnumer,intdenom);

/* fabs  [function; ce-only; CE 5.0..599; coredll.dll] */
double fabs( doublex);

/* fclose  [function; ce-only; CE 5.0..599; coredll.dll] */
int _fcloseall( void );int fclose( FILE* stream);

/* feof  [function; ce-only; CE 5.0..599; coredll.dll] */
int feof( FILE*stream);

/* ferror  [function; ce-only; CE 5.0..599; coredll.dll] */
int ferror( FILE *stream);

/* fflush  [function; ce-only; CE 5.0..599; coredll.dll] */
int fflush( FILE*stream);

/* fgetc  [function; ce-only; CE 5.0..599; coredll.dll] */
int fgetc( FILE*stream);wint_t fgetwc( FILE*stream);

/* fgetpos  [function; ce-only; CE 5.0..599; coredll.dll] */
int fgetpos( FILE *stream, 
 fpos_t *pos);

/* floor  [function; ce-only; CE 5.0..599; coredll.dll] */
double floor( doublex);

/* fmod  [function; ce-only; CE 5.0..599; coredll.dll] */
double fmod( doublex,double y);

/* fread  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t fread( void*buffer,size_tsize,size_tcount,FILE*stream);

/* frexp  [function; ce-only; CE 5.0..599; coredll.dll] */
double frexp( doublex,int* expptr);

/* fseek  [function; ce-only; CE 5.0..599; coredll.dll] */
int fseek( FILE*stream,longoffset,intorigin);

/* fsetpos  [function; ce-only; CE 5.0..599; coredll.dll] */
int fsetpos( FILE*stream,const fpos_t*pos);

/* ftell  [function; ce-only; CE 5.0..599; coredll.dll] */
long ftell( FILE*stream);

/* fwrite  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t fwrite( const void*buffer,size_tsize,size_tcount,FILE*stream);

/* isalnum  [function; ce-only; CE 5.0..599; coredll.dll] */
int isalnum( int c );int iswalnum( wint_t c);

/* isalpha  [function; ce-only; CE 5.0..599; coredll.dll] */
int isalpha( int c);int iswalpha( wint_tc);

/* iscntrl  [function; ce-only; CE 5.0..599; coredll.dll] */
int iscntrl( int c);int iswcntrl( wint_t c);

/* isdigit  [function; ce-only; CE 5.0..599; coredll.dll] */
int isdigit( int c);int iswdigit( wint_t c);

/* isgraph  [function; ce-only; CE 5.0..599; coredll.dll] */
int isgraph( int c);int iswgraph( wint_t c);

/* islower  [function; ce-only; CE 5.0..599; coredll.dll] */
int islower( int c);int iswlower( wint_t c);

/* isprint  [function; ce-only; CE 5.0..599; coredll.dll] */
int isprint( int c);int iswprint( wint_t c);

/* ispunct  [function; ce-only; CE 5.0..599; coredll.dll] */
int ispunct( int c );int iswpunct( wint_t c);

/* isspace  [function; ce-only; CE 5.0..599; coredll.dll] */
int isspace( int c);int iswspace( wint_t c);

/* isupper  [function; ce-only; CE 5.0..599; coredll.dll] */
int isupper( int c);int iswupper( wint_t c);

/* iswalnum  [function; ce-only; CE 5.0..599; entity-headers] */
int isalnum( int c );int iswalnum( wint_t c);

/* iswalpha  [function; ce-only; CE 5.0..599; entity-headers] */
int isalpha( int c);int iswalpha( wint_tc);

/* iswascii  [function; ce-only; CE 5.0..599; entity-headers] */
int __isascii( int c);int iswascii( wint_t c);

/* iswcntrl  [function; ce-only; CE 5.0..599; entity-headers] */
int iscntrl( int c);int iswcntrl( wint_t c);

/* iswctype  [function; ce-only; CE 5.0..599; entity-headers] */
int _isctype( int c, int desc);int iswctype( wint_tc, 
 wctype_tdesc);

/* iswdigit  [function; ce-only; CE 5.0..599; entity-headers] */
int isdigit( int c);int iswdigit( wint_t c);

/* iswgraph  [function; ce-only; CE 5.0..599; entity-headers] */
int isgraph( int c);int iswgraph( wint_t c);

/* iswlower  [function; ce-only; CE 5.0..599; entity-headers] */
int islower( int c);int iswlower( wint_t c);

/* iswprint  [function; ce-only; CE 5.0..599; entity-headers] */
int isprint( int c);int iswprint( wint_t c);

/* iswpunct  [function; ce-only; CE 5.0..599; entity-headers] */
int ispunct( int c );int iswpunct( wint_t c);

/* iswspace  [function; ce-only; CE 5.0..599; entity-headers] */
int isspace( int c);int iswspace( wint_t c);

/* iswupper  [function; ce-only; CE 5.0..599; entity-headers] */
int isupper( int c);int iswupper( wint_t c);

/* iswxdigit  [function; ce-only; CE 5.0..599; entity-headers] */
int isxdigit( int c);int iswxdigit( wint_t c);

/* isxdigit  [function; ce-only; CE 5.0..599; coredll.dll] */
int isxdigit( int c);int iswxdigit( wint_t c);

/* labs  [function; ce-only; CE 5.0..599; coredll.dll] */
long labs( longn);

/* ldexp  [function; ce-only; CE 5.0..599; coredll.dll] */
double ldexp(doublex,intexp);

/* ldiv  [function; ce-only; CE 5.0..599; coredll.dll] */
ldiv_t ldiv( long intnumer, long intdenom);

/* log10  [function; ce-only; CE 5.0..599; entity-headers] */
double log( doublex);double log10( doublex );

/* longjmp  [function; ce-only; CE 5.0..599; coredll.dll] */
void longjmp( jmp_bufenv,intvalue);

/* malloc  [function; ce-only; CE 5.0..599; coredll.dll] */
void *malloc( size_tsize);

/* mbstowcs  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t mbstowcs( wchar_t*wcstr, const char*mbstr, size_tcount);

/* memcmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int memcmp( const void*buf1, const void*buf2, size_tcount);inline int wmemcmp( const wchar_t*buf1,const wchar_t*buf2,size_tcount);

/* memcpy  [function; ce-only; CE 5.0..599; coredll.dll] */
void *memcpy( void*dest, const void*src, size_tcount);inline wchar_t *wmemcpy( wchar_t*dest,const wchar_t*src,size_tcount);

/* modf  [function; ce-only; CE 5.0..599; coredll.dll] */
double modf( doublex,double*intptr);

/* pow  [function; ce-only; CE 5.0..599; coredll.dll] */
double pow( doublex, doubley);

/* rand  [function; ce-only; CE 5.0..599; coredll.dll] */
int rand( void );

/* realloc  [function; ce-only; CE 5.0..599; coredll.dll] */
void *realloc( void*memblock, size_tsize);

/* setjmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int setjmp( 
jmp_bufenv);

/* sinh  [function; ce-only; CE 5.0..599; entity-headers] */
double sin( doublex);double sinh( doublex);

/* sqrt  [function; ce-only; CE 5.0..599; coredll.dll] */
double sqrt( doublex );

/* srand  [function; ce-only; CE 5.0..599; coredll.dll] */
void srand( unsigned intseed);

/* wmemcmp  [function; ce-only; CE 5.0..599; entity-headers] */
int memcmp( const void*buf1, const void*buf2, size_tcount);inline int wmemcmp( const wchar_t*buf1,const wchar_t*buf2,size_tcount);

/* wmemcpy  [function; ce-only; CE 5.0..599; entity-headers] */
void *memcpy( void*dest, const void*src, size_tcount);inline wchar_t *wmemcpy( wchar_t*dest,const wchar_t*src,size_tcount);

/* wprintf  [function; ce-only; CE 5.0..599; entity-headers] */
int printf( const char*format [,argument]... 
);int wprintf( const wchar_t*format [,argument]... 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* __security_init_cookie  [function; ce-only; CE 6.0..699; corelibc.lib] */
void __security_init_cookie(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
double _cabs( struct _complexz);

#endif /* _STDLIB_ */
