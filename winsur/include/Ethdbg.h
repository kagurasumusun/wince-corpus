/* Ethdbg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _ETHDBG_
#define _ETHDBG_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define EDBG_BOOTLOAD_FORCE_DOWNLOAD 0x0001
#define EDBG_CURRENT_BOOTME_VERSION 2

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 3.0..399 */

/* EdbgDeregisterClient  [function; ce-only; CE 3.0..399; Edbg.dll, Ethdbg.dll, Ethdbg.lib] */
BOOL EdbgDeregisterClient( 
UCHAR Id );

/* EdbgRecv  [function; ce-only; CE 3.0..399; Edbg.dll, Ethdbg.lib] */
BOOL EdbgRecv( 
UCHAR Id, 
UCHAR *pRecvBuf, 
DWORD *pdwLen, 
DWORD Timeout );

/* EdbgRegisterClient  [function; ce-only; CE 3.0..399; Edbg.dll, Ethdbg.lib] */
BOOL EdbgRegisterClient( 
UCHAR *pId, 
char *ServiceName, 
UCHAR Flags, 
char *EshellServer, 
char *DeviceName );

/* EdbgResetDevice  [function; ce-only; CE 3.0..399] */
BOOL EdbgResetDevice( 
CHAR *DeviceName, 
UCHAR Id, 
BOOL CleanBoot );

/* EdbgSend  [function; ce-only; CE 3.0..399; Edbg.dll, Ethdbg.lib] */
BOOL EdbgSend( 
UCHAR Id, 
UCHAR *pUserData , 
DWORD dwUserDataLen );
#endif /* _WIN32_WCE */

#endif /* _ETHDBG_ */
