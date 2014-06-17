/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer  {
    unsigned int _systemGesturesRecognitionPossible : 1;
    unsigned int _waitingForSystemGestureStateNotification : 1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}


- (void)setEnabled:(bool)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (bool)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)_timeOut;
- (int)_gateGestureType;
- (id)_gateGestureTypeString;
- (void)_resetGestureRecognizer;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
