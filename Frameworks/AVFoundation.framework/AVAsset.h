/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVAssetInternal;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVAssetInternal *_asset;
}

@property(getter=MP_canAffectNetworkPlayability,setter=MP_setCanAffectNetworkPlayability:) bool MP_canAffectNetworkPlayability;
@property(readonly) id propertyListForProxy;
@property(readonly) bool isProxy;
@property(readonly) NSArray * availableChapterLocales;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) float preferredRate;
@property(readonly) float preferredVolume;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property(readonly) struct CGSize { double x1; double x2; } naturalSize;

+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(bool)arg4;
+ (id)assetWithURL:(id)arg1;
+ (id)assetProxyWithPropertyList:(id)arg1;

- (id)metadata;
- (id)creationDate;
- (id)_exportURL;
- (bool)_containsAtLeastOnePlayableVideoTrack;
- (bool)_containsAtLeastOnePlayableAudioTrack;
- (id)_chapterTracks;
- (int)unusedTrackID;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLocale:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;
- (id)_chapterDataTypeForMediaSubType:(int)arg1;
- (void)_loadChapterInfo;
- (bool)_hasResourceLoaderDelegate;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (void)_tracksDidChange;
- (id)_ID3Metadata;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)subtitleAlternatesTrackGroup;
- (id)audioAlternatesTrackGroup;
- (unsigned long long)referenceRestrictions;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_absoluteURL;
- (long long)statusOfValueForKey:(id)arg1;
- (id)_comparisonToken;
- (bool)canContainMovieFragments;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isReadable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)hasProtectedContent;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)lyrics;
- (id)trackReferences;
- (id)mediaSelectionGroups;
- (id)_firstTrackGroupWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
- (id)trackGroups;
- (id)alternateTrackGroups;
- (bool)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (bool)_isStreaming;
- (id)availableChapterLocales;
- (id)_assetInspectorLoader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)propertyListForProxy;
- (id)_assetInspector;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_weakReference;
- (id)tracks;
- (id)tracksWithMediaType:(id)arg1;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoading;
- (id)commonMetadata;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)isProxy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)valueForUndefinedKey:(id)arg1;
- (void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3;
- (void)MP_setCanAffectNetworkPlayability:(bool)arg1;
- (bool)MP_canAffectNetworkPlayability;

@end
