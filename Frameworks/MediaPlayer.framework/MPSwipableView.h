/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPSwipableViewDelegate>, MPSwipeGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer, MPTapGestureRecognizer;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
    long long _enabledGestureTypes;
    long long _simultaneousGestureTypes;
    <MPSwipableViewDelegate> *_swipeDelegate;
    MPTapGestureRecognizer *_tapGestureRecognizer;
    MPSwipeGestureRecognizer *_swipeGestureRecognizer;
    MPActivityGestureRecognizer *_activityGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property long long enabledGestureTypes;
@property long long simultaneousGestureTypes;
@property <MPSwipableViewDelegate> * swipeDelegate;


- (void)setSimultaneousGestureTypes:(long long)arg1;
- (long long)enabledGestureTypes;
- (id)swipeDelegate;
- (void)_activityGestureRecognized:(id)arg1;
- (void)_pinchGestureRecognized:(id)arg1;
- (void)_swipeGestureRecognized:(id)arg1;
- (long long)simultaneousGestureTypes;
- (void)_updateGestureRecognizersForEnabledTypes;
- (void)setSwipeDelegate:(id)arg1;
- (void)setEnabledGestureTypes:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_tapGestureRecognized:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
