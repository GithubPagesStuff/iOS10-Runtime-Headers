/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPercentDrivenInteractiveTransition, UICollectionViewLayout;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    bool_crossFadeNavigationBar;
    bool_crossFadeBottomBars;
    bool_interactionAborted;
    UICollectionViewLayout *_toLayout;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _operation;
}

@property(retain) UICollectionViewLayout * toLayout;
@property bool crossFadeNavigationBar;
@property bool crossFadeBottomBars;
@property UIPercentDrivenInteractiveTransition * interactionController;
@property bool interactionAborted;
@property long long operation;

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;

- (long long)operation;
- (void)dealloc;
- (bool)crossFadeBottomBars;
- (bool)crossFadeNavigationBar;
- (id)toLayout;
- (void)setCrossFadeBottomBars:(bool)arg1;
- (void)setCrossFadeNavigationBar:(bool)arg1;
- (void)setToLayout:(id)arg1;
- (bool)_shouldCrossFadeBottomBars;
- (bool)_shouldCrossFadeNavigationBar;
- (void)animationEnded:(bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)setOperation:(long long)arg1;
- (bool)interactionAborted;
- (void)setInteractionController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)setInteractionAborted:(bool)arg1;
- (id)interactionController;

@end
