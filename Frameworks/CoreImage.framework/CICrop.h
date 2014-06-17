/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties> {
    CIImage *inputImage;
    CIVector *inputRectangle;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputRectangle;

+ (id)customAttributes;

- (id)inputRectangle;
- (void)setInputRectangle:(id)arg1;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
