/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKNode, NSMutableArray;

@interface SKReach : SKAction  {
    SKNode *_ikRoot;
    struct CGPoint { 
        double x; 
        double y; 
    } _goalPosition;
    NSMutableArray *_ikChain;
    double _velocity;
    bool_timeConstrained;
    double _zRotationSpeed;
}

+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(double)arg4;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 zRotationSpeed:(double)arg3 maxDuration:(double)arg4;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 velocity:(double)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 velocity:(double)arg3;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 duration:(double)arg3;

- (void)solveIKWithTarget:(id)arg1;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
