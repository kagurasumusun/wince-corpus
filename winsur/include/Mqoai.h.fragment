/* Mqoai.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 60 declarations, 0 outlines, 0 base types, 0 extra macros, 75 extra decls
 */
#ifndef _MQOAI_
#define _MQOAI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* MSMQEvent.Arrived  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
void Arrived( 
 IDispatch* Queue, 
 long Cursor
);

/* MSMQEvent.ArrivedError  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
void ArrivedError(
 Idispatch* Queue, 
 long ErrorCode, 
 long Cursor 
);

/* MSMQMessage.Ack  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Ack( 
 long* plAck 
);
HRESULT put_Ack( 
 long* lAck 
);

/* MSMQMessage.AdminQueueInfo  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_AdminQueueInfo( 
 MSMQQueueInfo** ppinfoAdmin 
);
HRESULT putref_AdminQueueInfo( 
 MSMQQueueInfo* pinfoAdmin 
);

/* MSMQMessage.AppSpecific  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_AppSpecific( 
 long* plAppSpecific 
);
HRESULT put_AppSpecific( 
 long plAppSpecific
);

/* MSMQMessage.ArrivedTime  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_ArrivedTime( 
 VARIANT* plArrivedTime 
);

/* MSMQMessage.AuthLevel  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_AuthLevel( 
 long* plAuthLevel 
);
HRESULT put_AuthLevel( 
 long lAuthLevel 
);

/* MSMQMessage.Body  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Body( 
 VARIANT* pvarBody 
);
HRESULT put_Body( 
 VARIANT varBody 
);

/* MSMQMessage.Class  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Class( 
 long* plClass 
);

/* MSMQMessage.CorrelationId  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_CorrelationId( 
 VARIANT* pvarMsdId 
);
HRESULT put_CorrelationId( 
 VARIANT varMsgId 
);

/* MSMQMessage.Delivery  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Delivery( 
 long* plDelivery 
);
HRESULT put_Delivery( 
 long lDelivery 
);

/* MSMQMessage.DestinationQueueInfo  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_DestinationQueueInfo( 
 MSMQQueueInfo** ppqinfoDest 
);

/* MSMQMessage.EncryptAlgorithm  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_EncryptAlgorithm( 
 long* plEncryptAlg 
);
HRESULT put_EncryptAlgorithm( 
 long lEncryptAlg
);

/* MSMQMessage.HashAlgorithm  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_HashAlgorithm( 
 long* plHashAlg 
);
HRESULT put_HashAlgorithm( 
 long lHashAlg
);

/* MSMQMessage.IsAuthenticated  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_IsAuthenticated( 
 Boolean* pIsAuthenticated 
);

/* MSMQMessage.Journal  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Journal( 
 long* plJournal 
);
HRESULT put_Journal( 
 long lJournal
);

/* MSMQMessage.Label  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Label( 
 BSTR* pbstrLabel 
);
HRESULT put_Label( 
 BSTR lbstrLabel
);

/* MSMQMessage.MaxTimeToReachQueue  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_ MaxTimeToReachQueue( 
 long* plMaxTimeToReachQueue 
);
HRESULT put_MaxTimeToReachQueue( 
 long lMaxTimeToReachQueue
);

/* MSMQMessage.MaxTimeToReceive  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_MaxTimeToReceive( 
 long* plMaxTimeToReceive 
);
HRESULT put_MaxTimeToReceive( 
 long lMaxTimeToReceive
);

/* MSMQMessage.Priority  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Priority( 
 long* plPriority 
);
HRESULT put_Priority( 
 long lPriority
);

/* MSMQMessage.PrivLevel  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_PrivLevel( 
 long* plPrivLevel 
);
HRESULT put_PrivLevel( 
 long lPrivLevel
);

/* MSMQMessage.ResponseQueueInfo  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_ResponseQueueInfo( 
 IMSQQueueInfo** ppinfoResponse 
);
HRESULT putref_ResponseQueueInfo( 
 IMSQQueueInfo* pinfoResponse
);

/* MSMQMessage.SenderCertificate  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_SenderCertificate( 
 VARIANT* pvarSenderCert 
);
HRESULT put_SenderCertificate( 
 VARIANT varSenderCert
);

/* MSMQMessage.SenderId  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_SenderId( 
 VARIANT* pvarSenderId 
);

/* MSMQMessage.SenderIdType  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_SenderIdType( 
 long* plSenderIdType 
);
HRESULT put_SenderIdType( 
 long lSenderIdType
);

/* MSMQMessage.SentTime  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_SentTime( 
 VARIANT* pvarSentTime 
);

/* MSMQMessage.SourceMachineGuid  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_SourceMachineGuid( 
 BSTR* pbstrGuidSrcMachine 
);

/* MSMQMessage.Trace  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Trace( 
 long* plTrace 
);
HRESULT put_Trace( 
 long lTrace
);

/* MSMQQueue.Access  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Access( 
 long* plAccess 
);

/* MSMQQueue.Close  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Close(void);

/* MSMQQueue.EnableNotification  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT EnableNotification( 
 MSMQEvent* Event,
 VARIANT* Cursor, 
 VARIANT* ReceiveTimeout 
);

/* MSMQQueue.Handle  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Handle( 
 long* plHandle 
);

/* MSMQQueue.IsOpen  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_IsOpen( 
 Boolean* pisOpen 
);

/* MSMQQueue.Peek  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Peek( 
 VARIANT* WantDestinationQueue, 
 VARIANT* WantBody, 
 VARIANT* ReceiveTimeout, 
 MSMQMessage** ppmsg 
);

/* MSMQQueue.PeekCurrent  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT PeekCurrent( 
 VARIANT* WantDestinationQueue, 
 VARIANT* WantBody, 
 VARIANT* ReceiveTimeout, 
 MSMQMessage** ppmsg 
);

/* MSMQQueue.PeekNext  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT PeekNext( 
 VARIANT* WantDestinationQueue, 
 VARIANT* WantBody, 
 VARIANT* ReceiveTimeout, 
 MSMQMessage** ppmsg 
);

/* MSMQQueue.QueueInfo  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_QueueInfo( 
 MSMQQueue** ppinfo 
);

/* MSMQQueue.Receive  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Receive( 
 VARIANT* Transaction,
 VARIANT* WantDestinationQueue, 
 VARIANT* WantBody, 
 VARIANT* ReceiveTimeout, 
 MSMQMessage** ppmsg 
);

/* MSMQQueue.ReceiveCurrent  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT ReceiveCurrent( 
 VARIANT* Transaction,
 VARIANT* WantDestinationQueue, 
 VARIANT* WantBody, 
 VARIANT* ReceiveTimeout, 
 MSMQMessage** ppmsg 
);

/* MSMQQueue.Reset  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Reset(void);

/* MSMQQueue.ShareMode  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_ShareMode( 
 long* plShareMode 
);

/* MSMQQueueInfo.Authenticate  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Authenticate( 
 long* plAuthenticate 
);
HRESULT put_Authenticate( 
 long lAuthenticate
);

/* MSMQQueueInfo.BasePriority  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_BasePriority( 
 long* plBasePriority 
);
HRESULT put_BasePriority( 
 long lBasePriority
);

/* MSMQQueueInfo.Create  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Create( 
 VARIANT* IsTransactional, 
 VARIANT* IsWorldReadable 
);

/* MSMQQueueInfo.CreateTime  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_CreateTime( 
 VARIANT* pvarCreateTime 
);

/* MSMQQueueInfo.FormatName  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_FormatName( 
 BSTR* pbstrFormatName 
);
HRESULT put_FormatName( 
 BSTR bstrFormatName
);

/* MSMQQueueInfo.IsTransactional  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_IsTransactional( 
 Boolean* pisTransactional 
);

/* MSMQQueueInfo.IsWorldReadable  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_IsWorldReadable( 
 Boolean* pisWorldReadable 
);

/* MSMQQueueInfo.Journal  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Journal( 
 long* plJournal 
);
HRESULT put_Trace( 
 long lJournal
);

/* MSMQQueueInfo.JournalQuota  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_JournalQuota( 
 long* plJournalQuota 
);
HRESULT put_JournalQuota( 
 long lJournalQuota
);

/* MSMQQueueInfo.Label  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Label( 
 BSTR* pbstrLabel 
);

/* MSMQQueueInfo.ModifyTime  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_ModifyTime( 
 VARIANT* pvarModifyTime 
);

/* MSMQQueueInfo.Open  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Open( 
 long Access, 
 long ShareMode, 
 MSMQQueue** ppq
);

/* MSMQQueueInfo.PathName  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_PathName( 
 BSTR* pbstrPathName 
);
HRESULT put_PathName( 
 BSTR bstrPathName
);

/* MSMQQueueInfo.PrivLevel  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_PrivLevel( 
 long* plPrivLevel 
);
HRESULT put_PrivLevel( 
 long lPrivLevel
);

/* MSMQQueueInfo.QueueGuid  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_QueueGuid( 
 BSTR* pbstrGuidQueue 
);

/* MSMQQueueInfo.Quota  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_Quota( 
 long* plQuota 
);
HRESULT put_Quota( 
 long lQuota
);

/* MSMQQueueInfo.Refresh  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Refresh(void);

/* MSMQQueueInfo.ServiceTypeGuid  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT get_ServiceTypeGuid( 
 BSTR* pbstrGuidServiceType 
);
HRESULT put_ServiceTypeGuid( 
 BSTR bstrGuidServiceType
);

/* MSMQQueueInfo.Update  [function; ce-only; CE 5.0..699; Mqoa.lib, mqoa.lib] */
HRESULT Update(void);
#endif /* _WIN32_WCE */

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
