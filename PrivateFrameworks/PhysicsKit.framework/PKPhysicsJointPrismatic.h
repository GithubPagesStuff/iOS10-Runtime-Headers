/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PKPhysicsJointPrismatic : PKPhysicsJoint  {
    struct b2PrismaticJointDef { 
        int type; 
        void *userData; 
        struct b2Body {} *bodyA; 
        struct b2Body {} *bodyB; 
        boolcollideConnected; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorA; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorB; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAxisA; 
        float referenceAngle; 
        boolenableLimit; 
        float lowerTranslation; 
        float upperTranslation; 
        boolenableMotor; 
        float maxMotorForce; 
        float motorSpeed; 
    } _jointDef;
    struct b2PrismaticJoint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; struct b2Vec2 { float x_13_1_1; float x_13_1_2; } x13; struct b2Vec2 { float x_14_1_1; float x_14_1_2; } x14; struct b2Vec2 { float x_15_1_1; float x_15_1_2; } x15; float x16; struct b2Vec3 { float x_17_1_1; float x_17_1_2; float x_17_1_3; } x17; float x18; float x19; float x20; float x21; float x22; boolx23; boolx24; int x25; int x26; int x27; struct b2Vec2 { float x_28_1_1; float x_28_1_2; } x28; struct b2Vec2 { float x_29_1_1; float x_29_1_2; } x29; float x30; float x31; float x32; float x33; struct b2Vec2 { float x_34_1_1; float x_34_1_2; } x34; struct b2Vec2 { float x_35_1_1; float x_35_1_2; } x35; float x36; float x37; float x38; float x39; struct b2Mat33 { struct b2Vec3 { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_40_1_1; struct b2Vec3 { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_40_1_2; struct b2Vec3 { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_40_1_3; } x40; float x41; } *_joint;
    struct CGPoint { 
        double x; 
        double y; 
    } _anchor;
    struct CGVector { 
        double dx; 
        double dy; 
    } _axis;
}

@property bool shouldEnableLimits;
@property double lowerDistanceLimit;
@property double upperDistanceLimit;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3 axis:(struct CGVector { double x1; double x2; })arg4;

- (void)setUpperDistanceLimit:(double)arg1;
- (void)setLowerDistanceLimit:(double)arg1;
- (double)upperDistanceLimit;
- (double)lowerDistanceLimit;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3 axis:(struct CGVector { double x1; double x2; })arg4;
- (void)setShouldEnableLimits:(bool)arg1;
- (bool)shouldEnableLimits;
- (void)create;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; boolx5; }*)_jointDef;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; }*)arg1;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; }*)_joint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id).cxx_construct;

@end
