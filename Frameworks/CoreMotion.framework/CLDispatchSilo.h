/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSObject<OS_dispatch_queue>;

@interface CLDispatchSilo : CLSilo  {
    NSObject<OS_dispatch_queue> *_queue;
}


- (id)initMain;
- (id)initWithUnderlyingQueue:(id)arg1;
- (void)afterInterval:(double)arg1 async:(id)arg2;
- (id)newTimer;
- (void)assertOutside;
- (void)assertInside;
- (void)async:(id)arg1;
- (void)sync:(id)arg1;
- (id)queue;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1;
- (void).cxx_destruct;

@end
