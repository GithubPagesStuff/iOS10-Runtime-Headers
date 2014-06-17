/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSObject<OS_dispatch_queue>, NSTimer;

@interface MSDaemon : NSObject  {
    bool_stabilizedIsBusy;
    int _busyCount;
    int _UIBusyCount;
    NSObject<OS_dispatch_queue> *_idleCountQueue;
    NSTimer *_hysteresisTimer;
}

@property int busyCount;
@property int UIBusyCount;
@property(retain) NSTimer * hysteresisTimer;
@property bool stabilizedIsBusy;
@property(retain) NSObject<OS_dispatch_queue> * idleCountQueue;


- (void)setUIBusyCount:(int)arg1;
- (void)setBusyCount:(int)arg1;
- (void)releaseUIBusy;
- (void)retainUIBusy;
- (int)UIBusyCount;
- (int)busyCount;
- (void)setIdleCountQueue:(id)arg1;
- (void)stabilizedDidIdle;
- (void)_didChangeIdleBusyState:(bool)arg1;
- (void)_hysteresisTimerDidFire:(id)arg1;
- (void)stabilizedDidUnidle;
- (void)setStabilizedIsBusy:(bool)arg1;
- (bool)stabilizedIsBusy;
- (void)setHysteresisTimer:(id)arg1;
- (id)hysteresisTimer;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (id)idleCountQueue;
- (void)didUnidle;
- (void)didIdle;
- (void)releaseBusy;
- (void)retainBusy;
- (bool)isBusy;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
