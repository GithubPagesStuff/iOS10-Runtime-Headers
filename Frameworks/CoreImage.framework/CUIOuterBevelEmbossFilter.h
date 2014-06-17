/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilter : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputSize;
    NSNumber *inputSoften;
    NSNumber *inputAngle;
    CIColor *inputHighlightColor;
    CIColor *inputShadowColor;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputSize;
@property(retain) NSNumber * inputSoften;
@property(retain) NSNumber * inputAngle;
@property(retain) CIColor * inputHighlightColor;
@property(retain) CIColor * inputShadowColor;

+ (id)customAttributes;

- (id)inputShadowColor;
- (id)inputHighlightColor;
- (id)inputSoften;
- (void)setInputShadowColor:(id)arg1;
- (void)setInputHighlightColor:(id)arg1;
- (void)setInputSoften:(id)arg1;
- (id)inputSize;
- (void)setInputSize:(id)arg1;
- (id)_kernelC;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;
- (id)_kernel;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
