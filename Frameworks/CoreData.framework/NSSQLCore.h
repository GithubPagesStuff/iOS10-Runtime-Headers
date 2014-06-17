/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSURL, NSSQLConnection, NSSQLAdapter, NSMutableArray, NSManagedObjectContext, NSSaveChangesRequest, NSSet, NSSQLModel, NSString, NSMutableSet, NSOperationQueue, NSSQLEntity, NSSQLRowCache, NSSQLRow;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {
    NSSQLModel *_model;
    NSSQLAdapter *_adapter;
    NSSQLConnection *_connection;
    NSMutableArray *_channels;
    NSManagedObjectContext *_currentContext;
    NSSQLEntity *_lastEntity;
    NSSQLRowCache *_rowCache;
    NSSet *_newInserts;
    struct __CFDictionary { } *_changeCache;
    struct __CFDictionary { } *_insertCache;
    struct __CFDictionary { } *_toManyCache;
    NSSaveChangesRequest *_currentSaveRequest;
    NSMutableSet *_rowsInCurrentSave;
    int _lazyFaultDebugLevel;
    NSMutableDictionary *_batchFaultBuffer;
    NSMutableDictionary *_batchToManyFaultBuffer;
    struct _NSScalarObjectID { Class x1; } *_currentGlobalID;
    NSSQLRow *_currentRow;
    id _observer;
    NSMutableSet *_missingObjectGIDs;
    NSMutableDictionary *_storeMetadata;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableSet *_externalDataReferencesToDelete;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    int _transactionInMemorySequence;
    int _moreOtherReserved;
    struct _sqlCoreFlags { 
        unsigned int beganTransaction : 1; 
        unsigned int ignoreEntityCaching : 1; 
        unsigned int storeMetadataClean : 1; 
        unsigned int useToManyCaching : 1; 
        unsigned int useSyntaxColoredLogging : 1; 
        unsigned int checkedExternalReferences : 1; 
        unsigned int fileProtectionType : 3; 
        unsigned int _RESERVED : 23; 
    } _sqlCoreFlags;
}

@property(copy,readonly) NSURL * presentedItemURL;
@property(retain,readonly) NSOperationQueue * presentedItemOperationQueue;
@property(copy,readonly) NSURL * primaryPresentedItemURL;

