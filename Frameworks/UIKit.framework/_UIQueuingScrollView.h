/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, <_UIQueuingScrollViewDelegate>, <_UIQueuingScrollViewDataSource>, UIView, NSMutableArray;

@interface _UIQueuingScrollView : UIScrollView  {
    <_UIQueuingScrollViewDelegate> *_qDelegate;
    <_UIQueuingScrollViewDataSource> *_qDataSource;
    long long _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    double _pageSpacing;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    bool_manualScrollInProgress;
    struct { 
        unsigned int delegateInterestedInPendingScrolls : 1; 
        unsigned int delegateInterestedInCommittedScrolls : 1; 
        unsigned int delegateInterestedInCompletedScrolls : 1; 
        unsigned int delegateInterestedInBailedOutScrolls : 1; 
        unsigned int delegateInterestedFinishedScrolling : 1; 
        unsigned int delegateCanVetoSubviewLayout : 1; 
        unsigned int dataSourceSuppliesBeforeView : 1; 
        unsigned int dataSourceSuppliesAfterView : 1; 
        unsigned int dataSourceInterestedInFlushedViews : 1; 
    } _delegateFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _disabledScrollingRegion;
}

@property(readonly) UIView * visibleView;
@property <_UIQueuingScrollViewDelegate> * qDelegate;
@property <_UIQueuingScrollViewDataSource> * qDataSource;
@property double pageSpacing;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } disabledScrollingRegion;


- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)qDataSource;
- (id)qDelegate;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_didEndScroll:(bool)arg1;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(bool)arg4;
- (bool)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1;
- (long long)_navigationDirectionFromCurrentOffset;
- (void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(id)arg3;
- (void)_notifyDelegateDidCommitManualScroll:(bool)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(bool)arg5 canComplete:(bool)arg6;
- (void)_notifyDelegateWillManuallyScroll:(bool)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(bool)arg4;
- (void)_enqueueCompletionState:(id)arg1;
- (void)_notifyDelegateDidEndManualScroll:(bool)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(bool)arg4 didFinish:(bool)arg5 didComplete:(bool)arg6;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(bool)arg2 didComplete:(bool)arg3;
- (void)_replaceViews:(id)arg1 updatingContents:(bool)arg2 adjustContentInsets:(bool)arg3 animated:(bool)arg4;
- (id)_requestViewForIndex:(long long)arg1;
- (id)_dequeueViewForIndex:(long long)arg1;
- (id)_viewAfterView:(id)arg1;
- (id)_viewBeforeView:(id)arg1;
- (void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2;
- (void)_flushView:(id)arg1 animated:(bool)arg2;
- (id)_viewBefore:(bool)arg1 view:(id)arg2;
- (id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(bool)arg2 updatingContents:(bool)arg3 animated:(bool)arg4;
- (bool)_dataSourceProvidesViews;
- (void)_adjustContentInsets;
- (void)_didEndProgrammaticScroll;
- (void)_didEndDraggingManualScroll;
- (void)_didEndManualScroll;
- (void)_didScrollWithAnimation:(bool)arg1 force:(bool)arg2;
- (long long)_navigationDirectionForActiveScroll:(bool)arg1;
- (bool)_isScrollInProgress:(bool)arg1;
- (void)_boundsDidChangeToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isManualScrollInProgress;
- (void)setView:(id)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(id)arg4;
- (bool)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1;
- (id)visibleView;
- (void)setDisabledScrollingRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })disabledScrollingRegion;
- (void)_invalidateOffscreenViews;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setQDataSource:(id)arg1;
- (void)setQDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 navigationOrientation:(long long)arg2;
- (double)pageSpacing;
- (void)setPageSpacing:(double)arg1;
- (id)_visibleView;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (void)_scrollViewDidEndDecelerating;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned long long)_abuttedPagingEdges;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (void)layoutSubviews;

@end
