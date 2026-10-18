/* Avc_unit.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _AVC_UNIT_
#define _AVC_UNIT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* UNIT_AllocateLocalPlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_ALLOCATELOCALPLUG_REQUEST
#define __WINCE_DEFINED_UNIT_ALLOCATELOCALPLUG_REQUEST
typedef struct {PVOID ualp_RegistrationToken;STREAM_MediaType ualp_MediaType;ULONG ualp_Direction;ULONG ualp_Flags;ULONG ualp_SubunitPlugID;union { ULONG ualp_MaximumThroughput; struct {ULONG ualp_ClusterDimension;ULONG ualp_SampleFrequency; }; };} UNIT_AllocateLocalPlug_Request;
#endif /* __WINCE_DEFINED_UNIT_ALLOCATELOCALPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PUNIT_ALLOCATELOCALPLUG_REQUEST
#define __WINCE_DEFINED_PUNIT_ALLOCATELOCALPLUG_REQUEST
typedef UNIT_AllocateLocalPlug_Request *PUNIT_AllocateLocalPlug_Request, *LPUNIT_AllocateLocalPlug_Request;
#endif /* __WINCE_DEFINED_PUNIT_ALLOCATELOCALPLUG_REQUEST */

/* UNIT_AllocateLocalPlug_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_ALLOCATELOCALPLUG_RESPONSE
#define __WINCE_DEFINED_UNIT_ALLOCATELOCALPLUG_RESPONSE
typedef struct {HANDLE ualp_Plug;ULONG ualp_PlugNumber;} UNIT_AllocateLocalPlug_Response;
#endif /* __WINCE_DEFINED_UNIT_ALLOCATELOCALPLUG_RESPONSE */
#ifndef __WINCE_DEFINED_PUNIT_ALLOCATELOCALPLUG_RESPONSE
#define __WINCE_DEFINED_PUNIT_ALLOCATELOCALPLUG_RESPONSE
typedef UNIT_AllocateLocalPlug_Response *PUNIT_AllocateLocalPlug_Response, *LPUNIT_AllocateLocalPlug_Response;
#endif /* __WINCE_DEFINED_PUNIT_ALLOCATELOCALPLUG_RESPONSE */

/* UNIT_ConnectionRequestProcessed_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_CONNECTIONREQUESTPROCESSED_REQUEST
#define __WINCE_DEFINED_UNIT_CONNECTIONREQUESTPROCESSED_REQUEST
typedef struct {PVOID ucrp_RegistrationToken;PVOID ucrp_Request;NTSTATUS ucrp_Status;} UNIT_ConnectionRequestProcessed_Request;
#endif /* __WINCE_DEFINED_UNIT_CONNECTIONREQUESTPROCESSED_REQUEST */
#ifndef __WINCE_DEFINED_PUNIT_CONNECTIONREQUESTPROCESSED_REQUEST
#define __WINCE_DEFINED_PUNIT_CONNECTIONREQUESTPROCESSED_REQUEST
typedef UNIT_ConnectionRequestProcessed_Request *PUNIT_ConnectionRequestProcessed_Request, *LPUNIT_ConnectionRequestProcessed_Request;
#endif /* __WINCE_DEFINED_PUNIT_CONNECTIONREQUESTPROCESSED_REQUEST */

/* UNIT_DereferenceConnectionPlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_DEREFERENCECONNECTIONPLUG_REQUEST
#define __WINCE_DEFINED_UNIT_DEREFERENCECONNECTIONPLUG_REQUEST
typedef struct {PVOID udcp_RegistrationToken;HANDLE udcp_Plug;} UNIT_DereferenceConnectionPlug_Request;
#endif /* __WINCE_DEFINED_UNIT_DEREFERENCECONNECTIONPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PUNIT_DEREFERENCECONNECTIONPLUG_REQUEST
#define __WINCE_DEFINED_PUNIT_DEREFERENCECONNECTIONPLUG_REQUEST
typedef UNIT_DereferenceConnectionPlug_Request *PUNIT_DereferenceConnectionPlug_Request, *LPUNIT_DereferenceConnectionPlug_Request;
#endif /* __WINCE_DEFINED_PUNIT_DEREFERENCECONNECTIONPLUG_REQUEST */

