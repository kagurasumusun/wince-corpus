/* MediaQueryEngine.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 33 extra decls
 */
#ifndef _MEDIAQUERYENGINE_HPP_
#define _MEDIAQUERYENGINE_HPP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DeviceStatus_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_DEVICESTATUS_E
#define __WINCE_DEFINED_DEVICESTATUS_E
enum DeviceStatus_e {
 DETACHED = 0,
 ATTACHED,
 ACTIVE
};
#endif /* __WINCE_DEFINED_DEVICESTATUS_E */

/* Item_Attribute_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_ITEM_ATTRIBUTE_E
#define __WINCE_DEFINED_ITEM_ATTRIBUTE_E
enum Item_Attribute_e {
 Attr_Title = 0,
 Attr_Class,
 Attr_UpnpItemId,
 Attr_UpnpParentId,
 Attr_URI,
 Attr_Date,
 Attr_Artist,
 Attr_Actor,
 Attr_Album,
 Attr_AlbumArtURI,
 Attr_Genre,
 Attr_Rating,
 Attr_ResSize,
 Attr_ResDuration,
 Attr_ResResolution,
 Attr_ResColorDepth,
 Attr_MusicSampleFrequency,
 Attr_MusicAudioChannels,
 Attr_Description,
 Attr_ProtocolInfo
};
#endif /* __WINCE_DEFINED_ITEM_ATTRIBUTE_E */

/* MediaType_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_MEDIATYPE_E
#define __WINCE_DEFINED_MEDIATYPE_E
enum MediaType_e {
 Music = 0,
 Video,
 Picture,
 Playlist,
 MusicAlbum,
 VideoAlbum,
 PictureAlbum,
 MusicArtist,
 MovieActor,
 PictureDateFolder,
 MusicGenre,
 VideoGenre
};
#endif /* __WINCE_DEFINED_MEDIATYPE_E */

/* QueryEngineState_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_QUERYENGINESTATE_E
#define __WINCE_DEFINED_QUERYENGINESTATE_E
enum QueryEngineState_e {
 UnInitialized = 0,
 Error,
 Stopped,
 Running
};
#endif /* __WINCE_DEFINED_QUERYENGINESTATE_E */

/* QuerySinkEvent_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_QUERYSINKEVENT_E
#define __WINCE_DEFINED_QUERYSINKEVENT_E
enum QuerySinkEvent_e {
 MQE_EVENT_NETWORKAVAILABLE = 0,
 MQE_EVENT_NETWORKNOTAVAILABLE,
 MQE_EVENT_SERVERCONNECTED,
 MQE_EVENT_SERVERDISCONNECTED,
 MQE_EVENT_SERVERACTIVATED,
 MQE_EVENT_SERVERDEACTIVATED,
 MQE_EVENT_DEVICEAUTHORIZED,
 MQE_EVENT_DEVICEAUTHORIZATIONREVOKED,
 MQE_EVENT_DEVICEREGISTERED,
 MQE_EVENT_DEVICEREGISTRATIONREVOKED,
 MQE_EVENT_CONTENTUPDATE_MUSIC,
 MQE_EVENT_CONTENTUPDATE_VIDEO,
 MQE_EVENT_CONTENTUPDATE_PICTURE,
 MQE_EVENT_CRITICALERROR
};
#endif /* __WINCE_DEFINED_QUERYSINKEVENT_E */

/* SearchBy_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_SEARCHBY_E
#define __WINCE_DEFINED_SEARCHBY_E
enum SearchBy_e {
 SearchBy_None = 0,
 SearchBy_Title,
 SearchBy_Artist,
 SearchBy_Actor,
 SearchBy_Album,
 SearchBy_Genre,
 SearchBy_Date
};
#endif /* __WINCE_DEFINED_SEARCHBY_E */

/* SortBy_e  [enum; ce-only; MQELib.lib] */
#ifndef __WINCE_DEFINED_SORTBY_E
#define __WINCE_DEFINED_SORTBY_E
enum SortBy_e {
 SortBy_None = 0,
 SortBy_Name_Ascending,
 SortBy_Name_Descending,
 SortBy_Date_Ascending,
 SortBy_Date_Descending
};
#endif /* __WINCE_DEFINED_SORTBY_E */

/* Attr_ProtocolInfo  [extra enum] */
#ifndef __WINCE_DEFINED_ITEM_ATTRIBUTE_E
#define __WINCE_DEFINED_ITEM_ATTRIBUTE_E
enum Item_Attribute_e {
 Attr_Title = 0,
 Attr_Class,
 Attr_UpnpItemId,
 Attr_UpnpParentId,
 Attr_URI,
 Attr_Date,
 Attr_Artist,
 Attr_Actor,
 Attr_Album,
 Attr_AlbumArtURI,
 Attr_Genre,
 Attr_Rating,
 Attr_ResSize,
 Attr_ResDuration,
 Attr_ResResolution,
 Attr_ResColorDepth,
 Attr_MusicSampleFrequency,
 Attr_MusicAudioChannels,
 Attr_Description,
 Attr_ProtocolInfo
};
#endif /* __WINCE_DEFINED_ITEM_ATTRIBUTE_E */

