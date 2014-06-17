/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface BKSApplicationDataStoreRepositoryClient : BSBaseXPCClient  {
    NSMutableDictionary *_prefetchedKeyCounts;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue> *_prefetchedDataQueue;
}


- (void)_sendMessageType:(int)arg1 withMessage:(id)arg2 withReplyHandler:(id)arg3 waitForReply:(bool)arg4;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(id)arg2;
- (id)clientCallbackQueue;
- (bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (void)_handleStoreInvalidated:(id)arg1;
- (void)_handleValueChanged:(id)arg1;
- (void)_setChangeInFlight:(bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)fireCompletion:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(id)arg1 arrayResults:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(id)arg1 error:(id)arg2;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(id)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 useBSXPCCoding:(bool)arg4 withCompletion:(id)arg5;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 useBSXPCCoding:(bool)arg3 withResult:(id)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id)arg3 checkPrefetch:(bool)arg4 useBSXPCCoding:(bool)arg5;
- (bool)_prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
- (void)addPrefetchedKeys:(id)arg1 withCompletion:(id)arg2;
- (void)synchronizeWithCompletion:(id)arg1;
- (void)availableDataStores:(id)arg1;
- (void)queue_connectionWasCreated;
- (void)queue_handleMessage:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
