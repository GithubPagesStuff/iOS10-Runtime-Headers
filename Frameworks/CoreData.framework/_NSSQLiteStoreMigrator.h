/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMappingModel, NSMutableDictionary, NSSQLModel, NSSQLCore, NSSQLConnection, NSSQLAdapter;

@interface _NSSQLiteStoreMigrator : NSObject  {
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLConnection *_connection;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    bool_hasPKTableChanges;
}

@property(readonly) NSSQLAdapter * adapter;

+ (void)_setAnnotatesMigrationMetadata:(bool)arg1;
+ (bool)_annotatesMigrationMetadata;

- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (id)createIndexStatementsForEntity:(id)arg1;
- (bool)performMigration:(id*)arg1;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;
- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (void)_populateTableMigrationDescriptions;
- (bool)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id*)arg3;
- (bool)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id*)arg3;
- (long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3;
- (long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2;
- (bool)validateMigratedDataFromEntityMapping:(id)arg1 error:(id*)arg2;
- (id)createStatementsForUpdatingEntityKeys;
- (id)createEntityMigrationStatements;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (id)adapter;
- (void)dealloc;

@end
