/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUColor : NSObject <NSCopying> {
    struct CGColor { } *mCGColor;
}

@property(readonly) struct CGColor { }* CGColor;

+ (id)colorWithRGBValue:(long long)arg1;
+ (id)colorWithBGRValue:(long long)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3;
+ (id)colorWithEshColor:(const struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; }*)arg1;
+ (id)colorWithCsColour:(const struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned int)arg1;
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)randomColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)clearColor;
+ (id)whiteColor;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)brownColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)blueColor;
+ (id)redColor;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)blackColor;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)grayColor;

- (void)getRGBBytes:(char *)arg1 :(char *)arg2 :(char *)arg3;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })eshColor;
- (struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })csColour;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned int)toBGR;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize { double x1; double x2; })arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })ttColor;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (bool)isNearlyWhite;
- (double)luminance;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (void)getRGBAComponents:(double*)arg1;
- (bool)isAlmostEqualToColor:(id)arg1;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (bool)isBlack;
- (bool)isOpaque;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)arg1;
- (struct CGColor { }*)CGColor;
- (void)set;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;

@end