/* VideoGenre  [extra enum] */
#ifndef __WINCE_DEFINED_MEDIATYPE_E
#define __WINCE_DEFINED_MEDIATYPE_E
enum MediaType_e {
 Music = 0,
 Video,
 Picture,
 Playlist,
 MusicAlbum,
 VideoAlbum,
 PictureAlbum,
 MusicArtist,
 MovieActor,
 PictureDateFolder,
 MusicGenre,
 VideoGenre
};
#endif /* __WINCE_DEFINED_MEDIATYPE_E */

/* Running  [extra enum] */
#ifndef __WINCE_DEFINED_QUERYENGINESTATE_E
#define __WINCE_DEFINED_QUERYENGINESTATE_E
enum QueryEngineState_e {
 UnInitialized = 0,
 Error,
 Stopped,
 Running
};
#endif /* __WINCE_DEFINED_QUERYENGINESTATE_E */

/* MQE_EVENT_CRITICALERROR  [extra enum] */
#ifndef __WINCE_DEFINED_QUERYSINKEVENT_E
#define __WINCE_DEFINED_QUERYSINKEVENT_E
enum QuerySinkEvent_e {
 MQE_EVENT_NETWORKAVAILABLE = 0,
 MQE_EVENT_NETWORKNOTAVAILABLE,
 MQE_EVENT_SERVERCONNECTED,
 MQE_EVENT_SERVERDISCONNECTED,
 MQE_EVENT_SERVERACTIVATED,
 MQE_EVENT_SERVERDEACTIVATED,
 MQE_EVENT_DEVICEAUTHORIZED,
 MQE_EVENT_DEVICEAUTHORIZATIONREVOKED,
 MQE_EVENT_DEVICEREGISTERED,
 MQE_EVENT_DEVICEREGISTRATIONREVOKED,
 MQE_EVENT_CONTENTUPDATE_MUSIC,
 MQE_EVENT_CONTENTUPDATE_VIDEO,
 MQE_EVENT_CONTENTUPDATE_PICTURE,
 MQE_EVENT_CRITICALERROR
};
#endif /* __WINCE_DEFINED_QUERYSINKEVENT_E */

/* SearchBy_Date  [extra enum] */
#ifndef __WINCE_DEFINED_SEARCHBY_E
#define __WINCE_DEFINED_SEARCHBY_E
enum SearchBy_e {
 SearchBy_None = 0,
 SearchBy_Title,
 SearchBy_Artist,
 SearchBy_Actor,
 SearchBy_Album,
 SearchBy_Genre,
 SearchBy_Date
};
#endif /* __WINCE_DEFINED_SEARCHBY_E */

/* SortBy_Date_Descending  [extra enum] */
#ifndef __WINCE_DEFINED_SORTBY_E
#define __WINCE_DEFINED_SORTBY_E
enum SortBy_e {
 SortBy_None = 0,
 SortBy_Name_Ascending,
 SortBy_Name_Descending,
 SortBy_Date_Ascending,
 SortBy_Date_Descending
};
#endif /* __WINCE_DEFINED_SORTBY_E */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
Bool ActiveServerName(WCHAR*pBuffer, int*pBufferLen);
Bool ActiveServerUDN(WCHAR* pBuffer, int* pBufferLen);
bool AddSink (const QueryEngineSink_t*pNewSinkObj);
int BatchSize (none);
#ifdef __cplusplus
MediaQuery_t CreateNewQuery(constQueryParams_t &QueryParams);
#endif /* __cplusplus */
int CurrentItemOffset (void);
DeviceStatus_e DeviceStatus (void);
bool FriendlyDeviceName(WCHAR* pBuffer, int* pBufferLength);
bool GetItemAttribute (ItemAttribute_e AttributeName, WCHAR* pBuffer, int* pBufferLength);
MediaItem_t GetMediaItem(int Index);
MediaItemBatch_t GetNextBatch (none);
ServerInfo_t GetServerInfo (int Index);
bool IsContainer (none);
bool IsRestricted(none);
ServerInfoCollection_t KnownMediaServers(void);
bool ModelNumber (WCHAR* pBuffer, int* pBufferLength);
MediaQuery_t OemExtensionUpnpBrowseChildren(const WCHAR* pObjectIdStr, const WCHAR* pSortString, int BatchSize);
#ifdef __cplusplus
bool OemExtensionUpnpItemAttribute (const WCHAR* pAttributeName, WCHAR* pBuffer, int* pBufferLength, unsigned long nIndex = 0);
#endif /* __cplusplus */
MediaQuery_t OemExtensionUpnpQuery (const WCHAR* pContainerIdStr, const WCHAR* pSearchString, const WCHAR* pSortString, int BatchSize);
bool RegisterContentUpdateCallback(constContentUpdateCallback_t* pCallbackObj);
bool RemoveSink(const QueryEngineSink_t*pRemoveThis);
QueryEngineState_e State (void);
int TotalItems(none);
int TotalServers (void);
bool UnInitialize (void);
bool UnRegisterContentUpdateCallback(const ContentUpdateCallback_t* pCallbackObj);
bool UniqueDeviceName(WCHAR* pBuffer, int* pBufferLength);

#endif /* _MEDIAQUERYENGINE_HPP_ */
