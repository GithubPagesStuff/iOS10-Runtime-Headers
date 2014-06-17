/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBTextStyle : NSObject <NSCopying> {
    NSString *_fontName;
    double _fontSize;
    double _minFontSize;
    double _kerning;
    double _textOpacity;
    NSString *_textColor;
    NSString *_etchColor;
    double _pathWeight;
    long long _selector;
    struct CGPoint { 
        double x; 
        double y; 
    } _textOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _etchOffset;
}

@property(retain) NSString * fontName;
@property double fontSize;
@property double minFontSize;
@property double kerning;
@property double textOpacity;
@property(retain) NSString * textColor;
@property(retain) NSString * etchColor;
@property struct CGPoint { double x1; double x2; } textOffset;
@property struct CGPoint { double x1; double x2; } etchOffset;
@property double pathWeight;
@property long long selector;

+ (id)styleWithTextColor:(id)arg1;
+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;

- (void)setSelector:(long long)arg1;
- (double)fontSize;
- (void)setFontName:(id)arg1;
- (id)fontName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (long long)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)overlayWithStyle:(id)arg1;
- (void)setPathWeight:(double)arg1;
- (void)setEtchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEtchColor:(id)arg1;
- (double)pathWeight;
- (struct CGPoint { double x1; double x2; })etchOffset;
- (id)etchColor;
- (double)textOpacity;
- (double)kerning;
- (void)setTextOpacity:(double)arg1;
- (void)setKerning:(double)arg1;
- (struct CGPoint { double x1; double x2; })textOffset;
- (void)setTextOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFontSize:(double)arg1;
- (double)minFontSize;
- (void)setMinFontSize:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;

@end
