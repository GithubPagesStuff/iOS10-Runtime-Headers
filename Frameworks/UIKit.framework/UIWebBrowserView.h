/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIWebTouchEventsGestureRecognizer, NSObject<UIFormPeripheral>, <UIWebAutoFillDelegate>, NSMutableArray, NSString, NSHashTable, UIWebPDFView, NSTimer, UIWebFormAccessory, NSMutableSet, UIWebFormDelegate, DOMNode, NSLock;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate> {
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    DOMNode *_assistedNodeStartingFocusRedirects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _inputViewBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _addressViewBounds;
    double _lastAdjustmentForScroller;
    unsigned long long _audioSessionCategoryOverride;
    unsigned int _accessoryEnabled : 1;
    unsigned int _forceInputView : 1;
    unsigned int _formIsAutoFilling : 1;
    unsigned int _inputViewObeysDOMFocus : 1;
    unsigned int _allowDOMFocusRedirects : 1;
    unsigned int _hasEditedTextField : 1;
    unsigned int _alwaysDispatchesScrollEvents : 1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    unsigned long long _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    NSHashTable *_activeHighlighters;
    NSMutableSet *_overflowScrollViewsPendingInsertion;
    NSMutableSet *_overflowScrollViewsPendingDeletion;
    NSMutableSet *_overflowScrollViews;
    NSLock *_pendingOverflowDataLock;
    NSMutableArray *_pendingOverflowScrolls;
    bool_pendingGeometryChangeAfterOverflowScroll;
    struct { 
        NSMutableArray *all; 
        NSMutableArray *html; 
        NSMutableArray *javascript; 
        NSMutableArray *css; 
        NSMutableArray *error; 
        NSMutableArray *warning; 
        NSMutableArray *tip; 
        NSMutableArray *log; 
    } _messages;
    struct { 
        UIWebPDFView *view; 
        NSTimer *timer; 
    } _pdf;
    <UIWebAutoFillDelegate> *_autoFillDelegate;
}

@property(retain) UIWebFormAccessory * _accessory;
@property(retain) NSObject<UIFormPeripheral> * _input;
@property(retain) DOMNode * _currentAssistedNode;
@property(getter=isAccessoryEnabled) bool accessoryEnabled;
@property bool inputViewObeysDOMFocus;
@property bool allowDOMFocusRedirects;
@property(readonly) bool hasEditedTextField;
@property UIResponder * _editingDelegateForEverythingExceptForms;
@property bool allowsInlineMediaPlayback;
@property bool mediaPlaybackRequiresUserAction;
@property(readonly) bool isDispatchingTouchEvents;
@property bool alwaysDispatchesScrollEvents;
@property <UIWebAutoFillDelegate> * autoFillDelegate;
@property unsigned int audioSessionCategoryOverride;
@property NSString * networkInterfaceName;

+ (void)initialize;
+ (double)preferredScrollDecelerationFactor;
+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;

