/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior  {
    struct { 
        SCNPhysicsBody *bodyA; 
        SCNPhysicsBody *bodyB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorB; 
    } _definition;
    struct btPoint2PointConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; boolx6; boolx7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_14_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_14_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_14_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_14_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_14_1_5; float x_14_1_6; } x14[3]; struct btVector3 { union { float x_1_2_1[4]; } x_15_1_1; } x15; struct btVector3 { union { float x_1_2_1[4]; } x_16_1_1; } x16; int x17; float x18; float x19; boolx20; struct btConstraintSetting { float x_21_1_1; float x_21_1_2; float x_21_1_3; } x21; } *_constraint;
    SCNPhysicsWorld *_world;
}

@property(readonly) SCNPhysicsBody * bodyA;
@property struct SCNVector3 { float x1; float x2; float x3; } anchorA;
@property(readonly) SCNPhysicsBody * bodyB;
@property struct SCNVector3 { float x1; float x2; float x3; } anchorB;

+ (id)jointWithBody:(id)arg1 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg2;
+ (id)jointWithBodyA:(id)arg1 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg4;
+ (id)SCNJSExportProtocol;

- (id)initWithBody:(id)arg1 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg2;
- (id)initWithBodyA:(id)arg1 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg4;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)setAnchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorB;
- (void)setAnchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorA;
- (id)bodyB;
- (id)bodyA;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;

@end
