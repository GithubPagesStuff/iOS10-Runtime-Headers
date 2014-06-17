/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBInputBackdropView, UIKBRenderConfig, UIKeyboardCornerView;

@interface UIPeripheralHostView : UIView  {
    int _explicitLayoutCount;
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly) UIKeyboardCornerView * cornerViewLeft;
@property(readonly) UIKeyboardCornerView * cornerViewRight;
@property(readonly) UIKBInputBackdropView * inputBackdropView;
@property(readonly) UIKBInputBackdropView * inputAccessoryBackdropView;


- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (bool)explicitLayout;
- (void)_setBaseRenderConfig:(id)arg1;
- (void)_setRenderConfig:(id)arg1 updateKeyboard:(bool)arg2;
- (void)endExplicitLayout;
- (void)beginExplicitLayout;
- (id)inputAccessoryBackdropView;
- (void)syncInputAccessoryViewBackdropToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputBackdropView;
- (void)syncInputViewBackdropToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)cornerViewRight;
- (id)cornerViewLeft;
- (void)updateBackdropViewForInputAccessoryView:(bool)arg1;
- (void)_resizeForKeyplaneSize:(struct CGSize { double x1; double x2; })arg1 splitWidthsChanged:(bool)arg2;
- (int)_clipCornersOfView:(id)arg1;
- (id)_inheritedRenderConfig;
- (int)textEffectsVisibilityLevel;
- (void)_setRenderConfig:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
