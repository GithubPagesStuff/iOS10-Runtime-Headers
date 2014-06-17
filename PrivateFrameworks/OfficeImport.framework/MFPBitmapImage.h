/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage  {
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize { 
        double width; 
        double height; 
    } mPixelSize;
    struct CGSize { 
        double width; 
        double height; 
    } mPointSize;
}


- (id)phoneImage;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithBitmapData:(id)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (struct CGSize { double x1; double x2; })pointSize;
- (void)dealloc;
- (id).cxx_construct;

@end
