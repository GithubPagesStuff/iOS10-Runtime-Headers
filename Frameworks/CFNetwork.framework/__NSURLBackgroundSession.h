/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCConnection, NSString, NSURL, NSMutableDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, <NDBackgroundSessionProtocol>;

@interface __NSURLBackgroundSession : NSURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {
    unsigned long long _identSeed;
    <NDBackgroundSessionProtocol> *_remoteSession;
    NSXPCConnection *_xpcConn;
    NSMutableDictionary *_tasks;
    NSMutableArray *_taskIDsToFailOnReconnection;
    NSObject<OS_dispatch_queue> *_invalidateQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidateCallback;

    NSString *_appWakeUUID;
    NSURL *_downloadDirectory;
    bool_isPrivileged;
}

@property(copy) NSString * appWakeUUID;


- (id)clientResumeDataFromBackgroundResumeData:(id)arg1;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_allCredentialsWithReply:(id)arg1;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(id)arg1;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 timingData:(id)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 timingData:(id)arg3 reply:(id)arg4;
- (void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(bool)arg2 withReply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(id)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirectionWithNewRequest:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
- (void)setAppWakeUUID:(id)arg1;
- (id)appWakeUUID;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2;
- (id)_onqueue_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_downloadTaskForRequest:(id)arg1;
- (id)_downloadTaskForResumeData:(id)arg1;
- (id)backgroundResumeDataFromClientResumeData:(id)arg1;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withError:(id)arg2;
- (id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;
- (void)validateUploadFile:(id)arg1;
- (id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)placeholderErrorWithURL:(id)arg1;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2;
- (void)performBlockOnQueueAndRethrowExceptions:(id)arg1;
- (id)_onqueue_dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (id)disconnectedErrorWithURL:(id)arg1;
- (id)taskForIdentifier:(unsigned long long)arg1;
- (void)failDisconnectedTasks;
- (void)recreateExistingTasks:(id)arg1;
- (void)cameIntoForeground:(id)arg1;
- (void)wentToBackground:(id)arg1;
- (void)cleanupConfig;
- (void)sendInvalidationRequest;
- (void)setupBackgroundSession;
- (void)setupXPCConnection;
- (id)cachesDirectory;
- (id)backgroundDownloadsDirectory;
- (void)_onqueue_getTasksWithCompletionHandler:(id)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(id)arg1;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(id)arg1;
- (id)_streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(bool)arg3 completionHandler:(id)arg4;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id)arg4;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)_onqueue_invalidateSession:(bool)arg1 withQueue:(id)arg2 completion:(id)arg3;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)copyTasks;
- (void)_onqueue_invokeInvalidateCallback;
- (void)dealloc;

@end
