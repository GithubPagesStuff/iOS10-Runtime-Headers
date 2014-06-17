/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@class PKQuadTree;

@interface PKPhysicsGrid : NSObject  {
    struct shared_ptr<PKCGrid> { 
        struct PKCGrid {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } grid;
    PKQuadTree *quadTree;
}

@property(readonly) int width;
@property(readonly) int height;
@property struct shared_ptr<PKCGrid> { struct PKCGrid {} *x1; struct __shared_weak_count {} *x2; } gridPtr;

+ (id)vectorGridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 accuracy:(float)arg4;
+ (id)gridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 alphaThreshold:(float)arg4 accuracy:(float)arg5;
+ (id)gridFromOccupancyArray:(const char *)arg1 bytePitch:(int)arg2 width:(int)arg3 height:(int)arg4;

- (int)height;
- (int)width;
- (void)setGridPtr:(struct shared_ptr<PKCGrid> { struct PKCGrid {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)physicsBodyFromLVS0:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct shared_ptr<PKPath> { struct PKPath {} *x1; struct __shared_weak_count {} *x2; })pathFromOutlineWithSmoothingThreshold:(double)arg1 bounds:(struct { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)physicsBodyFromSmoothedOutline:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (unsigned char)gridDataAtX:(int)arg1 y:(int)arg2 z:(int)arg3;
- (bool)isGridRegionOccupied:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;
- (struct shared_ptr<PKCGrid> { struct PKCGrid {} *x1; struct __shared_weak_count {} *x2; })gridPtr;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
