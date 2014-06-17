/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAutoEnhanceFace : NSObject  {
    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}

@property(readonly) int size;
@property(readonly) int centerX;
@property(readonly) int centerY;
@property(readonly) double I;
@property(readonly) double Q;


- (double)Q;
- (double)I;
- (int)centerY;
- (int)centerX;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andImage:(id)arg2 usingContext:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (id)description;
- (int)size;

@end
