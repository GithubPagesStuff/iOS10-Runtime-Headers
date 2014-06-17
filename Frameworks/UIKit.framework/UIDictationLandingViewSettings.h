/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationLandingViewSettings : NSObject  {
    bool_useBlackWave;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _shrinkDuration;
    double _colorTransitionInDuration;
    double _colorTransitionOutDuration;
    double _circleRPM;
}

@property double fadeInDuration;
@property double fadeOutDuration;
@property double shrinkDuration;
@property double colorTransitionInDuration;
@property double colorTransitionOutDuration;
@property double circleRPM;
@property bool useBlackWave;

+ (id)sharedInstance;

- (id)init;
- (bool)useBlackWave;
- (double)circleRPM;
- (double)colorTransitionOutDuration;
- (double)colorTransitionInDuration;
- (double)shrinkDuration;
- (double)fadeInDuration;
- (void)setCircleRPM:(double)arg1;
- (void)setColorTransitionOutDuration:(double)arg1;
- (void)setColorTransitionInDuration:(double)arg1;
- (void)setShrinkDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setUseBlackWave:(bool)arg1;
- (double)fadeOutDuration;

@end
