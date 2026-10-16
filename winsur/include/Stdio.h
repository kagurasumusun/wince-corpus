/* Stdio.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 69 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _STDIO_
#define _STDIO_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* _getws  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
char *gets( char*buffer);wchar_t *_getws( wchar_t*buffer);

/* _putws  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int puts( const char*string);int _putws( const wchar_t*string);

/* _wfopen  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
FILE *fopen( const char*filename,constchar*mode);FILE *_wfopen( const wchar_t*filename,const wchar_t*mode);

/* fgetwc  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int fgetc( FILE*stream);wint_t fgetwc( FILE*stream);

/* fgetws  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
char *fgets( char*string,intn,FILE*stream);wchar_t *fgetws( wchar_t*string,intn,FILE*stream);

/* fputwc  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int fputc( intc,FILE*stream);wint_t fputwc( wint_tc,FILE*stream);

/* fputws  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int fputs( const char*string,FILE*stream);int fputws( const wchar_t*string,FILE*stream);

/* fwprintf  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int fprintf( FILE* stream,const char*format [, argument ]...
);int fwprintf( FILE*stream,const wchar_t*format [, argument ]...);

/* fwscanf  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int fscanf( FILE*stream, 
 const char*format[, argument]... 
);int fwscanf( FILE*stream,const wchar_t*format[, argument]... 
);

/* getwchar  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int getchar( void );wint_t getwchar( void );

/* putwchar  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int putchar( intc);wint_t putwchar( wint_tc);

/* ungetc  [function; ce-only; CE 3.0..399, 5.0..599; coredll.dll, coresioa.lib] */
int ungetc( int c, FILE *stream );wint_t ungetwc( wint_t c, FILE *stream );