/* UNIT_FreeLocalPlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_FREELOCALPLUG_REQUEST
#define __WINCE_DEFINED_UNIT_FREELOCALPLUG_REQUEST
typedef struct {PVOID uflp_RegistrationToken;HANDLE uflp_Plug;} UNIT_FreeLocalPlug_Request;
#endif /* __WINCE_DEFINED_UNIT_FREELOCALPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PUNIT_FREELOCALPLUG_REQUEST
#define __WINCE_DEFINED_PUNIT_FREELOCALPLUG_REQUEST
typedef UNIT_FreeLocalPlug_Request *PUNIT_FreeLocalPlug_Request, *LPUNIT_FreeLocalPlug_Request;
#endif /* __WINCE_DEFINED_PUNIT_FREELOCALPLUG_REQUEST */

/* UNIT_ProcessRegistryPlugs_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_PROCESSREGISTRYPLUGS_REQUEST
#define __WINCE_DEFINED_UNIT_PROCESSREGISTRYPLUGS_REQUEST
typedef struct {PVOID uprp_RegistrationToken;HANDLE uprp_RootKey;} UNIT_ProcessRegistryPlugs_Request;
#endif /* __WINCE_DEFINED_UNIT_PROCESSREGISTRYPLUGS_REQUEST */
#ifndef __WINCE_DEFINED_PUNIT_PROCESSREGISTRYPLUGS_REQUEST
#define __WINCE_DEFINED_PUNIT_PROCESSREGISTRYPLUGS_REQUEST
typedef UNIT_ProcessRegistryPlugs_Request *PUNIT_ProcessRegistryPlugs_Request, *LPUNIT_ProcessRegistryPlugs_Request;
#endif /* __WINCE_DEFINED_PUNIT_PROCESSREGISTRYPLUGS_REQUEST */

/* UNIT_QueryLocalPlugs_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_QUERYLOCALPLUGS_REQUEST
#define __WINCE_DEFINED_UNIT_QUERYLOCALPLUGS_REQUEST
typedef struct {PVOID uqlp_RegistrationToken;ULONG uqlp_Flags;} UNIT_QueryLocalPlugs_Request;
#endif /* __WINCE_DEFINED_UNIT_QUERYLOCALPLUGS_REQUEST */
#ifndef __WINCE_DEFINED_PUNIT_QUERYLOCALPLUGS_REQUEST
#define __WINCE_DEFINED_PUNIT_QUERYLOCALPLUGS_REQUEST
typedef UNIT_QueryLocalPlugs_Request *PUNIT_QueryLocalPlugs_Request, *LPUNIT_QueryLocalPlugs_Request;
#endif /* __WINCE_DEFINED_PUNIT_QUERYLOCALPLUGS_REQUEST */

/* UNIT_QueryLocalPlugs_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_QUERYLOCALPLUGS_RESPONSE
#define __WINCE_DEFINED_UNIT_QUERYLOCALPLUGS_RESPONSE
typedef struct {BOOL uqlp_PlugState;ULONG uqlp_PlugNumber;ULONG uqlp_Direction;ULONG uqlp_MediaType;HANDLE uqlp_Plug;} UNIT_QueryLocalPlugs_Response;
#endif /* __WINCE_DEFINED_UNIT_QUERYLOCALPLUGS_RESPONSE */
#ifndef __WINCE_DEFINED_PUNIT_QUERYLOCALPLUGS_RESPONSE
#define __WINCE_DEFINED_PUNIT_QUERYLOCALPLUGS_RESPONSE
typedef UNIT_QueryLocalPlugs_Response *PUNIT_QueryLocalPlugs_Response, *LPUNIT_QueryLocalPlugs_Response;
#endif /* __WINCE_DEFINED_PUNIT_QUERYLOCALPLUGS_RESPONSE */

/* UNIT_RegisterSubunit_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_UNIT_REGISTERSUBUNIT_RESPONSE
#define __WINCE_DEFINED_UNIT_REGISTERSUBUNIT_RESPONSE
typedef struct {PVOID urs_RegistrationToken;} UNIT_RegisterSubunit_Response;
#endif /* __WINCE_DEFINED_UNIT_REGISTERSUBUNIT_RESPONSE */
#ifndef __WINCE_DEFINED_PUNIT_REGISTERSUBUNIT_RESPONSE
#define __WINCE_DEFINED_PUNIT_REGISTERSUBUNIT_RESPONSE
typedef UNIT_RegisterSubunit_Response *PUNIT_RegisterSubunit_Response, *LPUNIT_RegisterSubunit_Response;
#endif /* __WINCE_DEFINED_PUNIT_REGISTERSUBUNIT_RESPONSE */

#endif /* _AVC_UNIT_ */
