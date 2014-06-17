/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCVPixelImageBuffer : BLPixelImageBuffer  {
    struct __CVBuffer { } *_pixelBuffer;
    struct CGContext { } *_cgcontext;
}


- (struct CGContext { }*)cgcontext;
- (void)readPixelsByAddressInBlock:(id)arg1;
- (void)accessPixelsByAddressInBlock:(id)arg1;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)accessPixelsByContextInBlock:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)dealloc;

@end
