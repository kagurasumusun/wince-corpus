/* Ddgpe.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 6 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _DDGPE_
#define _DDGPE_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDGPEAllocSurfaceData  [struct, macro; ce-only; Ddgpe.lib] */

/* DDGPEBltParams  [struct, macro; ce-only; Ddgpe.lib] */

/* DDGPEDriverData  [struct; ce-only; Ddgpe.lib] */

/* DDGPEStandardHeader  [macro; ce-only; Ddgpe.lib] */

/* EDDGPEPixelFormat  [enum; ce-only; Ddgpe.lib] */

/* GPEModeEx  [struct, macro; ce-only; Ddgpe.lib] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void SetOverlay();
void SetRotation(int width, int height, int iRotate);
int SurfaceSize();

#endif /* _DDGPE_ */
