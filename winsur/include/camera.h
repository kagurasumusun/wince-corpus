/* camera.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CAMERA_
#define _CAMERA_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CSPROPERTY_BUFFER_CLIENT_LIMITED 2
#define CSPROPERTY_BUFFER_CLIENT_UNLIMITED 4
#define CSPROPERTY_BUFFER_DRIVER 1

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _tagStreamDescriptor { CSSTREAM_HEADER CsStreamHeader; CS_FRAME_INFO CsFrameInfo; } CS_STREAM_DESCRIPTOR, * PCS_STREAM_DESCRIPTOR;

#endif /* _CAMERA_ */
