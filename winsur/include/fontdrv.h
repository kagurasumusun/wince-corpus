/* fontdrv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FONTDRV_
#define _FONTDRV_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FDDESTROYFONT  [function; ce-only; CE 6.0..699] */
VOID FDDESTROYFONT(FONTOBJ *pfo);

/* FDGETFONTTABLE  [function; ce-only; CE 6.0..699] */
LONG FDGETFONTTABLE (
 ULONG_PTR iFile,
 ULONG ulFont,
 ULONG ulTag,
 PTRDIFF dpStart,
 ULONG cjBuf,
 BYTE *pjBuf,
 PBYTE *ppjTable,
 ULONG *pcjTable
);

/* FDLOADFONTFILE  [function; ce-only; CE 6.0..699] */
ULONG_PTR FDLOADFONTFILE(
 ULONG cFiles,
 ULONG_PTR *piFile,
 PVOID *ppvView,
 ULONG *pcjView,
 DESIGNVECTOR *pdv,
 ULONG ulLangID,
 ULONG ulFastCheckSum
);

/* FDQUERYFONT  [function; ce-only; CE 6.0..699] */
PIFIMETRICS FDQUERYFONT(
 DHPDEV dhpdev,
 ULONG_PTR iFile,
 ULONG iFace,
 ULONG_PTR *pid
);

/* FDQUERYFONTDATA  [function; ce-only; CE 6.0..699] */
LONG FDQUERYFONTDATA(
 DHPDEV dhpdev,
 FONTOBJ *pfo,
 ULONG iMode,
 HGLYPH hg,
 GLYPHDATA *pgd,
 PVOID pv,
 ULONG cjSize
);

/* FDQUERYFONTFILE  [function; ce-only; CE 6.0..699] */
LONG FDQUERYFONTFILE(
 ULONG_PTR iFile,
 ULONG ulMode,
 ULONG cjBuf,
 ULONG *pulBuf
);

/* FDUNLOADFONTFILE  [function; ce-only; CE 6.0..699] */
BOOL FDUNLOADFONTFILE(ULONG_PTR iFile);
#endif /* _WIN32_WCE */

#endif /* _FONTDRV_ */
