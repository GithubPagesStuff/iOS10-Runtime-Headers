/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, PLThrottleTimer, NSDictionary, PSIDatabase, NSObject<OS_dispatch_queue>, PLPhotoLibrary, PLKeywordManager;

@interface PLSearchIndexManager : NSObject  {
    PLKeywordManager *_keywordManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLThrottleTimer *_throttleTimer;
    NSString *_searchIndexDirectory;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_uuidsToProcess;
    bool_receivedUpdatesWhileIndexing;
    bool_indexingPaused;
    bool__indexing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __inqAfterIndexingDidIterate;

}

@property(readonly) unsigned long long enqueuedUUIDsCount;
@property(getter=isIndexingPaused,setter=setIndexingPaused:) bool indexingPaused;
@property(getter=_isIndexing,setter=_setIndexing:) bool _indexing;
@property(setter=_setInqAfterIndexingDidIterate:,copy) id _inqAfterIndexingDidIterate;

+ (id)defaultDatabasePath;
+ (id)_databasePathInDirectory:(id)arg1;
+ (id)_defaultDatabaseDirectory;
+ (id)sharedInstance;

- (void)applyUpdates:(id)arg1;
- (void)dropSearchIndexDatabase;
- (void)closeSearchIndexWithCompletion:(id)arg1;
- (void)setIndexingPaused:(bool)arg1;
- (bool)isIndexingPaused;
- (unsigned long long)enqueuedUUIDsCount;
- (id)_inqAfterIndexingDidIterate;
- (id)_moc:(id)arg1 fetchAlbumsWithUUIDs:(id)arg2;
- (id)_moc:(id)arg1 fetchAssetsWithUUIDs:(id)arg2;
- (void)_inqEnsureSearchIndexExists;
- (void)_setIndexing:(bool)arg1;
- (void)_scheduleCloseIndex;
- (id)_inqPhotoLibrary;
- (id)_dbPath;
- (bool)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (id)_oldDbPath;
- (id)_cxindexProgressPath;
- (void)_inqAddUpdatesWithUUIDsArray:(id)arg1 forKey:(id)arg2;
- (void)_inqCloseSearchIndexAndDelete:(bool)arg1 withCompletion:(id)arg2;
- (void)_setInqAfterIndexingDidIterate:(id)arg1;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqSetIndexingPaused:(bool)arg1;
- (bool)_inqIsIndexingPaused;
- (bool)_isIndexing;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(bool)arg1;
- (void)_inqEnsureSearchProgressExists;
- (void)_inqCloseIndexIfAbleOrForce:(bool)arg1 isDelete:(bool)arg2;
- (void)_throttleTimerFire:(id)arg1;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (void)dropSearchIndexWithCompletion:(id)arg1;
- (void)dealloc;

@end
