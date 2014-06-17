/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NoteStoreObject, NSManagedObjectContext, CPExclusiveLock, NSPredicate, AccountUtilities, NSMutableDictionary, NSPersistentStoreCoordinator, NoteAccountObject, NSManagedObjectModel, NSNumber;

@interface NoteContext : NSObject  {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_searchPredicate;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    struct __CXIndex { } *__SharedNoteStoreSearchIndex;
    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;
    int __SharedNoteStoreSearchIndexCount;
    bool_isIndexing;
    AccountUtilities *_accountUtilities;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned long long _notificationCount;
    bool_logChanges;
    bool_indexInBatches;
    bool_hasPriorityInSaveConflicts;
    bool_inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
}

@property(readonly) bool isIndexing;
@property(retain,readonly) NSManagedObjectContext * managedObjectContext;
@property(retain) AccountUtilities * accountUtilities;

+ (void)clearTestsNotesRootPath;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (bool)shouldLogIndexing;
+ (bool)databaseIsCorrupt:(id)arg1;
+ (id)generateGUID;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;

- (void)setAccountUtilities:(id)arg1;
- (bool)deleteIndexFile;
- (id)findNotesWithText:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;
- (id)copyNotesForSearch:(void*)arg1 complete:(char *)arg2;
- (void)resetNotificationCount;
- (void)receiveDarwinNotificationWithChangeLogging:(bool)arg1;
- (void)indexInBatches:(bool)arg1;
- (void)resumeIndexing;
- (void)wrapUpIndexing;
- (void)setHasPriorityInSaveConflicts:(bool)arg1;
- (bool)hasMultipleEnabledStores;
- (bool)shouldDisableLocalStore;
- (bool)deleteStore:(id)arg1;
- (id)defaultStoreForNewNote;
- (id)allAccounts;
- (id)faultedInStoresForAccounts:(id)arg1;
- (id)allStores;
- (id)collectionForInfo:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)noteForObjectID:(id)arg1;
- (unsigned long long)countOfNotes;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (unsigned long long)countOfVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1;
- (unsigned long long)countOfVisibleNotes;
- (id)allVisibleNotes;
- (bool)saveOutsideApp:(id*)arg1;
- (void)deleteChanges:(id)arg1;
- (void)deleteNote:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (id)newlyAddedAttachment;
- (id)newlyAddedNote;
- (void)batchFaultNotes:(id)arg1;
- (void)sortNotes:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initForMigrator;
- (id)allNotes;
- (void*)newSearchContextWithText:(id)arg1;
- (id)copyNotesForSearch:(void*)arg1 predicate:(id)arg2 complete:(char *)arg3;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (void)trackChanges:(id)arg1;
- (void)cleanUpLocks;
- (struct __CXIndex { }*)searchIndex:(char *)arg1;
- (bool)shouldResumeIndexing;
- (void)destroySearchIndex;
- (void)indexNotes:(id)arg1;
- (void)saveNotesToResumeIndexing:(id)arg1;
- (id)notesToResumeIndexing;
- (id)notesForIntegerIds:(id)arg1;
- (id)getNextIdObject;
- (id)_notePropertyObjectForKey:(id)arg1;
- (unsigned long long)countOfNotesInCollection:(id)arg1;
- (unsigned long long)countOfStores;
- (id)allNotesInCollection:(id)arg1;
- (id)localAccount;
- (id)localStore;
- (id)allAccountsAsFaults:(bool)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (void)forceSetUpUniqueObjects;
- (id)accountForAccountId:(id)arg1;
- (id)liveNotesNeedingBodiesPredicate;
- (unsigned long long)countOfNotesMatchingPredicate:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(bool)arg2;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(bool)arg2;
- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (id)nextIndex;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)visibleNotesPredicate;
- (id)newFetchRequestForNotes;
- (void)tearDownCoreDataStack;
- (bool)setUpCoreDataStack;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(bool)arg2;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (bool)shouldObserveDarwinNotifications;
- (void)updateSearchIndex:(id)arg1;
- (void)handleMigration;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (bool)saveSilently:(id*)arg1;
- (bool)setUpLastIndexTid;
- (bool)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (id)urlForPersistentStore;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (bool)forceDeleteAccount:(id)arg1;
- (id)newlyAddedStore;
- (id)accountUtilities;
- (id)newlyAddedAccount;
- (void)enableChangeLogging:(bool)arg1;
- (bool)isIndexing;
- (bool)deleteAccount:(id)arg1;
- (id)propertyValueForKey:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)storeOptions;
- (void)clearCaches;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (bool)save:(id*)arg1;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)managedObjectContext;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
