/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
    int innerShadowBlendMode;
    int outerShadowBlendMode;
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    double embossSize;
    UIColor *innerShadowColor;
    double innerShadowBlur;
    UIColor *outerShadowColor;
    double outerShadowBlur;
    UIColor *topGradientColor;
    UIColor *bottomGradientColor;
    double innerOpacity;
    struct CGPoint { 
        double x; 
        double y; 
    } innerShadowOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } outerShadowOffset;
}

@property(retain) UIColor * embossHighlightColor;
@property(retain) UIColor * embossShadowColor;
@property double embossSize;
@property(retain) UIColor * innerShadowColor;
@property struct CGPoint { double x1; double x2; } innerShadowOffset;
@property double innerShadowBlur;
@property int innerShadowBlendMode;
@property(retain) UIColor * outerShadowColor;
@property struct CGPoint { double x1; double x2; } outerShadowOffset;
@property double outerShadowBlur;
@property int outerShadowBlendMode;
@property(retain) UIColor * topGradientColor;
@property(retain) UIColor * bottomGradientColor;
@property double innerOpacity;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)innerOpacity;
- (id)bottomGradientColor;
- (id)topGradientColor;
- (int)outerShadowBlendMode;
- (double)outerShadowBlur;
- (struct CGPoint { double x1; double x2; })outerShadowOffset;
- (id)outerShadowColor;
- (int)innerShadowBlendMode;
- (double)innerShadowBlur;
- (struct CGPoint { double x1; double x2; })innerShadowOffset;
- (id)innerShadowColor;
- (double)embossSize;
- (id)embossShadowColor;
- (id)embossHighlightColor;
- (void)setInnerOpacity:(double)arg1;
- (void)setBottomGradientColor:(id)arg1;
- (void)setTopGradientColor:(id)arg1;
- (void)setOuterShadowBlendMode:(int)arg1;
- (void)setOuterShadowBlur:(double)arg1;
- (void)setOuterShadowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOuterShadowColor:(id)arg1;
- (void)setInnerShadowBlendMode:(int)arg1;
- (void)setInnerShadowBlur:(double)arg1;
- (void)setInnerShadowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInnerShadowColor:(id)arg1;
- (void)setEmbossSize:(double)arg1;
- (void)setEmbossShadowColor:(id)arg1;
- (void)setEmbossHighlightColor:(id)arg1;

@end
