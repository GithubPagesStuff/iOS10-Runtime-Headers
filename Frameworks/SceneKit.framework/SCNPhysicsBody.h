/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {
    id _reserved;
    SCNNode *_node;
    double _mass;
    double _friction;
    double _restitution;
    double _rollingFriction;
    SCNPhysicsShape *_physicsShape;
    long long _type;
    double _damping;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    } _angularVelocity;
    double _angularDamping;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _velocityFactor;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _angularVelocityFactor;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _velocity;
    unsigned long long _categoryBitMask;
    unsigned long long _collisionBitMask;
    bool_resting;
    bool_allowsResting;
    bool_isDefaultShape;
    struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_3_1_2; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; struct btVector3 { union { float x_1_2_1[4]; } x_6_1_1; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_27_1_1[3]; } x27; struct btVector3 { union { float x_1_2_1[4]; } x_28_1_1; } x28; struct btVector3 { union { float x_1_2_1[4]; } x_29_1_1; } x29; float x30; struct btVector3 { union { float x_1_2_1[4]; } x_31_1_1; } x31; struct btVector3 { union { float x_1_2_1[4]; } x_32_1_1; } x32; struct btVector3 { union { float x_1_2_1[4]; } x_33_1_1; } x33; struct btVector3 { union { float x_1_2_1[4]; } x_34_1_1; } x34; struct btVector3 { union { float x_1_2_1[4]; } x_35_1_1; } x35; struct btVector3 { union { float x_1_2_1[4]; } x_36_1_1; } x36; float x37; float x38; boolx39; float x40; float x41; float x42; float x43; float x44; float x45; struct btMotionState {} *x46; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_47_1_1; int x_47_1_2; int x_47_1_3; struct btTypedConstraint {} **x_47_1_4; boolx_47_1_5; } x47; int x48; int x49; struct btVector3 { union { float x_1_2_1[4]; } x_50_1_1; } x50; struct btVector3 { union { float x_1_2_1[4]; } x_51_1_1; } x51; struct btVector3 { union { float x_1_2_1[4]; } x_52_1_1; } x52; struct btVector3 { union { float x_1_2_1[4]; } x_53_1_1; } x53; struct btVector3 { union { float x_1_2_1[4]; } x_54_1_1; } x54; struct btVector3 { union { float x_1_2_1[4]; } x_55_1_1; } x55; int x56; int x57; } *_body;
}

@property long long type;
@property double mass;
@property double friction;
@property double restitution;
@property double rollingFriction;
@property(retain) SCNPhysicsShape * physicsShape;
@property(readonly) bool isResting;
@property bool allowsResting;
@property struct SCNVector3 { float x1; float x2; float x3; } velocity;
@property struct SCNVector4 { float x1; float x2; float x3; float x4; } angularVelocity;
@property double damping;
@property double angularDamping;
@property struct SCNVector3 { float x1; float x2; float x3; } velocityFactor;
@property struct SCNVector3 { float x1; float x2; float x3; } angularVelocityFactor;
@property unsigned long long categoryBitMask;
@property unsigned long long collisionBitMask;

