/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject  {
    NSMutableDictionary *_storeNameToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock *_registrationLock;
}

+ (id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2;
+ (id)sharedSwitchboard;
+ (void)initialize;

- (void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2;
- (void)removeEntryFromPreviousEntries:(id)arg1;
- (void)_quietlyMoveEntryToPreviousEntries:(id)arg1;
- (bool)registerUbiquitizedPersistentStore:(id)arg1 forLocalPeerID:(id)arg2 withLocalRootLocation:(id)arg3 andUbiquityRootLocation:(id)arg4 error:(id*)arg5;
- (void)_addFilePresenter:(id)arg1;
- (void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (bool)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)entryForStore:(id)arg1;
- (void)addEntryToPreviousEntries:(id)arg1;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)_removeFilePresenter:(id)arg1;
- (id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterCoordinator:(id)arg1;
- (id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;

@end
