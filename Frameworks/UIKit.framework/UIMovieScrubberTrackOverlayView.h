/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView  {
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView *_leftFillView;
    UIImageView *_rightFillView;
    unsigned int _editingHandle;
    unsigned int _editing : 1;
    unsigned int _zoomed : 1;
}


- (void)setValue:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateRightFill;
- (void)_updateLeftFill;
- (void)_clampValueAndLayout;
- (void)setIsZoomed:(bool)arg1;
- (void)setEndValue:(double)arg1;
- (void)setEditingHandle:(int)arg1;
- (void)setStartValue:(double)arg1;
- (void)animateFillFramesAway;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setEditing:(bool)arg1;
- (void)layoutSubviews;

@end
