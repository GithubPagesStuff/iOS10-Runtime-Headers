/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITraitCollection, <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, UIView, <UIAdaptivePresentationControllerDelegate>, UIViewController;

@interface UIPresentationController : NSObject <_UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIAppearanceContainer, UITraitEnvironment, UIContentContainer> {
    bool_isDisconnectedRoot;
    bool_transitionAsDisconnectedRoot;
    bool_needsDidAppear;
    bool_needsDidDisappear;
    bool_monitorsSystemLayoutFittingSize;
    id _target;
    SEL _didEndSelector;
    UITraitCollection *_lastNotifiedTraitCollection;
    bool_changedPresentingViewControllerDuringAdaptation;
    bool_containerIgnoresDirectTouchEvents;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    UIView *_containerView;
    <UIAdaptivePresentationControllerDelegate> *_delegate;
    UITraitCollection *_overrideTraitCollection;
    <UIViewControllerAnimatedTransitioning> *_currentTransitionController;
    <UIViewControllerInteractiveTransitioning> *_currentInteractionController;
    UIView *_presentationView;
    UIView *__currentPresentationSuperview;
    long long _state;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __transitionViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __fromViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __toViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __computeToEndFrameForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __currentTransitionDidComplete;

    struct CGSize { 
        double width; 
        double height; 
    } _preferredContentSize;
}

@property(retain) UIViewController * presentingViewController;
@property(retain) UIViewController * presentedViewController;
@property(readonly) long long presentationStyle;
@property(retain) UIView * containerView;
@property <UIAdaptivePresentationControllerDelegate> * delegate;
@property(copy) UITraitCollection * overrideTraitCollection;
@property(getter=_currentTransitionController,setter=_setCurrentTransitionController:,retain) <UIViewControllerAnimatedTransitioning> * currentTransitionController;
@property(getter=_currentInteractionController,setter=_setCurrentInteractionController:,retain) <UIViewControllerInteractiveTransitioning> * currentInteractionController;
@property(getter=_presentationView,setter=_setPresentationView:,retain) UIView * presentationView;
@property(getter=_currentPresentationSuperview,setter=_setCurrentPresentationSuperview:,retain) UIView * _currentPresentationSuperview;
@property long long state;
@property(getter=_preferredContentSize,setter=_setPreferredContentSize:) struct CGSize { double x1; double x2; } _preferredContentSize;
@property(getter=_changedPresentingViewControllerDuringAdaptation,setter=_setChangedPresentingViewControllerDuringAdaptation:) bool changedPresentingViewControllerDuringAdaptation;
@property(copy) id _transitionViewForCurrentTransition;
@property(copy) id _fromViewForCurrentTransition;
@property(copy) id _toViewForCurrentTransition;
@property(copy) id _computeToEndFrameForCurrentTransition;
@property(copy) id _currentTransitionDidComplete;
@property(getter=_containerIgnoresDirectTouchEvents,setter=_setContainerIgnoresDirectTouchEvents:) bool containerIgnoresDirectTouchEvents;
@property(readonly) UITraitCollection * traitCollection;
@property(readonly) struct CGSize { double x1; double x2; } preferredContentSize;

+ (bool)_preventsAppearanceProxyCustomization;

- (void)setDelegate:(id)arg1;
- (void)_cleanup;
- (id)delegate;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (id)_currentTransitionController;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (void)setOverrideTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (id)_presentationControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (bool)_forcesPreferredAnimationControllers;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fullscreenFrameForViewController:(id)arg1 inWindow:(id)arg2 transitionView:(id)arg3;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_setContainerIgnoresDirectTouchEvents:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewController:(id)arg1 inWindow:(id)arg2 transitionView:(id)arg3 fromViewController:(id)arg4;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldChangeStatusBarViewController;
- (bool)_isAdapted;
- (bool)dismissed;
- (bool)presented;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)overrideTraitCollection;
- (id)_parentTraitCollection;
- (id)_parentTraitEnvironment;
- (id)initWithPresenting:(id)arg1 presented:(id)arg2;
- (long long)adaptivePresentationStyle;
- (void)_setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)containerViewWillLayoutSubviews;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (id)presentedView;
- (bool)_shouldGrabPresentersView;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (bool)_transitioningFrom;
- (bool)_transitioningTo;
- (bool)_containerIgnoresDirectTouchEvents;
- (void)transitionDidStart;
- (void)transitionDidFinish:(bool)arg1;
- (id)_fromViewForCurrentTransition;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (bool)_shouldDisableInteractionDuringTransitions;
- (long long)presentationStyle;
- (id)_currentInteractionController;
- (id)_presentationView;
- (id)_parentPresentationController;
- (struct CGSize { double x1; double x2; })_flipSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_computeToEndFrameForCurrentTransition;
- (id)_toViewForCurrentTransition;
- (id)_currentPresentationSuperview;
- (id)_transitionViewForCurrentTransition;
- (id)_childPresentationController;
- (void)_setChangedPresentingViewControllerDuringAdaptation:(bool)arg1;
- (bool)_changedPresentingViewControllerDuringAdaptation;
- (void)runTransitionForCurrentState;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (bool)_shouldRespectDefinesPresentationContext;
- (id)_currentContextPresentationSuperview;
- (id)_fullscreenPresentationSuperview;
- (bool)shouldPresentInFullscreen;
- (void)set_toViewForCurrentTransition:(id)arg1;
- (void)set_fromViewForCurrentTransition:(id)arg1;
- (void)set_currentTransitionDidComplete:(id)arg1;
- (void)set_computeToEndFrameForCurrentTransition:(id)arg1;
- (void)set_transitionViewForCurrentTransition:(id)arg1;
- (void)_setCurrentPresentationSuperview:(id)arg1;
- (bool)_shouldDisablePresentersAppearanceCallbacks;
- (void)_setCurrentInteractionController:(id)arg1;
- (void)_setCurrentTransitionController:(id)arg1;
- (bool)dismissing;
- (void)_setPresentationView:(id)arg1;
- (bool)presenting;
- (id)_currentTransitionDidComplete;
- (bool)shouldRemovePresentersView;
- (void)_performBlockWithoutTriggeringResponderEvents:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)_containerViewWillLayoutSubviews;
- (void)_updateTraitsIfNecessary;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (bool)_monitorsSystemLayoutFittingSize;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (Class)_appearanceGuideClass;
- (struct { long long x1; long long x2; })__sizeClassPair;
- (id)_appearanceContainer;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)presentedViewController;
- (void)_setContainerView:(id)arg1;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)traitCollection;
- (id)presentingViewController;
- (id)containerView;

@end
