/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector  {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}


- (unsigned int)_figMediaType;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)alternateGroupID;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (bool)requiresFrameReordering;
- (bool)isSelfContained;
- (id)formatDescriptions;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)asset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (float)preferredVolume;
- (int)trackID;
- (bool)isEnabled;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)totalSampleDataLength;
- (id)mediaType;
- (id)languageCode;
- (id)extendedLanguageTag;
- (id)commonMetadata;
- (long long)layer;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;

@end
