/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCGImage : OITSUImage  {
    struct CGImage { } *mCGImage;
    long long mOrientation;
    double mScale;
}


- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)scale;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (long long)imageOrientation;
- (struct CGImage { }*)CGImage;

@end
