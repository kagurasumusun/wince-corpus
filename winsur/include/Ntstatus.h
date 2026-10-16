/* Ntstatus.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _NTSTATUS_
#define _NTSTATUS_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* callback */
typedef STATUS (  *CLIENT_CALLBACK)  ( CARD_EVENT CardEvent  CARD_SOCKET_HANDLE hSocket  PCARD_EVENT_PARMS pCardEventParms );

/* function */
NDIS STATUS_NdisIMQueueMiniportCallback (IN NDIS_HANDLE MiniportAdapterHandle,IN W_MINIPORT_CALLBACKCallbackRoutine,IN PVOIDCallbackContext);

#endif /* _NTSTATUS_ */
