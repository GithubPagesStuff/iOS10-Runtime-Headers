/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID  {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (Class)classForStore:(id)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)initWithEntity:(id)arg1;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (void)_release_1;
+ (id)_retain_1;
+ (long long)version;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (void)release;
+ (id)retain;
+ (void)initialize;
+ (bool)accessInstanceVariablesDirectly;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)initWithEntity:(id)arg1;
- (id)URIRepresentation;
- (bool)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (void)_setPersistentStore:(id)arg1;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)_referenceData;
- (id)_retainedURIString;
- (id)entity;
- (bool)isTemporaryID;
- (id)persistentStore;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end
