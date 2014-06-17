/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIVector, CIColor, NSNumber;

@interface CICheckerboardGenerator : CIFilter  {
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputWidth;
@property(retain) NSNumber * inputSharpness;
@property(retain) CIColor * inputColor0;
@property(retain) CIColor * inputColor1;

+ (id)customAttributes;

- (id)inputSharpness;
- (id)inputWidth;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputColor1;
- (id)inputColor0;
- (void)setInputColor1:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;

@end
