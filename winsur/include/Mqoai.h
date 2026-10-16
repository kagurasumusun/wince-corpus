/* Mqoai.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 75 extra decls
 */
#ifndef _MQOAI_
#define _MQOAI_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void Arrived( IDispatch* Queue, long Cursor );
void ArrivedError( Idispatch* Queue, long ErrorCode, long Cursor );
HRESULT EnableNotification( MSMQEvent* Event, VARIANT* Cursor, VARIANT* ReceiveTimeout );
HRESULT get_ MaxTimeToReachQueue(  long* plMaxTimeToReachQueue  );  HRESULT put_MaxTimeToReachQueue(  long lMaxTimeToReachQueue  );
HRESULT Peek( VARIANT* WantDestinationQueue, VARIANT* WantBody, VARIANT* ReceiveTimeout, MSMQMessage** ppmsg );
HRESULT PeekCurrent( VARIANT* WantDestinationQueue, VARIANT* WantBody, VARIANT* ReceiveTimeout, MSMQMessage** ppmsg );
HRESULT PeekNext( VARIANT* WantDestinationQueue, VARIANT* WantBody, VARIANT* ReceiveTimeout, MSMQMessage** ppmsg );
HRESULT ReceiveCurrent( VARIANT* Transaction, VARIANT* WantDestinationQueue, VARIANT* WantBody, VARIANT* ReceiveTimeout, MSMQMessage** ppmsg );
HRESULT Refresh(void);
HRESULT get_Access( long* plAccess );
HRESULT get_Ack( long* plAck );
HRESULT get_AdminQueueInfo( MSMQQueueInfo** ppinfoAdmin );
HRESULT get_AppSpecific( long* plAppSpecific );
HRESULT get_ArrivedTime( VARIANT* plArrivedTime );
HRESULT get_AuthLevel( long* plAuthLevel );
HRESULT get_Authenticate( long* plAuthenticate );
HRESULT get_BasePriority( long* plBasePriority );
HRESULT get_Class( long* plClass );
HRESULT get_CorrelationId( VARIANT* pvarMsdId );
HRESULT get_CreateTime( VARIANT* pvarCreateTime );
HRESULT get_Delivery( long* plDelivery );
HRESULT get_DestinationQueueInfo( MSMQQueueInfo** ppqinfoDest );
HRESULT get_EncryptAlgorithm( long* plEncryptAlg );
HRESULT get_FormatName( BSTR* pbstrFormatName );
HRESULT get_Handle( long* plHandle );
HRESULT get_HashAlgorithm( long* plHashAlg );
HRESULT get_IsAuthenticated( Boolean* pIsAuthenticated );
HRESULT get_IsOpen( Boolean* pisOpen );
HRESULT get_IsTransactional( Boolean* pisTransactional );
HRESULT get_IsWorldReadable( Boolean* pisWorldReadable );
HRESULT get_Journal( long* plJournal );
HRESULT get_JournalQuota( long* plJournalQuota );
HRESULT get_Label( BSTR* pbstrLabel );
HRESULT get_MaxTimeToReceive( long* plMaxTimeToReceive );
HRESULT get_ModifyTime( VARIANT* pvarModifyTime );
HRESULT get_PathName( BSTR* pbstrPathName );
HRESULT get_Priority( long* plPriority );
HRESULT get_PrivLevel( long* plPrivLevel );
HRESULT get_QueueGuid( BSTR* pbstrGuidQueue );
HRESULT get_QueueInfo( MSMQQueue** ppinfo );
HRESULT get_Quota( long* plQuota );
HRESULT get_ResponseQueueInfo( IMSQQueueInfo** ppinfoResponse );
HRESULT get_SenderCertificate( VARIANT* pvarSenderCert );
HRESULT get_SenderId( VARIANT* pvarSenderId );
HRESULT get_SenderIdType( long* plSenderIdType );
HRESULT get_SentTime( VARIANT* pvarSentTime );
HRESULT get_ServiceTypeGuid( BSTR* pbstrGuidServiceType );
HRESULT get_ShareMode( long* plShareMode );
HRESULT get_SourceMachineGuid( BSTR* pbstrGuidSrcMachine );
HRESULT get_Trace( long* plTrace );
HRESULT put_Ack( long* lAck );
HRESULT put_AppSpecific( long plAppSpecific );
HRESULT put_AuthLevel( long lAuthLevel );
HRESULT put_Authenticate( long lAuthenticate );
HRESULT put_BasePriority( long lBasePriority );
HRESULT put_CorrelationId( VARIANT varMsgId );
HRESULT put_Delivery( long lDelivery );
HRESULT put_EncryptAlgorithm( long lEncryptAlg );
HRESULT put_FormatName( BSTR bstrFormatName );
HRESULT put_HashAlgorithm( long lHashAlg );
HRESULT put_Journal( long lJournal );
HRESULT put_JournalQuota( long lJournalQuota );
HRESULT put_Label( BSTR lbstrLabel );
HRESULT put_MaxTimeToReachQueue( long lMaxTimeToReachQueue );
HRESULT put_MaxTimeToReceive( long lMaxTimeToReceive );
HRESULT put_PathName( BSTR bstrPathName );
HRESULT put_Priority( long lPriority );
HRESULT put_PrivLevel( long lPrivLevel );
HRESULT put_Quota( long lQuota );
HRESULT put_SenderCertificate( VARIANT varSenderCert );
HRESULT put_SenderIdType( long lSenderIdType );
HRESULT put_ServiceTypeGuid( BSTR bstrGuidServiceType );
HRESULT put_Trace( long lTrace );
HRESULT putref_AdminQueueInfo( MSMQQueueInfo* pinfoAdmin );
HRESULT putref_ResponseQueueInfo( IMSQQueueInfo* pinfoResponse );

#endif /* _MQOAI_ */
