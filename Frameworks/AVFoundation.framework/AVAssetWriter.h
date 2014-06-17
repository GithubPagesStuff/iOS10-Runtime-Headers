/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray, NSURL, NSError, AVAssetWriterHelper, AVAssetWriterInternal;

@interface AVAssetWriter : NSObject  {
    AVAssetWriterInternal *_internal;
}

@property(copy,readonly) NSURL * outputURL;
@property(copy,readonly) NSString * outputFileType;
@property(readonly) NSArray * availableMediaTypes;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property(copy) NSArray * metadata;
@property bool shouldOptimizeForNetworkUse;
@property(copy) NSURL * directoryForTemporaryFiles;
@property(readonly) NSArray * inputs;
@property(getter=_helper,retain,readonly) AVAssetWriterHelper * helper;

+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
+ (id)_errorForOSStatus:(int)arg1;
+ (void)initialize;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setMetadata:(id)arg1;
- (id)metadata;
- (long long)status;
- (id)outputURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)outputFileType;
- (id)inputs;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (bool)_supportsSampleReferencesReturningError:(id*)arg1;
- (bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (bool)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)startWriting;
- (void)addInputGroup:(id)arg1;
- (bool)canAddInputGroup:(id)arg1;
- (bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)availableMediaTypes;
- (id)_helper;
- (bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(id)arg3;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
- (id)inputGroups;
- (void)setPreferredRate:(float)arg1;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)directoryForTemporaryFiles;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (bool)shouldOptimizeForNetworkUse;
- (void)setPreferredVolume:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (float)preferredVolume;
- (float)preferredRate;
- (void)addInput:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (id)init;
- (id)error;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end
