/* processthreadsapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PROCESSTHREADSAPI_
#define _PROCESSTHREADSAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define STARTF_FORCEOFFFEEDBACK 0x00000080
#define STARTF_FORCEONFEEDBACK 0x00000040
#define STARTF_PREVENTPINNING 0x00002000
#define STARTF_RUNFULLSCREEN 0x00000020
#define STARTF_TITLEISAPPID 0x00001000
#define STARTF_TITLEISLINKNAME 0x00000800
#define STARTF_UNTRUSTEDSOURCE 0x00008000
#define STARTF_USECOUNTCHARS 0x00000008
#define STARTF_USEFILLATTRIBUTE 0x00000010
#define STARTF_USEHOTKEY 0x00000200
#define STARTF_USEPOSITION 0x00000004
#define STARTF_USESHOWWINDOW 0x00000001
#define STARTF_USESIZE 0x00000002
#define STARTF_USESTDHANDLES 0x00000100

#endif /* _PROCESSTHREADSAPI_ */
