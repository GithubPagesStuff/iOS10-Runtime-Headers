/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScalingFlipViewDelegate>, UIView;

@interface SUScalingFlipView : UIView  {
    UIView *_backView;
    <SUScalingFlipViewDelegate> *_delegate;
    long long _direction;
    double _duration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _fromFrame;
    UIView *_frontView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _toFrame;
}

@property <SUScalingFlipViewDelegate> * delegate;
@property long long direction;
@property double duration;


- (void)performFlip;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (id)_transformAnimationWithStart:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 middle:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 end:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;
- (id)_positionAnimation;
- (id)_inputColorAnimation;
- (id)_backLayerAnimation;
- (id)_fixedAnimationForAnimation:(id)arg1;
- (id)_frontLayerAnimation;
- (void)setDirection:(long long)arg1;
- (long long)direction;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)setDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (double)duration;

@end
