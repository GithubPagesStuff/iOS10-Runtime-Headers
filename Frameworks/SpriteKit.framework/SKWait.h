/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKWait : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCWait=^^?If@BddffdBB@?qffff} */
    struct SKCWait { int (**x1)(); unsigned int x2; float x3; id x4; boolx5; double x6; double x7; float x8; float x9; double x10; boolx11; boolx12; id x13; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x14; long long x15; float x16; float x17; float x18; float x19; } *_mycaction;

}

+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
