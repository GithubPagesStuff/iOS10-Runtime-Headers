/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNActionWait : SCNAction  {

  /* Error parsing encoded ivar type info: ^{SCNCActionWait=^^?f@BdddddBB@?^{__CFString}qdddd} */
    struct SCNCActionWait { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; double x7; double x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; struct __CFString {} *x14; long long x15; double x16; double x17; double x18; double x19; } *_mycaction;

}

+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
