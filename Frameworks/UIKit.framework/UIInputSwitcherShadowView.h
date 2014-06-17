/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

@interface UIInputSwitcherShadowView : UIView  {
    int m_mode;
    double m_pointerOffset;
    NSArray *m_gradientColors;
    UIKeyboardMenuView *_menu;
    _UIBackdropView *_blurView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _keyRect;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyRect;
@property UIKeyboardMenuView * menu;
@property int mode;
@property double pointerOffset;
@property(retain) NSArray * gradientColors;
@property(retain) _UIBackdropView * blurView;


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (void)setKeyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientColors:(id)arg1;
- (void)setPointerOffset:(double)arg1;
- (double)pointerOffset;
- (id)gradientColors;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyRect;
- (void)setMenu:(id)arg1;
- (id)menu;
- (void)setBlurView:(id)arg1;
- (id)blurView;
- (int)mode;
- (void)layoutSubviews;

@end
