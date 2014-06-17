/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputView;

@interface _UIInputViewContent : UIView  {
    double _contentHeight;
    double _contentWidth;
    UIInputView *_inputView;
    int _unclippableCorners;
}

@property int _unclippableCorners;


- (void)addSubview:(id)arg1;
- (void)set_unclippableCorners:(int)arg1;
- (int)_unclippableCorners;
- (void)_updateCornerClipping;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputView:(id)arg2;
- (struct CGSize { double x1; double x2; })_sizeFittingContentViews;
- (bool)_isToolbar;
- (struct CGSize { double x1; double x2; })_contentSize;

@end
