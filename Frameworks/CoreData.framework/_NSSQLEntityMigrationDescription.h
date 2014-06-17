/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSMutableDictionary, NSEntityMapping, NSMutableArray;

@interface _NSSQLEntityMigrationDescription : NSObject  {
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSSQLEntity *_dstEntity;
    NSSQLEntity *_srcEntity;
    int _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
}

@property(readonly) NSSQLEntity * sourceEntity;
@property(readonly) NSSQLEntity * destinationEntity;
@property(readonly) NSEntityMapping * entityMapping;
@property(readonly) int migrationType;


- (int)migrationType;
- (id)nextPropertyTransform;
- (id)transformedManyToManys;
- (id)removedManyToManys;
- (id)addedManyToManys;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)sourceEntitiesByToOneWithNewEntityKey;
- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2;
- (id)entityMapping;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)sourceEntity;
- (id)destinationEntity;
- (void)dealloc;

@end
