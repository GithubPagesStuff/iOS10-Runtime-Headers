/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver  {
    NSArray *_times;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

}


- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 times:(id)arg2 queue:(id)arg3 block:(id)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_previousFiringTimeBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_nextFiringTimeAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_fireBlock;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)_effectiveRateChanged;
- (void)dealloc;

@end
