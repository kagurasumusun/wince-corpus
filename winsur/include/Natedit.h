/* Natedit.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _NATEDIT_
#define _NATEDIT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IP_NAT_DIRECTION  [enum; ce-only; CE 3.0..399, 5.0..699; Coredll.dll] */
enum IP_NAT_DIRECTION {
 NatInboundDirection,
 NatOutboundDirection
};

/* IP_NAT_REGISTER_EDITOR  [struct; ce-only; CE 3.0..399, 5.0..699; Coredll.dll] */
typedef struct {
 ULONG Version;
 ULONG Flags;
 UCHAR Protocol;
 USHORT Port;
 IP_NAT_DIRECTION Direction;
 PVOID EditorContext;
 PNAT_EDITOR_CREATE_HANDLER CreateHandler;
 PNAT_EDITOR_DELETE_HANDLER DeleteHandler;
 PNAT_EDITOR_DATA_HANDLER ForwardDataHandler;
 PNAT_EDITOR_DATA_HANDLER ReverseDataHandler;
 PVOID EditorHandle;
 PNAT_EDITOR_CREATE_TICKET CreateTicket;
 PNAT_EDITOR_DELETE_TICKET DeleteTicket;
 PNAT_EDITOR_DEREGISTER Deregister;
 PNAT_EDITOR_DISSOCIATE_SESSION DissociateSession;
 PNAT_EDITOR_EDIT_SESSION EditSession;
 PNAT_EDITOR_QUERY_INFO_SESSION QueryInfoSession;
 PNAT_EDITOR_TIMEOUT_SESSION TimeoutSession;
} IP_NAT_REGISTER_EDITOR;

/* IP_NAT_SESSION_MAPPING_STATISTICS  [struct; ce-only; CE 3.0..399, 5.0..699; Coredll.dll] */
typedef struct {
 ULONG64 BytesForward;
 ULONG64 BytesReverse;
 ULONG64 PacketsForward;
 ULONG64 PacketsReverse;
 ULONG64 RejectsForward;
 ULONG64 RejectsReverse;
} IP_NAT_SESSION_MAPPING_STATISTICS;

/* IPRcvBuf  [struct; ce-only; CE 3.0..399, 5.0..699; Coredll.dll] */
typedef struct {
 struct IPRcvBuf* ipr_next;
 uint ipr_reserved1;
 uchar* ipr_buffer;
 uint ipr_size;
 uint ipr_reserved2;
} IPRcvBuf;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* LogDroppedPacket  [callback; ce-only; CE 5.0..699; Coredll.dll, coredll.dll] */
typedef VOID (*PNAT_LOG_DROPPED_PACKET)(
 DWORD SourceAddr,
 DWORD DestAddr, 
 USHORT SourcePort, 
 USHORT DestPort, 
 DWORD PacketSize,
 BYTE Protocol,
 DWORD Proto1, 
 DWORD Proto2,
 DWORD Proto3, 
 DWORD Proto4
);

/* LogInit  [callback; ce-only; CE 5.0..699; Coredll.dll, coredll.dll] */
typedef VOID (*PNAT_LOG_INIT) ();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum IP_NAT_DIRECTION {NatInboundDirection,NatOutboundDirection};

#endif /* _NATEDIT_ */
