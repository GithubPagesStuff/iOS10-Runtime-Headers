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

@class NSArray;

@interface SKSequence : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCSequence=^^?If@BddffdBB@?qffff{vector<SKCAction *, std::__1::allocator<SKCAction *> >=^^{SKCAction}^^{SKCAction}{__compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> >=^^{SKCAction}}}Q} */
    struct SKCSequence { int (**x1)(); unsigned int x2; float x3; id x4; boolx5; double x6; double x7; float x8; float x9; double x10; boolx11; boolx12; id x13; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x14; long long x15; float x16; float x17; float x18; float x19; struct vector<SKCAction *, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_20_1_1; struct SKCAction {} **x_20_1_2; struct __compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_3_2_1; } x_20_1_3; } x20; unsigned long long x21; } *_mycaction;

    NSArray *_actions;
    unsigned long long _animIndex;
}

+ (id)sequenceWithActions:(id)arg1;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
