/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {
    NSOrderedSet *_containers;
}

@property(retain) NSOrderedSet * containers;
@property(readonly) unsigned long long containersCount;


- (id)initWithAssetContainer:(id)arg1;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (bool)canEditContainers;
- (id)initWithAssetContainers:(id)arg1;
- (id)photoLibrary;
- (id)containers;
- (void)setContainers:(id)arg1;
- (id)managedObjectContext;
- (bool)isEmpty;
- (void)dealloc;

@end