+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)staticBody;
+ (id)bodyWithType:(long long)arg1 shape:(id)arg2;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (void)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)moveToPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)resetToTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)_activate;
- (void)_didDecodeSCNPhysicsBody:(id)arg1;
- (void)setAngularVelocityFactor:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })angularVelocityFactor;
- (void)setVelocityFactor:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })velocityFactor;
- (void)setAllowsResting:(bool)arg1;
- (bool)allowsResting;
- (void)setPhysicsShape:(id)arg1;
- (id)physicsShape;
- (void)setRollingFriction:(double)arg1;
- (double)rollingFriction;
- (void)clearAllForces;
- (void)applyTorque:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 impulse:(bool)arg2;
- (void)applyForce:(struct SCNVector3 { float x1; float x2; float x3; })arg1 atPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg2 impulse:(bool)arg3;
- (void)applyForce:(struct SCNVector3 { float x1; float x2; float x3; })arg1 impulse:(bool)arg2;
- (void)moveToTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)initWithType:(long long)arg1 shape:(id)arg2;
- (struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_3_1_2; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; struct btVector3 { union { float x_1_2_1[4]; } x_6_1_1; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_27_1_1[3]; } x27; struct btVector3 { union { float x_1_2_1[4]; } x_28_1_1; } x28; struct btVector3 { union { float x_1_2_1[4]; } x_29_1_1; } x29; float x30; struct btVector3 { union { float x_1_2_1[4]; } x_31_1_1; } x31; struct btVector3 { union { float x_1_2_1[4]; } x_32_1_1; } x32; struct btVector3 { union { float x_1_2_1[4]; } x_33_1_1; } x33; struct btVector3 { union { float x_1_2_1[4]; } x_34_1_1; } x34; struct btVector3 { union { float x_1_2_1[4]; } x_35_1_1; } x35; struct btVector3 { union { float x_1_2_1[4]; } x_36_1_1; } x36; float x37; float x38; boolx39; float x40; float x41; float x42; float x43; float x44; float x45; struct btMotionState {} *x46; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_47_1_1; int x_47_1_2; int x_47_1_3; struct btTypedConstraint {} **x_47_1_4; boolx_47_1_5; } x47; int x48; int x49; struct btVector3 { union { float x_1_2_1[4]; } x_50_1_1; } x50; struct btVector3 { union { float x_1_2_1[4]; } x_51_1_1; } x51; struct btVector3 { union { float x_1_2_1[4]; } x_52_1_1; } x52; struct btVector3 { union { float x_1_2_1[4]; } x_53_1_1; } x53; struct btVector3 { union { float x_1_2_1[4]; } x_54_1_1; } x54; struct btVector3 { union { float x_1_2_1[4]; } x_55_1_1; } x55; int x56; int x57; }*)_createBody;
- (struct __C3DScene { }*)sceneRef;
- (struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_3_1_2; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; struct btVector3 { union { float x_1_2_1[4]; } x_6_1_1; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_27_1_1[3]; } x27; struct btVector3 { union { float x_1_2_1[4]; } x_28_1_1; } x28; struct btVector3 { union { float x_1_2_1[4]; } x_29_1_1; } x29; float x30; struct btVector3 { union { float x_1_2_1[4]; } x_31_1_1; } x31; struct btVector3 { union { float x_1_2_1[4]; } x_32_1_1; } x32; struct btVector3 { union { float x_1_2_1[4]; } x_33_1_1; } x33; struct btVector3 { union { float x_1_2_1[4]; } x_34_1_1; } x34; struct btVector3 { union { float x_1_2_1[4]; } x_35_1_1; } x35; struct btVector3 { union { float x_1_2_1[4]; } x_36_1_1; } x36; float x37; float x38; boolx39; float x40; float x41; float x42; float x43; float x44; float x45; struct btMotionState {} *x46; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_47_1_1; int x_47_1_2; int x_47_1_3; struct btTypedConstraint {} **x_47_1_4; boolx_47_1_5; } x47; int x48; int x49; struct btVector3 { union { float x_1_2_1[4]; } x_50_1_1; } x50; struct btVector3 { union { float x_1_2_1[4]; } x_51_1_1; } x51; struct btVector3 { union { float x_1_2_1[4]; } x_52_1_1; } x52; struct btVector3 { union { float x_1_2_1[4]; } x_53_1_1; } x53; struct btVector3 { union { float x_1_2_1[4]; } x_54_1_1; } x54; struct btVector3 { union { float x_1_2_1[4]; } x_55_1_1; } x55; int x56; int x57; }*)_handle;
- (id)_owner;
- (void)_setOwner:(id)arg1;
- (void)_removeOwner;
- (void)setDamping:(double)arg1;
- (double)damping;
- (bool)isResting;
- (double)mass;
- (void)setAngularVelocity:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setVelocity:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setCollisionBitMask:(unsigned long long)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setRestitution:(double)arg1;
- (void)setFriction:(double)arg1;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })angularVelocity;
- (struct SCNVector3 { float x1; float x2; float x3; })velocity;
- (unsigned long long)collisionBitMask;
- (unsigned long long)categoryBitMask;
- (double)restitution;
- (double)friction;
- (void)setMass:(double)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)resetTransform;
- (double)angularDamping;
- (void)setAngularDamping:(double)arg1;

@end
