/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage;

@interface CIColorMap : CIFilter  {
    CIImage *inputImage;
    CIImage *inputGradientImage;
    CIImage *cachedGradientImage;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputGradientImage;
@property(retain) CIImage * cachedGradientImage;

+ (id)customAttributes;

- (void)setCachedGradientImage:(id)arg1;
- (id)cachedGradientImage;
- (id)inputGradientImage;
- (void)setInputGradientImage:(id)arg1;
- (id)gradientImage;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)dealloc;

@end
