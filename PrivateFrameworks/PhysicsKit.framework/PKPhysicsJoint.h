/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSCoding> {
    bool_inUse;
    bool_implicit;
    struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; } *_baseJoint;
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
}

@property struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; }* _joint;
@property(readonly) struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; boolx5; }* _jointDef;
@property(retain) PKPhysicsBody * bodyA;
@property(retain) PKPhysicsBody * bodyB;
@property(readonly) struct CGVector { double x1; double x2; } reactionForce;
@property(readonly) double reactionTorque;


- (void)create;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; boolx5; }*)_jointDef;
- (void)set_implicit:(bool)arg1;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; }*)arg1;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; boolx9; boolx10; void *x11; }*)_joint;
- (double)reactionTorque;
- (struct CGVector { double x1; double x2; })reactionForce;
- (void)setBodyB:(id)arg1;
- (void)setBodyA:(id)arg1;
- (id)bodyB;
- (id)bodyA;
- (void)set_inUse:(bool)arg1;
- (bool)_inUse;
- (bool)_implicit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
