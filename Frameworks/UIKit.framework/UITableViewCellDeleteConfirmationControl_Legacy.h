/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl  {
    bool_visible;
    UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;
}

@property(getter=isVisible) bool visible;

+ (struct CGSize { double x1; double x2; })defaultSizeForTitle:(id)arg1;

- (bool)isVisible;
- (void)setVisible:(bool)arg1;
- (void)dealloc;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (void)cancelDeleteConfirmationWithGesture:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)_confirmationAnimationDidEnd;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
