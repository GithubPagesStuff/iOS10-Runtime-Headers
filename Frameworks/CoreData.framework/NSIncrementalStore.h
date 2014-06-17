/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore  {
    NSDictionary *_storeMetadata;
    unsigned long long _lastIdentifier;
    void *_reserveda;
    void *_reservedb;
}

+ (id)identifierForNewStoreAtURL:(id)arg1;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;

- (id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (void)_setMetadata:(id)arg1 includeVersioning:(bool)arg2;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)loadMetadata:(id*)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)_preflightCrossCheck;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_rawMetadata__;
- (id)referenceObjectForObjectID:(id)arg1;
- (bool)load:(id*)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)dealloc;

@end
