/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateSplitKeyboardToggleButton, UIView<UIKeyboardCandidateList>, UIKeyboardCandidateSortControl, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateBar, UIImageView, UIKeyboardCandidateGrid;

@interface UIKeyboardCandidateView : UIInputView  {
    UIKeyboardCandidateBar *_bar;
    UIKeyboardCandidateSortControl *_sortControl;
    UIKeyboardCandidateGrid *_extendedView;
    UIView<UIKeyboardCandidateList> *_inlineView;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    struct { 
        unsigned int isExtended; 
        unsigned int didMinimizeKeyboard; 
        unsigned int isSplit; 
    } _candidateBarFlags;
}

@property(retain) UIView<UIKeyboardCandidateList> * inlineView;

+ (id)sharedInstance;
+ (id)sharedInstanceForInlineView;
+ (double)defaultExtendedControlHeight;
+ (void)setActiveCandidateView:(id)arg1;
+ (id)activeCandidateList;
+ (id)sharedInstanceForInlineView:(bool)arg1;
+ (id)activeCandidateView;

- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setInlineView:(id)arg1;
- (void)setCandidatesToExtendedViewFromCollapsedView:(id)arg1;
- (double)barHeight;
- (unsigned long long)_numberOfColumns:(bool)arg1;
- (void)setCandidateBarCanExtend:(bool)arg1;
- (void)updatePageControlStatus;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (bool)isExtended;
- (void)setCandidateViewExtended:(bool)arg1;
- (id)activeCandidateList;
- (id)inlineView;
- (void)candidatesDidChange;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
