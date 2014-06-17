/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet;

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer> {
}

@property(retain) NSOrderedSet * moments;
@property(readonly) unsigned long long containersCount;

+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1 createIfNecessary:(bool)arg2;
+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (void)addMomentsObject:(id)arg1;
- (void)replaceMomentsAtIndexes:(id)arg1 withMoments:(id)arg2;
- (void)removeMomentsAtIndexes:(id)arg1;
- (void)insertMoments:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsAtIndex:(unsigned long long)arg1;
- (void)addMoments:(id)arg1;
- (void)removeMoments:(id)arg1;
- (void)insertObject:(id)arg1 inMomentsAtIndex:(unsigned long long)arg2;
- (void)removeMomentsObject:(id)arg1;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (bool)canEditContainers;
- (id)containers;
- (void)prepareForDeletion;
- (id)_typeDescription;
- (bool)isEmpty;

@end
