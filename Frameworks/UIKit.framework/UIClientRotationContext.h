/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, NSArray, UISnapshotView, UIView;

@interface UIClientRotationContext : NSObject  {
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
    UIView *_snapshotTargetView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    bool_headerWasHidden;
    bool_footerWasHidden;
    bool_contentWasHidden;
    bool_snapshotTargetWasHidden;
    bool_orderKeyboardInAfterRotating;
    bool_skipFooterRotation;
    bool_skipHeaderRotation;
    long long _fromOrientation;
    long long _toOrientation;
    double _duration;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    double _contentTopAdjustmentStart;
    id _rotatingClient;
    struct { 
        boolanimateContentRotation; 
        boolpreserveHeight; 
        boolavoidFadingBottomOfContent; 
        boolskipSnapshotOfEndState; 
        double contentStretchRightEdgeInset; 
        int edgeClip; 
    } _rotationSettings;
    double contentBottomInset;
    UIWindow *_window;
    bool_skipClientRotationCallbacks;
    NSArray *_backdropViews;
}

@property(readonly) id rotatingClient;
@property(readonly) UIView * contentView;
@property(readonly) double duration;
@property bool skipClientRotationCallbacks;
@property(readonly) long long fromOrientation;
@property(readonly) long long toOrientation;


- (id)contentView;
- (void)dealloc;
- (double)duration;
- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (bool)_isFooterTranslucent;
- (bool)_isHeaderTranslucent;
- (void)finishFullRotateUsingOnePartAnimation:(bool)arg1;
- (bool)skipClientRotationCallbacks;
- (long long)fromOrientation;
- (void)finishFirstHalfRotation;
- (long long)toOrientation;
- (void)rotateSnapshots;
- (void)disableBackdropViewUpdates:(bool)arg1;
- (void)setupRotationOrderingKeyboardInAfterRotation:(bool)arg1;
- (void)slideHeaderViewAndFooterViewOffScreen:(bool)arg1 forInterfaceOrientation:(long long)arg2;
- (void)setSkipClientRotationCallbacks:(bool)arg1;
- (id)rotatingClient;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;

@end
