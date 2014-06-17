/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSSQLStoreMappingGenerator, NSMutableDictionary, NSSQLOptLockKey, NSMutableArray, NSSQLStatement, NSString, NSSQLEntityKey, NSSQLModel, NSKnownKeysMappingStrategy, NSSQLPrimaryKey, NSArray, NSSQLEntity;

@interface NSSQLEntity : NSStoreMapping  {
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    NSMutableArray *_virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _toOneRange;
    long long _maxPK;
    NSSQLStatement *_insertStatementCache;
    NSSQLStatement *_deletionStatementCache;
    NSSQLStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    struct __CFDictionary { } *_correlationInsertCache;
    struct __CFDictionary { } *_correlationDeleteCache;
    struct __CFDictionary { } *_correlationMasterReorderCache;
    struct __CFDictionary { } *_correlationMasterReorderCachePart2;
    struct __CFDictionary { } *_correlationReorderCache;
    void *_fetch_entity_plan;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    unsigned int _pkCount;
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _reserved : 31; 
    } _sqlentityFlags;
}


- (bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationDeleteStatementForRelationship:(id)arg1;
- (void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationReorderStatementForRelationship:(id)arg1;
- (void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2;
- (id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationMasterReorderStatementForRelationship:(id)arg1;
- (void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationInsertStatementForRelationship:(id)arg1;
- (id)deletionStatement;
- (id)insertStatement;
- (bool)_entityIsBroken:(id*)arg1;
- (void)_generateInverseRelationshipsAndMore;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (bool)isKindOfSQLEntity:(id)arg1;
- (id)virtualForeignKeyColumns;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (id)toManyRelationships;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(struct __CFDictionary { }*)arg3;
- (struct __CFDictionary { }*)createCorrelationCacheDictionary;
- (void)cacheDeletionStatement:(id)arg1;
- (void)cacheInsertStatement:(id)arg1;
- (bool)_collectFKSlots:(id)arg1 error:(id*)arg2;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)setSuperentity:(id)arg1;
- (void)_generateProperties;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (void)_addColumnToFetch:(id)arg1;
- (void)_addRootColumnToFetch:(id)arg1;
- (id)rootEntity;
- (void)_doPostModelGenerationCleanup;
- (void)clearCachedStatements;
- (long long)nextPrimaryKey64;
- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;
- (void)_resetPKCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_toOneRange;
- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;
- (id)preparedFaultingCachesForRelationship:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1;
- (id)faultingStatement;
- (id)relationshipNamed:(id)arg1;
- (bool)hasAttributesWithExternalDataReferences;
- (void)_setMaxPK:(long long)arg1;
- (unsigned int)_pkCount;
- (id)attributeNamed:(id)arg1;
- (id)propertyMapping;
- (id)manyToManyRelationships;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)mappingGenerator;
- (id)columnsToCreate;
- (id)model;
- (id)entityDescription;
- (void*)_odiousHashHack;
- (id)subentities;
- (void)_addSubentity:(id)arg1;
- (void)setSubentities:(id)arg1;
- (id)superentity;
- (id)_propertySearchMapping;
- (id)externalName;
- (unsigned int)subentityMaxID;
- (unsigned int)entityID;
- (bool)isRootEntity;
- (bool)hasSubentities;
- (id)optLockKey;
- (id)attributeColumns;
- (id)foreignOrderKeyColumns;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (id)propertyNamed:(id)arg1;
- (bool)hasInheritance;
- (id)columnsToFetch;
- (id)subentityKey;
- (id)tableName;
- (id)propertiesByName;
- (id)primaryKey;
- (id)attributes;
- (id)name;
- (id)properties;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end
