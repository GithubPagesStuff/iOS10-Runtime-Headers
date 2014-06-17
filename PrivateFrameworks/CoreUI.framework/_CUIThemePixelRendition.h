/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIRenditionMetrics, _CSIRenditionBlockData, CUIRenditionSliceInformation;

@interface _CUIThemePixelRendition : CUIThemeRendition  {
    unsigned int nimages;
    struct CGImage {} *image[16];
    struct CGImage { } *unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
}


- (void)setSharedBlockData:(id)arg1;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (struct CGImage { }*)newImageFromCSIDataSlice:(struct _slice { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 ofBitmap:(struct _csibitmap { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; }*)arg2 usingColorspace:(struct CGColorSpace { }*)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)sliceInformation;
- (id)metrics;
- (struct CGImage { }*)unslicedImage;
- (id)maskForSliceIndex:(long long)arg1;
- (bool)isScaled;
- (id)imageForSliceIndex:(long long)arg1;
- (bool)isTiled;
- (void)dealloc;

@end
