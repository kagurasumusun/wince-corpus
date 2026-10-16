/* Sockserv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SOCKSERV_
#define _SOCKSERV_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WIN_CAP_ATTRIBUTE 0x02
#define WIN_CAP_COMMON 0x01
#define WIN_CAP_IO 0x04
#define WIN_CAP_WAIT 0x80

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* PDCardGetAdapter  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardGetAdapter(
 UINT32 uSocket,
 PPDCARD_ADAPTER_STATE pState 
);

/* PDCardGetSocket  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardGetSocket(
 UINT32 uSocket,
 PPDCARD_SOCKET_STATE pState 
);

/* PDCardGetWindow  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardGetWindow(
 UINT32 uWindow,
 PPDCARD_WINDOW_STATE pWindowState 
);

/* PDCardInquireAdapter  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardInquireAdapter(
 PPDCARD_ADAPTER_INFO pAdapterInfo 
);

/* PDCardInquireWindow  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardInquireWindow(
 UINT32 uWindow,
 PPDCARD_WINDOW_INFO pWinInfo 
);

/* PDCardReadAttrByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
UINT8 PDCardReadAttrByte(
 PVOID pCardMem,
 UINT32 uOffset 
);

/* PDCardReadCmnByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
UINT8 PDCardReadCmnByte(
 PVOID pCardMem, 
 UINT32 uOffset
);

/* PDCardResetSocket  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardResetSocket(
 UINT32 uSocket 
);

/* PDCardSetAdapter  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardSetAdapter(
 UINT32 uSocket,
 PPDCARD_ADAPTER_STATE pState 
);

/* PDCardSetSocket  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardSetSocket(
 UINT32 uSocket,
 PPDCARD_SOCKET_STATE pState 
);

/* PDCardSetWindow  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardSetWindow(
 UINT32 uWindow,
 PPDCARD_WINDOW_STATE pWindowState 
);

/* PDCardWriteAttrByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
VOID PDCardWriteAttrByte(
 PVOID pCardMem,
 UINT32 uOffset,
 UINT8 uByte 
);

/* PDCardWriteCmnByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
VOID PDCardWriteCmnByte(
 PVOID pCardMem,
 UINT32 uOffset,
 UINT8 uByte 
);
#endif /* _WIN32_WCE */

#endif /* _SOCKSERV_ */
