/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIBezierPath, UIGroupTableViewCellBackground, UIView;

@interface UIRoundedRectButton : UIButton  {
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
    UIGroupTableViewCellBackground *_tableViewStyleBackground;
    UIView *_shadowView;
}


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_invalidateBackingViews;
- (void)_invalidatePaths;
- (id)_setupBackgroundView;
- (bool)_wantsTableViewStyleBackground;
- (void)_commonRoundedRectButtonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fillColor:(id)arg2;
- (long long)buttonType;
- (id)_contentBackgroundColor;
- (void)_updateState;
- (void)setHighlighted:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)_canDrawContent;
- (id)_backgroundView;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;

@end
