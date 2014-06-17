/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject  {
    double _greatestScreenScale;
    GKEventEmitter *_emitter;
}

@property(readonly) double greatestScreenScale;
@property(retain) GKEventEmitter * emitter;

+ (double)_scaleForCurrentDisplayConfiguration;
+ (id)sharedController;

- (void)_screensDidChange:(id)arg1;
- (double)greatestScreenScale;
- (id)emitter;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)setEmitter:(id)arg1;
- (id)init;
- (void)dealloc;

@end
