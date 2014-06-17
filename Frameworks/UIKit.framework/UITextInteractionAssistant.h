/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder<UITextInput>, UILongPressGestureRecognizer, UITapGestureRecognizer, UITextChecker, NSHashTable, UIView, UIFieldEditor, NSMutableSet, NSMutableArray, UITextSelectionView, UIGestureRecognizer;

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    NSMutableArray *_recognizers;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_loupeGesture;
    UITapGestureRecognizer *_singleTapGesture;
    UIGestureRecognizer *_doubleTapGesture;
    int _autoscrollRamp;
    double _autoscrollFactor;
    struct CGPoint { 
        double x; 
        double y; 
    } _autoscrollBasePoint;
    struct CGPoint { 
        double x; 
        double y; 
    } _autoscrollUntransformedExtentPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    bool_inGesture;
    bool_autoscrolled;
    bool_isTryingToHighlightLink;
    bool_externalTextInput;
    NSHashTable *_gestureRecognizerViews;
}

@property(readonly) UIResponder<UITextInput> * view;
@property(readonly) UITextSelectionView * selectionView;
@property(readonly) UIResponder<UITextInput> * textDocument;
@property(retain,readonly) UITapGestureRecognizer * singleTapGesture;
@property(retain) UILongPressGestureRecognizer * loupeGesture;
@property(retain) UIGestureRecognizer * doubleTapGesture;
@property bool inGesture;
@property(readonly) UIView * scrollView;
@property bool autoscrolled;
@property struct CGPoint { double x1; double x2; } autoscrollUntransformedExtentPoint;
@property(readonly) bool externalTextInput;
@property struct CGPoint { double x1; double x2; } loupeGestureEndPoint;
@property(readonly) UIFieldEditor * fieldEditor;
@property(retain) UITapGestureRecognizer * singleTapGesture;
@property(getter=isExperimentalUIEnabled,readonly) bool experimentalUIEnabled;


- (id)view;
- (void)detach;
- (void)attach;
- (void)dealloc;
- (void)rangeSelectionMoved:(struct CGPoint { double x1; double x2; })arg1 withTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rangeSelectionEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangeSelectionStarted:(struct CGPoint { double x1; double x2; })arg1;
- (void)removeGestureRecognizersFromView:(id)arg1;
- (id)addSelectionTapRecognizerToView:(id)arg1;
- (bool)containerAllowsSelection;
- (bool)externalTextInput;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)doubleTapGesture;
- (void)deactivateSelection;
- (void)activateSelection;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_scrollable;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (bool)containerAllowsSelectionTintOnly;
- (bool)tapOnLinkWithGesture:(id)arg1;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (bool)containerIsTextField;
- (void)selectWordWithoutShowingCommands;
- (double)distanceBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andRange:(id)arg2;
- (id)rangeForTextReplacement:(id)arg1;
- (bool)containerChangesSelectionOnOneFingerTap;
- (bool)noCalloutBarAndTouchInSelection:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldIgnoreLinkGestures;
- (bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (bool)shouldHandleFormGestureAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (void)notifyKeyboardSelectionChanged;
- (bool)autoscrolled;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)setFirstResponderIfNecessary;
- (void)scrollSelectionToVisible;
- (void)doubleTapInUneditable:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)addTapAndHoldOnLinkRecognizerToView:(id)arg1;
- (id)addHighlightLinkRecognizerToView:(id)arg1;
- (id)addDragRecognizer;
- (id)addLoupeGestureRecognizer:(bool)arg1 toView:(id)arg2;
- (id)addOneFingerTapRecognizerToView:(id)arg1;
- (id)addTwoFingerRangedSelectRecognizerToView:(id)arg1;
- (id)addTapAndAHalfRecognizerToView:(id)arg1;
- (id)addTwoFingerSingleTapRecognizerToView:(id)arg1;
- (id)addOneFingerDoubleTapRecognizerToView:(id)arg1;
- (id)addOneFingerTripleTapRecognizerToView:(id)arg1;
- (id)addPhraseBoundaryGestureRecognizerToView:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (bool)useGesturesForEditableContent;
- (bool)viewCouldBecomeEditable:(id)arg1;
- (id)linkInteractionView;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)canBeginDragCursor:(id)arg1;
- (id)phraseBoundaryGestureRecognizer;
- (id)_asText;
- (void)longDelayRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (id)twoFingerRangedSelectRecognizer;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (id)loupeGestureRecognizer:(bool)arg1;
- (void)loupeGesture:(id)arg1;
- (id)tapAndAHalfRecognizer;
- (void)tapAndAHalf:(id)arg1;
- (id)twoFingerSingleTapRecognizer;
- (void)twoFingerSingleTap:(id)arg1;
- (id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)selectionTapRecognizer:(SEL)arg1;
- (id)oneFingerTripleTapRecognizer;
- (void)oneFingerTripleTap:(id)arg1;
- (id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (void)oneFingerTap:(id)arg1;
- (id)oneFingerTapRecognizer:(SEL)arg1;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)setDoubleTapGesture:(id)arg1;
- (void)setSingleTapGesture:(id)arg1;
- (void)setLoupeGesture:(id)arg1;
- (bool)inGesture;
- (bool)containerIsPlainStyleAtom;
- (bool)containerIsAtom;
- (bool)containerIsBrowserView;
- (void)detach:(bool)arg1;
- (bool)isExperimentalUIEnabled;
- (id)textSelectionView;
- (void)clearGestureRecognizers;
- (id)initWithResponder:(id)arg1;
- (void)clearGestureRecognizers:(bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_selectionView;
- (id)singleTapGesture;
- (id)loupeGesture;
- (id)textDocument;
- (bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setInGesture:(bool)arg1;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)layoutChangedByScrolling:(bool)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)clearSelection;
- (void)disableClearsOnInsertion;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelInteractionWithLink;
- (bool)isInteractingWithLink;
- (void)scheduleReanalysis;
- (void)scheduleChineseTransliteration;
- (void)scheduleReplacements;
- (void)selectWord;
- (void)resignedFirstResponder;
- (void)setGestureRecognizers;
- (void)selectAll:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)scrollView;
- (void)updateAutoscroll:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)selectionChanged;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })autoscrollUntransformedExtentPoint;
- (void)setAutoscrolled:(bool)arg1;
- (void)cancelAutoscroll;
- (void)autoscrollWillNotStart;
- (id)selectionView;
- (id)fieldEditor;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;

@end
