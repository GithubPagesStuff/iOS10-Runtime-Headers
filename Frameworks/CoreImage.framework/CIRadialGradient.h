/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter  {
    CIVector *inputCenter;
    NSNumber *inputRadius0;
    NSNumber *inputRadius1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputRadius0;
@property(retain) NSNumber * inputRadius1;
@property(retain) CIColor * inputColor0;
@property(retain) CIColor * inputColor1;

+ (id)customAttributes;

- (id)inputRadius1;
- (id)inputRadius0;
- (void)setInputRadius1:(id)arg1;
- (void)setInputRadius0:(id)arg1;
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
