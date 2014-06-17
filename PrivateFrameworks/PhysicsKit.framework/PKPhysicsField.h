/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PKRegion, <NSObject>;

@interface PKPhysicsField : NSObject  {

  /* Error parsing encoded ivar type info: ^{PKCField=^^?^{RegionHolder}{mat4=(?=[4]{?=[16f]})}{mat4=(?=[4]{?=[16f]})}fBffIBB} */
    struct PKCField { int (**x1)(); struct RegionHolder {} *x2; struct mat4 { union { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; void*x_1_2_2; } x_3_1_1; } x3; struct mat4 { union { void*x_1_2_1[4]; void*x_1_2_2; } x_4_1_1; } x4; float x5; boolx6; float x7; float x8; unsigned int x9; boolx10; boolx11; } *_field;

    PKRegion *_region;
    bool_inUse;

  /* Unexpected information at end of encoded ivar type: f */
  /* Error parsing encoded ivar type info:  */
    /* Warning: Unrecognized filer type: '' using 'void*' */ void*_position;

    float _rotation;

  /* Unexpected information at end of encoded ivar type: f */
  /* Error parsing encoded ivar type info:  */
    /* Warning: Unrecognized filer type: '' using 'void*' */ void*_scale;

    <NSObject> *_representedObject;
    bool_override;
}

@property bool _inUse;
@property float strength;
@property float falloff;
@property(getter=isEnabled) bool enabled;
@property(getter=isOverride) bool override;
@property(retain) id region;
@property /* Warning: Unrecognized filer type: '' using 'void*' */ void* direction;
@property unsigned int categoryBitMask;
@property void* position;
@property float rotation;
@property void* scale;
@property float minimumRadius;
@property <NSObject> * representedObject;


- (void)setDirection:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v32@0:816 */

- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void*)direction;
     /* Encoded args for previous method: 16@0:8 */

- (void)setOverride:(bool)arg1;
- (bool)isOverride;
- (float)minimumRadius;
- (void)setIsOverride:(bool)arg1;
- (bool)override;
- (void)setFalloff:(float)arg1;
- (float)falloff;
- (void)set_field:(struct PKCField { int (**x1)(); struct RegionHolder {} *x2; struct mat4 { union { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; void*x_1_2_2; } x_3_1_1; } x3; struct mat4 { union { void*x_1_2_1[4]; void*x_1_2_2; } x_4_1_1; } x4; float x5; boolx6; float x7; float x8; unsigned int x9; boolx10; boolx11; }*)arg1;
     /* Encoded args for previous method: v24@0:8^{PKCField=^^?^{RegionHolder}{mat4=(?=[4]{?=[16f]})}{mat4=(?=[4]{?=[16f]})}fBffIBB}16 */

- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setMinimumRadius:(float)arg1;
- (void)set_inUse:(bool)arg1;
- (bool)_inUse;
- (struct PKCField { int (**x1)(); struct RegionHolder {} *x2; struct mat4 { union { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[4]; void*x_1_2_2; } x_3_1_1; } x3; struct mat4 { union { void*x_1_2_1[4]; void*x_1_2_2; } x_4_1_1; } x4; float x5; boolx6; float x7; float x8; unsigned int x9; boolx10; boolx11; }*)_field;
     /* Encoded args for previous method: ^{PKCField=^^?^{RegionHolder}{mat4=(?=[4]{?=[16f]})}{mat4=(?=[4]{?=[16f]})}fBffIBB}16@0:8 */

- (id)representedObject;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (unsigned int)categoryBitMask;
- (bool)isActive;
- (void)setPosition:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v32@0:816 */

- (void)setScale:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v32@0:816 */

- (float)rotation;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setActive:(bool)arg1;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void*)position;
     /* Encoded args for previous method: 16@0:8 */

- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void*)scale;
     /* Encoded args for previous method: 16@0:8 */

- (void)setRepresentedObject:(id)arg1;
- (void)setStrength:(float)arg1;
- (float)strength;
- (id)region;
- (void)setRegion:(id)arg1;
- (void)setRotation:(float)arg1;

@end
