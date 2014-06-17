/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString, NSData, NSOrderedSet, NSFetchRequest;

@interface PLFetchingAlbum : _PLFetchingAlbum  {
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
}

@property(retain) NSFetchRequest * fetchRequest;
@property(retain) NSData * customQueryParameters;
@property(retain) NSString * customQueryType;
@property(readonly) bool hasAssetsCache;
@property(retain) NSOrderedSet * fetchedAssets;

+ (bool)contextShouldIgnoreChangesForFetchRequest;
+ (bool)contextShouldIgnoreChangesForFetchedAssetsSet;
+ (bool)contextShouldIgnoreChangesForFetchedAssets;
+ (id)sortDescriptorsForAlbumKind:(int)arg1;
+ (id)predicateForAlbumKind:(int)arg1;
+ (id)_panoramasAlbumPredicate;

- (bool)mayHaveAssetsInCommon:(id)arg1;
- (id)fastPointerAccessSetForAssets:(id)arg1;
- (bool)hasAssetsCache;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (id)_cachedKeyAssets;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;
- (void)setupFetchRequest;
- (unsigned long long)batchSize;
- (void)updateSnapshotAndClearCaches:(id)arg1;
- (id)primitiveAssets;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (unsigned long long)approximateCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)mutableAssets;
- (void)batchFetchAssets:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (void)awakeFromInsert;
- (void)setFetchRequest:(id)arg1;
- (void)didTurnIntoFault;
- (void)awakeFromFetch;
- (id)fetchRequest;
- (bool)isEmpty;
- (unsigned long long)count;
- (void)dealloc;

@end
