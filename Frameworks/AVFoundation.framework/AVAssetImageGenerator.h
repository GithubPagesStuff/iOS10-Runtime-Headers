/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVVideoCompositing>, AVAsset, NSString, AVAssetImageGeneratorInternal, AVVideoComposition;

@interface AVAssetImageGenerator : NSObject  {
    AVAssetImageGeneratorInternal *_priv;
}

@property(readonly) AVAsset * asset;
@property bool appliesPreferredTrackTransform;
@property struct CGSize { double x1; double x2; } maximumSize;
@property(copy) NSString * apertureMode;
@property(copy) AVVideoComposition * videoComposition;
@property(readonly) <AVVideoCompositing> * customVideoCompositor;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceBefore;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceAfter;

+ (id)assetImageGeneratorWithAsset:(id)arg1;

- (void)_serverDied;
- (void)_failedToGenerateCGImage:(id)arg1;
- (void)_didGenerateCGImage:(id)arg1;
- (void)cancelAllCGImageGeneration;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(id)arg2;
- (id)_requestWithRequestID:(id)arg1;
- (id)customVideoCompositor;
- (bool)_ensureFigAssetImageGeneratorReturningError:(id*)arg1;
- (id)_optionsDictionary;
- (struct CGImage { }*)_copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingAssetReader:(id)arg2 error:(id*)arg3;
- (id)_makeAutoreleasedAssetReader;
- (void)setVideoComposition:(id)arg1;
- (struct __CFDictionary { }*)_createPixelBufferAttributesWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_scaledSizeForRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_NSErrorForError:(int)arg1;
- (id)videoComposition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceAfter;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceBefore;
- (id)apertureMode;
- (bool)appliesPreferredTrackTransform;
- (id)asset;
- (struct CGImage { }*)copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(id*)arg3;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithAsset:(id)arg1;
- (void)setRequestedTimeToleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRequestedTimeToleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAppliesPreferredTrackTransform:(bool)arg1;
- (void)setApertureMode:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
