/* Obexserver.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _OBEXSERVER_
#define _OBEXSERVER_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* OBEXCOMMAND  [struct; ce-only] */
#ifndef __WINCE_DEFINED__OBEX_COMMAND
#define __WINCE_DEFINED__OBEX_COMMAND
typedef struct _obex_command {
 unsigned int uiOp;
 unsigned int uiResp;
 unsigned int fFinal;
 ObexPacketData sPktData;
 unsigned int cProp;
 unsigned int * aPropID;
 ObexVariant * aPropVar;
} ObexCommand;
#endif /* __WINCE_DEFINED__OBEX_COMMAND */

/* OBEXTRANSACTION  [struct; ce-only] */
#ifndef __WINCE_DEFINED__OBEX_TRANSACTION
#define __WINCE_DEFINED__OBEX_TRANSACTION
typedef struct _obex_transaction {
 unsigned int uiConnectionId;
 unsigned int uiTransactionId;
 unsigned int uiOp;
 ObexCommand * pObex;
 MemAlloc ObexAlloc;
 MemFree ObexFree;
 ServerCallback ObexExecute;
} ObexTransaction;
#endif /* __WINCE_DEFINED__OBEX_TRANSACTION */

/* ServerCallback  [struct; ce-only] */
#ifndef __WINCE_DEFINED_SERVERCALLBACK
#define __WINCE_DEFINED_SERVERCALLBACK
typedef int (*ServerCallback)(unsigned int uiOp,
 unsigned int uiId,
 struct _obex_command * pCommand);
#endif /* __WINCE_DEFINED_SERVERCALLBACK */

/* ServiceCallback  [struct; ce-only] */
#ifndef __WINCE_DEFINED_SERVICECALLBACK
#define __WINCE_DEFINED_SERVICECALLBACK
typedef int (*ServiceCallback)(struct _obex_transaction * pTrans);
#endif /* __WINCE_DEFINED_SERVICECALLBACK */

/* pCommand  [extra struct] */
#ifndef __WINCE_DEFINED_PCOMMAND
#define __WINCE_DEFINED_PCOMMAND
typedef int (*ServerCallback)(unsigned int uiOp, unsigned int uiId, struct _obex_command * pCommand);
#endif /* __WINCE_DEFINED_PCOMMAND */

/* pTrans  [extra struct] */
#ifndef __WINCE_DEFINED_PTRANS
#define __WINCE_DEFINED_PTRANS
typedef int (*ServiceCallback)(struct _obex_transaction * pTrans);
#endif /* __WINCE_DEFINED_PTRANS */

#endif /* _OBEXSERVER_ */
