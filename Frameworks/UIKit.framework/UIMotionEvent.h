/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer;

@interface UIMotionEvent : UIInternalEvent  {
    id _motionAccelerometer;
    long long _subtype;
    int _shakeState;
    long long _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer *_idleTimer;
    bool_sentMotionBegan;
    float _lowPassState[10];
    unsigned long long _lowPassStateIndex;
    unsigned long long _highPassStateIndex;
    float _highPassState[2];
    int notifyToken;
}

@property int shakeState;


- (long long)subtype;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (long long)type;
- (void)dealloc;
- (id)description;
- (id)_init;
- (float)_lowPass:(float)arg1;
- (float)_highPass:(float)arg1;
- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;
- (void)_resetLowPassState;
- (void)_idleTimerFired;
- (bool)_detectWhenNotActive;
- (int)shakeState;
- (void)_updateAccelerometerEnabled;
- (void)_willSuspend;
- (void)_willResume;
- (void)_enablePeakDetectionIfNecessary;
- (int)_shakeState;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (void)setShakeState:(int)arg1;
- (void)_setSubtype:(long long)arg1;
- (bool)_isDetectingMotionEvents;

@end
