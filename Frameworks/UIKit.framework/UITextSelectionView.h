/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextRangeView, NSArray, NSTimer, UITextSelection, UIView, UITextInteractionAssistant;

@interface UITextSelectionView : UIView  {
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    boolm_caretBlinks;
    boolm_caretShowingNow;
    boolm_visible;
    boolm_activated;
    boolm_wasShowingCommands;
    boolm_delayShowingCommands;
    boolm_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    boolm_deferSelectionCommands;
    struct __CFRunLoopObserver { } *m_observer;
}

@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property(readonly) UITextSelection * selection;
@property bool caretBlinks;
@property bool visible;
@property(readonly) bool selectionCommandsShowing;
@property(retain) NSArray * replacements;
@property(readonly) UIView * caretView;
@property(readonly) UITextRangeView * rangeView;


- (bool)visible;
- (void)deactivate;
- (void)detach;
- (void)activate;
- (void)setVisible:(bool)arg1;
- (void)removeFromSuperview;
- (void)invalidate;
- (void)dealloc;
- (void)configureForReplacementMode;
- (void)updateSelectionRectsIfNeeded;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (void)updateSelectionCommands;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)hideCaret:(int)arg1;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)setReplacements:(id)arg1;
- (bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)touchCaretBlinkTimer;
- (void)showCaret:(int)arg1;
- (id)caretView;
- (void)installIfNecessary;
- (void)clearRange;
- (void)clearCaretBlinkTimer;
- (void)clearCaret;
- (bool)shouldBeVisible;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (bool)affectedByScrollerNotification:(id)arg1;
- (void)deferredUpdateSelectionCommands;
- (void)appearOrFadeIfNecessary;
- (void)inputModeDidChange:(id)arg1;
- (void)viewAnimate:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewWillAnimate;
- (void)inputViewDidMove;
- (void)inputViewWillMove;
- (void)windowDidResignOrBecomeKey;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)textSelectionViewActivated:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingBox;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(bool)arg2 afterDelay:(double)arg3;
- (bool)selectionCommandsShowing;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)updateSelectionDots;
- (id)rangeView;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelDelayedCommandRequests;
- (void)configureForSelectionMode;
- (void)showSelectionCommands;
- (void)hideSelectionCommands;
- (void)configureForHighlightMode;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)layoutChangedByScrolling:(bool)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)updateDocumentHasContent:(bool)arg1;
- (bool)caretBlinks;
- (id)replacements;
- (id)dynamicCaretList;
- (void)setCaretBlinks:(bool)arg1;
- (id)scrollView;
- (void)selectionChanged;
- (void)updateSelectionRects;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selection;
- (id)dynamicCaret;
- (void)deferredUpdateSelectionRects;
- (id)interactionAssistant;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
