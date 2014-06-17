/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_queue>;

@interface VKDispatch : NSObject  {
    NSObject<OS_dispatch_queue> *_homeQueue;
    NSObject<OS_dispatch_queue> *_layoutQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> * homeQueue;
@property(readonly) NSObject<OS_dispatch_queue> * layoutQueue;
@property(readonly) NSObject<OS_dispatch_queue> * renderQueue;

+ (id)textureManagerRootQueue;
+ (id)iconRenderQueue;
+ (id)tileDecodeStylingQueue;
+ (id)defaultDispatch;
+ (id)tileDecodeQueue;

- (id)_newRenderQueue:(const char *)arg1;
- (id)_newLayoutQueue:(const char *)arg1;
- (id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3;
- (id)initWithHomeQueue:(id)arg1;
- (id)homeQueue;
- (id)layoutQueue;
- (id)renderQueue;
- (void)dealloc;
- (id)description;

@end
