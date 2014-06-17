/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVVideoCompositionInternal, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
    AVVideoCompositionInternal *_videoComposition;
}

@property(readonly) Class customVideoCompositorClass;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property(readonly) struct CGSize { double x1; double x2; } renderSize;
@property(readonly) float renderScale;
@property(copy,readonly) NSArray * instructions;
@property(retain,readonly) AVVideoCompositionCoreAnimationTool * animationTool;

+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (void)initialize;

- (id)instructionForFigInstruction:(void*)arg1;
- (void)_bumpChangeSeed;
- (void)setAnimationTool:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (Class)customVideoCompositorClass;
- (void)setBuiltInCompositorName:(id)arg1;
- (id)instructions;
- (id)builtInCompositorName;
- (id)_postProcessingVideoLayers;
- (int)_auxiliaryTrackID;
- (id)_postProcessingRootLayer;
- (bool)_hasPostProcessingLayers;
- (id)_auxiliaryTrackLayer;
- (bool)_hasLayerAsAuxiliaryTrack;
- (bool)isValidForAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 validationDelegate:(id)arg3;
- (unsigned long long)_changeSeed;
- (id)animationTool;
- (id)_serializableInstructions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (bool)_copyFigVideoCompositor:(const void**)arg1 andSession:(id*)arg2 recyclingSession:(id)arg3 forFigRemaker:(bool)arg4 error:(id*)arg5;
- (float)renderScale;
- (bool)_isValidReturningExceptionReason:(id*)arg1;
- (struct CGSize { double x1; double x2; })renderSize;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
