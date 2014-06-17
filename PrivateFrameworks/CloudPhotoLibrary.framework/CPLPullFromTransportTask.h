/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, NSData, NSObject<OS_dispatch_queue>, <CPLEngineTransportDownloadBatchTask>, <CPLPullFromTransportTaskDelegate>;

@interface CPLPullFromTransportTask : CPLEngineSyncTask  {
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_initialSyncAnchor;
    <CPLEngineTransportDownloadBatchTask> *_downloadTask;
    NSString *_clientCacheIdentifier;
    bool_didBeginTransientRepository;
    bool_resetSyncAnchor;
    bool_didGetSomeChanges;
}

@property(retain) <CPLPullFromTransportTaskDelegate> * delegate;
@property(readonly) bool didGetSomeChanges;


- (void)_handleNewBatch:(id)arg1 newSyncAnchor:(id)arg2;
- (void)_finishTaskWithErrorAndCleanupIfNecessary:(id)arg1;
- (bool)didGetSomeChanges;
- (void)_launch;
- (id)initWithEngineLibrary:(id)arg1;
- (void)resume;
- (void)pause;
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;

@end
