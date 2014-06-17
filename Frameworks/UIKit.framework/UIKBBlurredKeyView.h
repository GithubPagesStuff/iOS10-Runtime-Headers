/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBBackdropView, UIKBKeyView;

@interface UIKBBlurredKeyView : UIKBKeyView  {
    UIKBKeyView *_keyView;
    UIKBBackdropView *_backdropView;
}


- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;
- (id)key;
- (void)dealloc;
- (bool)requiresSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawFrame;
- (void)dimKeyCaps:(double)arg1 duration:(double)arg2;
- (id)keyplane;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;

@end
