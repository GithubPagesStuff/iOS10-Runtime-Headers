/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIEmojiScrollView : UIScrollView  {
    double _delay;
    bool_canDragToScroll;
}

@property double delay;


- (double)delay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_lookForScrolling;
- (void)_stopLookingForScrolling;
- (double)_touchDelayForScrollDetection;
- (bool)touchesShouldCancelInContentView:(id)arg1;
- (bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelay:(double)arg1;

@end
