/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CAShapeLayer;

@interface PKReticleView : UIView  {
    CAShapeLayer *_shapeLayer;
    struct CGPath { } *_bouncePathSquare;
    struct CGPath { } *_bouncePathRectangle;
    struct CGColor { } *_shadowColorDefault;
    struct CGColor { } *_shadowColorSuccess;
    struct CGColor { } *_shadowColorFailure;
}

+ (Class)layerClass;

- (void)blinkForSuccess:(bool)arg1 completion:(id)arg2;
- (void)positionWithCorners:(struct CGPoint { double x1; double x2; }*)arg1 completion:(id)arg2;
- (struct CGPoint { double x1; double x2; }*)_makeSanitizedCorners:(struct CGPoint { double x1; double x2; }*)arg1;
- (struct CGPath { }*)_createReticlePathForPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reset;

@end
