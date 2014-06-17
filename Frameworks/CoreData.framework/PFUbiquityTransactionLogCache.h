/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSRecursiveLock, NSString, NSMutableDictionary, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject  {
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}


- (void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2;
- (id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(bool)arg2 error:(id*)arg3;
- (id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2;
- (void)cacheExportedLog:(id)arg1;
- (id)init;
- (void)dealloc;

@end
