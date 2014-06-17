/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSString, _UIViewAnimationAttributes, UIColor, UIMorphingLabelGlyphSet, NSMutableArray;

@interface UIMorphingLabel : UIView  {
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    struct { 
        unsigned long long len; 
        unsigned long long dir; 
    } _memo[51][51];
    struct { 
        struct _NSRange { 
            unsigned long long location; 
            unsigned long long length; 
        } src; 
        struct _NSRange { 
            unsigned long long location; 
            unsigned long long length; 
        } dst; 
        boolisEqual; 
    } _alignment[100];
    unsigned long long _alignmentSize;
    _UIViewAnimationAttributes *_animationAttributes;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _visibleRect;
}

@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property long long textAlignment;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;


- (void)baseInit;
- (id)text;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)attributedString;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (bool)canFitText:(id)arg1;
- (void)animateShowGlyph:(id)arg1 delay:(double)arg2;
- (double)requiredWidthForText:(id)arg1;
- (void)animateTextColor;
- (void)animateGlyphs;
- (void)saveAnimationAttributes;
- (id)attributedStringForText:(id)arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)calculateGlyphAlignment;
- (void)animateMovementFromGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)animateSubstitutionFromGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)animateDeletionOfGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(unsigned long long)arg2;
- (void)animateInsertionAtIndex:(unsigned long long)arg1 ofGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)animateHideGlyph:(id)arg1 delay:(double)arg2;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint { double x1; double x2; })arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 delay:(double)arg3;
- (id)uniqueStringWithPrefix:(id)arg1;
- (unsigned long long)calculateHardAlignment:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; boolx3; }*)arg1 size:(unsigned long long)arg2 fromGlyphs:(const unsigned short*)arg3 count:(unsigned long long)arg4 toGlyphs:(const unsigned short*)arg5 count:(unsigned long long)arg6;
- (double)alphaForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)hideGlyph:(id)arg1;
- (id)glyphViewWithImage:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)textAlignment;
- (id)textColor;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;

@end
