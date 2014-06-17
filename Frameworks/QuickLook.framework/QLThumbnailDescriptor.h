/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailDescriptor : NSObject  {
    double _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property struct CGSize { double x1; double x2; } size;
@property double scaleFactor;

+ (id)descriptorWithSize:(struct CGSize { double x1; double x2; })arg1 scaleFactor:(double)arg2;

- (void)setScaleFactor:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)scaleFactor;

@end
