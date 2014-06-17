/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStackedBar;

@interface SKUIStackedPushTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    double _split;
    SKUIStackedBar *_fromBar;
    SKUIStackedBar *_toBar;
}

@property(retain) SKUIStackedBar * fromBar;
@property(retain) SKUIStackedBar * toBar;
@property double split;


- (void)setToBar:(id)arg1;
- (id)toBar;
- (void)setFromBar:(id)arg1;
- (id)fromBar;
- (void)setSplit:(double)arg1;
- (double)split;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