/* ungetwc  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int ungetc( int c, FILE *stream );wint_t ungetwc( wint_t c, FILE *stream );

/* vfwprintf  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int vfprintf( FILE *stream, constchar *format, va_list argptr );int vfwprintf( FILE *stream, constwchar_t *format, va_listargptr);

/* wscanf  [function; ce-only; CE 3.0..399, 5.0..599; coresiow.lib] */
int scanf( const char*format [,argument]... 
);int wscanf( const wchar_t*format [,argument]...
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* _snwprintf  [function; ce-only; CE 5.0..599; entity-headers] */
int _snprintf(
 char *buffer,
 size_tcount, 
 const char *format [,
 argument] ... );int _snwprintf( wchar_t *buffer,
 size_tcount, 
 const wchar_t *format [,
 argument] ... );

/* _stricmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int _stricmp( const char *string1, const char *string2 );int _wcsicmp( const wchar_t *string1, constwchar_t *string2);

/* _strlwr  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_strlwr( char *string );wchar_t *_wcslwr( wchar_t *string);

/* _strnicmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int _strnicmp( const char *string1, const char *string2, size_t count );int _wcsnicmp( const wchar_t *string1, constwchar_t *string2, size_t count);

/* _strnset  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_strnset( char *string, int c, size_t count );wchar_t *_wcsnset( wchar_t *string, wchar_tc, size_tcount );

/* _strrev  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_strrev( char *string );wchar_t *_wcsrev( wchar_t *string);

/* _strset  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_strset( char *string, int c );wchar_t *_wcsset( wchar_t *string, wchar_tc );

/* _strupr  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_strupr( char *string );wchar_t *_wcsupr( wchar_t *string);

/* _ultoa  [function; ce-only; CE 5.0..599; coredll.dll] */
char *_ultoa( unsigned long value, char *string, int radix );wchar_t *_ultow( unsigned long value, wchar_t *string, int radix );

/* _ultow  [function; ce-only; CE 5.0..599; entity-headers] */
char *_ultoa( unsigned long value, char *string, int radix );wchar_t *_ultow( unsigned long value, wchar_t *string, int radix );

/* _wcsicmp  [function; ce-only; CE 5.0..599; entity-headers] */
int _stricmp( const char *string1, const char *string2 );int _wcsicmp( const wchar_t *string1, constwchar_t *string2);

/* _wcslwr  [function; ce-only; CE 5.0..599; entity-headers] */
char *_strlwr( char *string );wchar_t *_wcslwr( wchar_t *string);

/* _wcsnicmp  [function; ce-only; CE 5.0..599; entity-headers] */
int _strnicmp( const char *string1, const char *string2, size_t count );int _wcsnicmp( const wchar_t *string1, constwchar_t *string2, size_t count);

/* _wcsnset  [function; ce-only; CE 5.0..599; entity-headers] */
char *_strnset( char *string, int c, size_t count );wchar_t *_wcsnset( wchar_t *string, wchar_tc, size_tcount );

/* _wcsrev  [function; ce-only; CE 5.0..599; entity-headers] */
char *_strrev( char *string );wchar_t *_wcsrev( wchar_t *string);

/* _wcsset  [function; ce-only; CE 5.0..599; entity-headers] */
char *_strset( char *string, int c );wchar_t *_wcsset( wchar_t *string, wchar_tc );

/* _wcsupr  [function; ce-only; CE 5.0..599; entity-headers] */
char *_strupr( char *string );wchar_t *_wcsupr( wchar_t *string);

/* _wfdopen  [function; ce-only; CE 5.0..599; coredll.dll] */
FILE *_wfdopen( inthandle, constwchar_t *mode);

/* _wtoi  [function; ce-only; CE 5.0..599; coredll.dll] */
int _wtoi( const wchar_t *string );int _wtol( const wchar_t *string );

/* _wtol  [function; ce-only; CE 5.0..599; entity-headers] */
int _wtoi( const wchar_t *string );int _wtol( const wchar_t *string );

/* setvbuf  [function; ce-only; CE 5.0..599; coredll.dll] */
int setvbuf(
 FILE*stream,char*buffer,intmode,size_tsize);

/* strcat  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strcat( char *strDestination, const char *strSource);wchar_t *wcscat( wchar_t *strDestination, const wchar_t *strSource);

/* strchr  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strchr( const char *string, intc);wchar_t *wcschr( const wchar_t *string, wchar_tc );

/* strcmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int strcmp( const char *string1, const char *string2);int wcscmp( const wchar_t *string1, const wchar_t *string2);

/* strcpy  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strcpy( char *strDestination, const char *strSource);wchar_t *wcscpy( wchar_t *strDestination, const wchar_t *strSource);

/* strcspn  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t strcspn( const char *string, const char *strCharSet);size_t wcscspn( const wchar_t *string, const wchar_t *strCharSet);

/* strncat  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strncat( char *strDest, const char *strSource, size_tcount);wchar_t *wcsncat( wchar_t *strDest, const wchar_t *strSource, size_tcount);

/* strncmp  [function; ce-only; CE 5.0..599; coredll.dll] */
int strncmp( const char *string1, const char *string2, size_tcount);int wcsncmp( const wchar_t *string1, const wchar_t *string2, size_tcount);

/* strncpy  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strncpy( char *strDest, constchar *strSource, size_tcount);wchar_t *wcsncpy( wchar_t *strDest, constwchar_t *strSource, size_tcount);

/* strpbrk  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strpbrk( const char *string, const char *strCharSet );wchar_t *wcspbrk( const wchar_t *string, constwchar_t *strCharSet);

/* strrchr  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strrchr( const char *string, int c );wchar *wcsrchr( const wchar_t *string, intc );

/* strspn  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t strspn( const char *string, const char *strCharSet );size_t wcsspn( const wchar_t *string, const wchar_t *strCharSet);

/* strstr  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strstr( const char *string, constchar *strCharSet);wchar_t *wcsstr( const wchar_t *string, constwchar_t *strCharSet);

/* strtok  [function; ce-only; CE 5.0..599; coredll.dll] */
char *strtok( char *strToken, constchar *strDelimit );wchar_t *wcstok( wchar_t *strToken, const wchar_t *strDelimit);

/* strtol  [function; ce-only; CE 5.0..599; coredll.dll] */
long strtol( const char *nptr, char **endptr, int base );long wcstol( const wchar_t *nptr, wchar_t **endptr, intbase);

/* swprintf  [function; ce-only; CE 5.0..599; entity-headers] */
int sprintf( char *buffer, const char *format [, argument] ... );int swprintf( wchar_t *buffer, const wchar_t *format [, argument] ... );

/* swscanf  [function; ce-only; CE 5.0..599; entity-headers] */
int sscanf( const char *buffer, const char *format [, argument ] ... );int swscanf( const wchar_t *buffer, const wchar_t *format [, argument ] ... );

/* wcscat  [function; ce-only; CE 5.0..599; entity-headers] */
char *strcat( char *strDestination, const char *strSource);wchar_t *wcscat( wchar_t *strDestination, const wchar_t *strSource);

/* wcschr  [function; ce-only; CE 5.0..599; entity-headers] */
char *strchr( const char *string, intc);wchar_t *wcschr( const wchar_t *string, wchar_tc );

/* wcscmp  [function; ce-only; CE 5.0..599; entity-headers] */
int strcmp( const char *string1, const char *string2);int wcscmp( const wchar_t *string1, const wchar_t *string2);

/* wcscpy  [function; ce-only; CE 5.0..599; entity-headers] */
char *strcpy( char *strDestination, const char *strSource);wchar_t *wcscpy( wchar_t *strDestination, const wchar_t *strSource);

/* wcscspn  [function; ce-only; CE 5.0..599; entity-headers] */
size_t strcspn( const char *string, const char *strCharSet);size_t wcscspn( const wchar_t *string, const wchar_t *strCharSet);

/* wcsncat  [function; ce-only; CE 5.0..599; entity-headers] */
char *strncat( char *strDest, const char *strSource, size_tcount);wchar_t *wcsncat( wchar_t *strDest, const wchar_t *strSource, size_tcount);

/* wcsncmp  [function; ce-only; CE 5.0..599; entity-headers] */
int strncmp( const char *string1, const char *string2, size_tcount);int wcsncmp( const wchar_t *string1, const wchar_t *string2, size_tcount);

/* wcsncpy  [function; ce-only; CE 5.0..599; entity-headers] */
char *strncpy( char *strDest, constchar *strSource, size_tcount);wchar_t *wcsncpy( wchar_t *strDest, constwchar_t *strSource, size_tcount);

/* wcspbrk  [function; ce-only; CE 5.0..599; entity-headers] */
char *strpbrk( const char *string, const char *strCharSet );wchar_t *wcspbrk( const wchar_t *string, constwchar_t *strCharSet);

/* wcsrchr  [function; ce-only; CE 5.0..599; entity-headers] */
char *strrchr( const char *string, int c );wchar *wcsrchr( const wchar_t *string, intc );

/* wcsspn  [function; ce-only; CE 5.0..599; entity-headers] */
size_t strspn( const char *string, const char *strCharSet );size_t wcsspn( const wchar_t *string, const wchar_t *strCharSet);

/* wcsstr  [function; ce-only; CE 5.0..599; entity-headers] */
char *strstr( const char *string, constchar *strCharSet);wchar_t *wcsstr( const wchar_t *string, constwchar_t *strCharSet);

/* wcstod  [function; ce-only; CE 5.0..599; coredll.dll] */
double wcstod( const wchar_t *nptr, wchar_t **endptr);

/* wcstok  [function; ce-only; CE 5.0..599; entity-headers] */
char *strtok( char *strToken, constchar *strDelimit );wchar_t *wcstok( wchar_t *strToken, const wchar_t *strDelimit);

/* wcstol  [function; ce-only; CE 5.0..599; entity-headers] */
long strtol( const char *nptr, char **endptr, int base );long wcstol( const wchar_t *nptr, wchar_t **endptr, intbase);

/* wcstombs  [function; ce-only; CE 5.0..599; coredll.dll] */
size_t wcstombs( char *mbstr, constwchar_t *wcstr, size_tcount);

/* wcstoul  [function; ce-only; CE 5.0..599; coredll.dll] */
long strtol( const char *nptr, char **endptr, int base );unsigned long wcstoul( const wchar_t *nptr, wchar_t **endptr, intbase);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef int bool;

#endif /* _STDIO_ */
