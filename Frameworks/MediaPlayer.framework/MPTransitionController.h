/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPViewController, NSMutableSet, UIView, UIViewController;

@interface MPTransitionController : NSObject  {
    struct __CFDictionary { } *_observers;
    float _duration;
    UIView *_rootView;
    NSMutableSet *_persistentViewsToFadeOut;
    NSMutableSet *_viewsToFadeOut;
    NSMutableSet *_persistentViewsToFadeIn;
    NSMutableSet *_viewsToFadeIn;
    MPViewController *_fromViewController;
    long long _fromInterfaceOrientation;
    MPViewController *_toViewController;
    long long _toInterfaceOrientation;
    UIViewController *_toContainerViewController;
}

@property float duration;
@property long long fromInterfaceOrientation;
@property(retain) MPViewController * fromViewController;
@property(retain) UIView * rootView;
@property long long toInterfaceOrientation;
@property(retain) MPViewController * toViewController;
@property(retain) UIViewController * toContainerViewController;


- (void)setToViewController:(id)arg1;
- (long long)toInterfaceOrientation;
- (void)setRootView:(id)arg1;
- (void)setFromViewController:(id)arg1;
- (long long)fromInterfaceOrientation;
- (void)addViewToFadeOut:(id)arg1 restoreOnPop:(bool)arg2;
- (void)addViewToFadeIn:(id)arg1 restoreOnPop:(bool)arg2;
- (void)willBeginTransition:(unsigned long long)arg1;
- (void)messageObserversWithSuccess:(bool)arg1;
- (id)toContainerViewController;
- (void)setFromInterfaceOrientation:(long long)arg1;
- (void)setToInterfaceOrientation:(long long)arg1;
- (void)didFinishTransition:(bool)arg1;
- (void)fadeViewsForRestore:(bool)arg1;
- (void)setToContainerViewController:(id)arg1;
- (id)rootView;
- (void)performTransition:(unsigned long long)arg1;
- (void)transition:(unsigned long long)arg1;
- (void)addObserver:(id)arg1 didEndSelector:(SEL)arg2;
- (void)setDuration:(float)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (float)duration;
- (id)toViewController;
- (id)fromViewController;

@end