+ (void)setSQLGenerationV1Default:(bool)arg1;
+ (void)setColoredLoggingDefault:(bool)arg1;
+ (bool)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2;
+ (bool)coloredLoggingDefault;
+ (bool)SQLGenerationV1Default;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (Class)migrationManagerClass;
+ (int)debugDefault;
+ (void)setDebugDefault:(int)arg1;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (id)currentContext;
- (id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2;
- (id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2;
- (void)recomputePrimaryKeyMaxForEntities:(id)arg1;
- (void)_purgeRowCache;
- (id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2;
- (id)externalDataReferencesToSave;
- (id)safeguardLocationForFileWithUUID:(id)arg1;
- (id)externalLocationForFileWithUUID:(id)arg1;
- (id)_entityForObject:(id)arg1;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 orderedManyToMany:(id)arg3;
- (id)_processRawRows:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)arg1 forFetchPlan:(id)arg2 selectedBy:(SEL)arg3 withArgument:(id)arg4;
- (id)_newRowDataForFetch:(id)arg1 error:(id*)arg2;
- (id)availableChannel;
- (id)createChannel;
- (void)unregisterChannel:(id)arg1;
- (id)newAdapterForModel:(id)arg1;
- (void)_uncacheRows:(id)arg1;
- (void)_cacheRows:(id)arg1;
- (void)_useModel:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (void)generatePrimaryKeysForEntity:(id)arg1;
- (void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)newSortDescriptorForOrderedRelationship:(id)arg1;
- (id)newFaultingPredicateForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(bool)arg2 swapEKPK:(bool)arg3;
- (id)_loadAndSetMetadataReadOnly;
- (id)_loadAndSetMetadata;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(bool)arg4;
- (id)_collectSkewedComponents:(id*)arg1;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (void)_checkAndRepairCorrelationTables:(bool)arg1 storeVersionNumber:(id)arg2;
- (void)commitTransaction_NotificationFree;
- (void)beginTransaction_NotificationFree;
- (id)performBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)refreshObjects:(id)arg1;
- (id)saveChanges:(id)arg1;
- (void)commitBatchUpdateOnConnection:(id)arg1;
- (void)rollbackBatchUpdateOnConnection:(id)arg1;
- (id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2;
- (void)beginBatchUpdateOnConnection:(id)arg1;
- (id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)rollbackChanges;
- (void)deleteExternalDataReferences:(id)arg1;
- (void)commitChanges:(id)arg1;
- (id)writeExternalDataReferences;
- (void)performChanges;
- (void)prepareForSave:(id)arg1;
- (id)_newRowsForFetchPlan:(id)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3;
- (id)newRowsForFetchPlan:(id)arg1;
- (void)_cleanUpAfterSave;
- (void)writeChanges;
- (bool)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)forgetChangeSnapshotForObjectID:(id)arg1;
- (id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3;
- (id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2;
- (struct __CFArray { }*)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2;
- (void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1;
- (void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(bool)arg4;
- (void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4;
- (id)correlationTableUpdateTrackerForRelationship:(id)arg1;
- (id)findOrCreateChangeSnapshotForGlobalID:(id)arg1;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalSnapshot:(id)arg3 value:(id)arg4 added:(id)arg5 deleted:(id)arg6 sourceRowPK:(long long)arg7 properties:(id)arg8 sourceObject:(id)arg9 newIndexes:(unsigned long long**)arg10 reorderedIndexes:(char **)arg11;
- (id)entityForObject:(id)arg1;
- (void)recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(bool)arg4;
- (id)externalDataReferencesToDelete;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned long long**)arg4 reorderedIndexes:(char **)arg5;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3;
- (id)_prepareResultsFromResultSet:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)arg1 usingFetchPlan:(id)arg2 withMatchingRows:(id*)arg3;
- (id)_prepareDictionaryResultsFromResultSet:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)arg1 usingFetchPlan:(id)arg2;
- (id)_obtainOpenChannel;
- (struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)_newRawRows:(id)arg1 cached:(bool)arg2 statement:(id)arg3;
- (struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)_newRawRowsForFetchPlan:(id)arg1;
- (void)appendFetchResultSet:(struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)arg1 toData:(id)arg2;
- (struct { int x1; int x2; double x3; int x4; unsigned int x5; int x6; int x7; unsigned long long x8; unsigned long long x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 29; } x10; struct FetchResultsRowListHeader_st {} **x11; void **x12; void *x13; void *x14; void *x15; }*)_newRawRowsForFetch:(id)arg1;
- (int)fileProtectionLevel;
- (id)externalDataLinksDirectory;
- (id)_availableChannel;
- (void)registerChannel:(id)arg1;
- (id)_availableChannelFromRegisteredChannels;
- (void)recordChangeSnapshot:(id)arg1 forObjectID:(id)arg2;
- (id)changeSnapshotForObjectID:(id)arg1;
- (void)rollbackTransaction_core;
- (void)commitTransaction_core;
- (void)beginTransaction_core;
- (void)_beginTransaction:(id)arg1;
- (id)newFetchedPKsForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (id)fetchRowForObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)rowCache;
- (void)_ensureDatabaseMatchesModel;
- (id)_newAdapterForModel:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (void)resetExternalDataReferencesDirectories;
- (id)channels;
- (void)_disconnect;
- (void)_performPostSaveTasks;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)beginTransaction;
- (void)setCurrentContext:(id)arg1;
- (id)adapter;
- (id)entityForFetchRequest:(id)arg1;
- (id)rowForObjectID:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (id)_externalDataLinksDirectory;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)_objectIDClass;
- (bool)loadMetadata:(id*)arg1;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (id)model;
- (id)databaseUUID;
- (void)_setMetadata:(id)arg1;
- (const id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (id)entityForEntityDescription:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)load:(id*)arg1;
- (void)setMetadata:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)externalDataReferencesDirectory;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)metadata;
- (id)identifier;
- (id)connection;
- (id)type;
- (void)setURL:(id)arg1;
- (void)dealloc;
- (id)presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (id)presentedItemURL;

@end