- (bool)isEditable;
- (id)_input;
- (bool)resignFirstResponder;
- (id)networkInterfaceName;
- (unsigned int)audioSessionCategoryOverride;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(bool)arg6 allowVerticalScrollbar:(bool)arg7;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAutoFillDelegate:(id)arg1;
- (bool)hasEditedTextField;
- (void)setAccessoryEnabled:(bool)arg1;
- (bool)isAccessoryEnabled;
- (id)_accessory;
- (void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(bool)arg3;
- (void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2;
- (void)_removeFindOnPageHighlighter:(id)arg1;
- (id)addFindOnPageHighlighter;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_clearSelectionAndUI;
- (bool)_dumpWebArchiveAtPath:(id)arg1;
- (id)messagesMatchingMask:(int)arg1;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withScale:(double)arg2;
- (void)_centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSizeChange:(bool)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4;
- (struct CGPoint { double x1; double x2; })_convertWindowPointToViewport:(struct CGPoint { double x1; double x2; })arg1;
- (void)_assistFormNode:(id)arg1;
- (void)simulateDidScroll;
- (struct CGSize { double x1; double x2; })contentSizeForScrollView:(id)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
- (bool)considerHeightOfRectOfInterestForRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)heightToKeepVisible;
- (double)minimumVerticalContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForRotation;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(struct { double x1; double x2; double x3; })arg2;
- (struct { double x1; double x2; double x3; })scalesForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_addAdditionalSubview:(id)arg1;
- (void)_webThreadOverflowScrollOffsetChanged;
- (bool)appendOverflowScrollForNode:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 whileScrolling:(bool)arg3;
- (void)_removeAdditionalSubview:(id)arg1;
- (void)_noteOverflowScrollViewPendingDeletion:(id)arg1;
- (void)_noteOverflowScrollViewPendingInsertion:(id)arg1;
- (struct CGSize { double x1; double x2; })_defaultScrollViewContentSize;
- (void)clearMessagesMatchingMask:(int)arg1;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withScale:(double)arg3 forceScroll:(bool)arg4 formAssistantFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withScale:(double)arg3 forceScroll:(bool)arg4;
- (void)_centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSizeChange:(bool)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 toValue:(double)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_activeRectForRectToCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleDeferredEvents;
- (void)_deferWebEvent:(id)arg1;
- (bool)_shouldDeferEvents;
- (void)_endDeferringEvents;
- (void)_dispatchWebEvent:(id)arg1;
- (void)_startDeferringEvents;
- (bool)isDispatchingTouchEvents;
- (void)_autoFillFrame:(id)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)setAllowDOMFocusRedirects:(bool)arg1;
- (void)_updateAutoFillButton;
- (void)_updateAccessory;
- (void)_zoomToNode:(id)arg1 forceScroll:(bool)arg2;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(bool)arg2;
- (id)_editingDelegateForEverythingExceptForms;
- (void)_displayFormNodeInputView;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_stopAssistingFormNode;
- (bool)_keepKeyboardVisibleDuringFocusRedirects;
- (bool)allowDOMFocusRedirects;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)set_currentAssistedNode:(id)arg1;
- (void)set_input:(id)arg1;
- (void)set_accessory:(id)arg1;
- (void)_clearFormAutoFillStateForFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_stopAssistingNode:(id)arg1;
- (void)_startAssistingNode:(id)arg1;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(bool)arg1;
- (bool)_hasSubviewContainingWebContent:(id)arg1;
- (bool)_isAutoFilling;
- (void)_webViewFormEditedStatusHasChanged:(id)arg1;
- (void)formDelegateTextDidChange;
- (id)autoFillDelegate;
- (void)accessoryDone;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (bool)alwaysDispatchesScrollEvents;
- (void)setAlwaysDispatchesScrollEvents:(bool)arg1;
- (id)_currentAssistedNode;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (bool)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)_startURLificationIfNeededCoalesce:(bool)arg1;
- (void)set_editingDelegateForEverythingExceptForms:(id)arg1;
- (void)setInputViewObeysDOMFocus:(bool)arg1;
- (bool)inputViewObeysDOMFocus;
- (bool)isAnyTouchOverActiveArea:(id)arg1;
- (bool)shouldIgnoreWebTouch;
- (void)_endAllowingFocusRedirects;
- (void)_beginAllowingFocusRedirects;
- (id)textDocument;
- (bool)playsNicelyWithGestures;
- (id)textFormElement;
- (void)assistFormNode:(id)arg1;
- (void)redrawScaledDocument;
- (id)_collectAdditionalSubviews;
- (id)formElement;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_clearAllConsoleMessages;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)installGestureRecognizers;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)_reanalyze:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)copy:(id)arg1;
- (bool)_requiresKeyboardResetOnReload;
- (id)_keyboardResponder;
- (id)inputAccessoryView;
- (id)inputView;
- (id)_editingDelegate;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_didScroll;
- (bool)_requiresKeyboardWhenFirstResponder;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)keyCommands;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end
