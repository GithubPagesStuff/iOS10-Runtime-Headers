/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class UIColor, NSString, SKBitmapFont, NSMutableArray, SKSpriteNode;

@interface SKLabelNode : SKNode  {
    float _fontSize;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _fontColor;
    NSString *_fontName;
    NSString *_text;
    SKBitmapFont *_bmf;
    NSMutableArray *_textSprites;
    UIColor *_labelColor;
    float _labelColorBlend;
    long long _labelBlendMode;
    SKSpriteNode *_textSprite;
    long long _horizontalAlignmentMode;
    long long _verticalAlignmentMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _textRect;
}

@property long long verticalAlignmentMode;
@property long long horizontalAlignmentMode;
@property(copy) NSString * fontName;
@property(copy) NSString * text;
@property double fontSize;
@property(retain) UIColor * fontColor;
@property double colorBlendFactor;
@property(retain) UIColor * color;
@property long long blendMode;

+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)_labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;
+ (id)labelNodeWithFontNamed:(id)arg1;

- (void)setFontColor:(id)arg1;
- (void)createBitmapSpritesForText;
- (void)setVerticalAlignmentMode:(long long)arg1;
- (long long)verticalAlignmentMode;
- (void)setHorizontalAlignmentMode:(long long)arg1;
- (long long)horizontalAlignmentMode;
- (id)initWithFontNamed:(id)arg1;
- (void)createSpritesForText;
- (id)_getTextSprites;
- (id)childrenInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nodeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_flippedChangedFrom:(bool)arg1 to:(bool)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (void)setColorBlendFactor:(double)arg1;
- (double)colorBlendFactor;
- (id)nodeAtPoint:(struct CGPoint { double x1; double x2; })arg1 recursive:(bool)arg2;
- (id)fontColor;
- (void)_initialize;
- (id)text;
- (double)fontSize;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setBlendMode:(long long)arg1;
- (long long)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setFontName:(id)arg1;
- (id)fontName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFontSize:(double)arg1;
- (void)setText:(id)arg1;

@end
