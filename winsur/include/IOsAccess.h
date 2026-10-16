/* IOsAccess.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _IOSACCESS_
#define _IOSACCESS_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetCvDebugInfo( DWORD* pdwPdbFormat, GUID* pguidPdbSig, DWORD* pdwPdbAgeLPOLESTR* szPdbName );
HRESULT SnapCurrentDeviceState( [in, out] DWORD *pdwDumpType, [in, out] DWORD64 *pdw64DumpTotalSize, [in, out] DWORD *pdwSegmentBufferSize, [out, size_is(,*pdwSegmentBufferSize)] BYTE **ppbSegmentBuffer, [in, out] DWORD64 *pdw64SegmentIndex, [out] BOOL *pfComplete );

#endif /* _IOSACCESS_ */
