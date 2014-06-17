/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVVideoCompositionInstruction>, NSArray, AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}

@property(readonly) AVVideoCompositionRenderContext * renderContext;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property(readonly) NSArray * sourceTrackIDs;
@property(readonly) <AVVideoCompositionInstruction> * videoCompositionInstruction;


- (void)finishCancelledRequest;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)sourceFrameByTrackID:(int)arg1;
- (id)sourceTrackIDs;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 usingSources:(id)arg5 instruction:(id)arg6;
- (struct OpaqueFigVideoCompositorFrame { }*)compositionFrame;
- (void)_willDeallocOrFinalize;
- (id)videoCompositionInstruction;
- (id)renderContext;
- (void)finishWithError:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
