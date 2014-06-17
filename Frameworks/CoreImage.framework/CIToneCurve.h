/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIToneCurve : CIFilter <_CIFilterProperties> {
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIVector *inputPoint2;
    CIVector *inputPoint3;
    CIVector *inputPoint4;
    CIImage *_curveImage;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint0;
@property(copy) CIVector * inputPoint1;
@property(copy) CIVector * inputPoint2;
@property(copy) CIVector * inputPoint3;
@property(copy) CIVector * inputPoint4;

+ (id)curveImageFromPoints:(const struct CGPoint { double x1; double x2; }*)arg1 linear:(bool)arg2;
+ (void)splineCurveTable:(double*)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint { double x1; double x2; }*)arg4;
+ (id)curveImageFromPoints:(const struct CGPoint { double x1; double x2; }*)arg1;
+ (id)customAttributes;

- (id)inputPoint4;
- (id)inputPoint3;
- (id)inputPoint2;
- (id)inputPoint1;
- (id)inputPoint0;
- (id)_kernel16;
- (void)setInputPoint4:(id)arg1;
- (void)setInputPoint3:(id)arg1;
- (void)setInputPoint2:(id)arg1;
- (void)setInputPoint1:(id)arg1;
- (void)setInputPoint0:(id)arg1;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)dealloc;

@end
