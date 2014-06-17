/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeToFieldDelegate>, MFComposeSubjectView, MFMailComposeRecipientView, MFComposeMultiView, <MFMailComposeViewDelegate>, UIResponder, MFComposeFromView, NSArray, MFMailComposeContactsSearchController, MFSearchResultsViewController, NSInvocation, MFComposeImageSizeView, <MFMailPopoverManagerDelegate>, MFComposeTextContentView, MFComposeScrollView, MFComposeBodyField, UIView, MFFromAddressViewController, UIPickerView, UITableView, <MFComposeRecipientTextViewDelegate>;

@interface MFMailComposeView : UITransitionView <MFComposeHeaderViewDelegate, UITextContentViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate, MFDragContext> {
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    <MFComposeRecipientTextViewDelegate> *_composeRecipientViewDelegate;
    UIView *_headerView;
    UIView *_contentView;
    UIView *_shadowView;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    MFComposeTextContentView *_textView;
    MFMailComposeRecipientView *_toField;
    MFMailComposeRecipientView *_ccField;
    MFMailComposeRecipientView *_bccField;
    MFMailComposeRecipientView *_lastChangedRecipientView;
    MFMailComposeRecipientView *_activeRecipientView;
    MFComposeSubjectView *_subjectField;
    MFComposeFromView *_fromField;
    MFComposeMultiView *_multiField;
    MFComposeImageSizeView *_imageSizeField;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    UIView *_fromAddressPickerBackgroundView;
    UIResponder *_firstResponderBeforeSheet;
    UIResponder *_pinningResponder;
    NSInvocation *_delayedPopoverInvocation;
    MFMailComposeContactsSearchController *_searchController;
    MFSearchResultsViewController *_searchViewController;
    NSArray *_searchResults;
    UITableView *_searchResultsTable;
    double _offsetBeforeSearch;
    double _keyboardIntersection;
    unsigned long long _options;
    struct CGSize { 
        double width; 
        double height; 
    } _currentContentSize;
    unsigned long long _notifyingBodyField;
    unsigned int _isChangingRecipients : 1;
    unsigned int _isLoading : 1;
    unsigned int _isShowingPeoplePicker : 1;
    unsigned int _isRotating : 1;
    unsigned int _isClosing : 1;
    unsigned int _isShowingFromAddressPickerWheel : 1;
    unsigned int _isForEditing : 1;
    unsigned int _isAnimationDisabled : 1;
    unsigned int _shouldShowOptionalHeaders : 1;
    unsigned int _isDraggingRecipients : 1;
    unsigned int _hasAppeared : 1;
    <MFMailComposeToFieldDelegate> *_toFieldDelegate;
}

@property <MFMailComposeViewDelegate> * composeViewDelegate;
@property <MFComposeRecipientTextViewDelegate> * composeRecipientDelegate;
@property <MFMailPopoverManagerDelegate> * popoverOwner;
@property <MFMailComposeToFieldDelegate> * toFieldDelegate;
@property bool isForEditing;
@property(getter=isAnimationDisabled) bool animationDisabled;
@property(getter=isChangingRecipients) bool changingRecipients;
@property(getter=isShowingPeoplePicker) bool showingPeoplePicker;
@property(getter=isLoading) bool loading;
@property(getter=isSearching,readonly) bool searching;
@property(readonly) MFMailComposeRecipientView * toField;
@property(readonly) MFMailComposeRecipientView * ccField;
@property(readonly) MFMailComposeRecipientView * bccField;
@property(readonly) MFComposeSubjectView * subjectField;
@property(readonly) MFComposeFromView * fromField;
@property(readonly) MFComposeImageSizeView * imageSizeField;
@property(readonly) MFComposeMultiView * multiField;
@property(readonly) MFComposeBodyField * bodyField;
@property(readonly) MFComposeScrollView * bodyScroller;
@property(readonly) MFComposeTextContentView * bodyTextView;
@property(readonly) MFSearchResultsViewController * searchViewController;


- (void)setLoading:(bool)arg1;
- (id)searchViewController;
- (id)bodyField;
- (id)multiField;
- (id)imageSizeField;
- (id)fromField;
- (id)bccField;
- (id)ccField;
- (id)toField;
- (id)toFieldDelegate;
- (void)setPopoverOwner:(id)arg1;
- (id)popoverOwner;
- (id)composeRecipientDelegate;
- (void)willDisappear;
- (void)didAppear;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (void)dismissSearchResults;
- (bool)presentSearchResults;
- (bool)chooseSelectedSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectNextSearchResult;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)restoreFirstResponder;
- (void)saveFirstResponder;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (void)cancelDelayedPopover;
- (bool)isShowingPeoplePicker;
- (void)setShowingPeoplePicker:(bool)arg1;
- (bool)isAnimationDisabled;
- (void)setAnimationDisabled:(bool)arg1;
- (void)setIsForEditing:(bool)arg1;
- (bool)isForEditing;
- (void)searchResultsPopoverWasDismissed;
- (void)setRecipientFieldsEditable:(bool)arg1 animated:(bool)arg2;
- (void)toggleImageSizeFieldIfNecessary;
- (void)resetContentSize;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (id)dragScrollView;
- (id)dragWindow;
- (void)dragEnded;
- (void)dragBeganInWindow:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(bool)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (id)sendingAddressForComposeContactsSearchController:(id)arg1;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)setChangingRecipients:(bool)arg1;
- (bool)presentSearchResults:(id)arg1;
- (void)selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFromAddressPickerVisible:(bool)arg1;
- (void)saveFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1 animate:(bool)arg2;
- (void)restoreFirstResponderWithKeyboardPinning:(bool)arg1;
- (id)_focusedRecipientView;
- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_finishUpRotationToInterfaceOrientation:(long long)arg1;
- (void)_adjustScrollerForBottomView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFromAddressPicker;
- (id)bodyScroller;
- (void)_updateOptionalHeaderVisibilityForceVisible:(bool)arg1;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(bool)arg2 clear:(bool)arg3;
- (id)subjectField;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 wasSearching:(bool)arg5;
- (bool)isChangingRecipients;
- (void)_layoutSubviewsWithActiveRecipientView:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3 searchResultsWereDismissed:(bool)arg4;
- (void)_presentDelayedPopover;
- (void)_cancelDelayedPopover;
- (id)_searchResultsTable;
- (bool)isSearchResultsPopoverVisible;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withPinFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_adjustScrollerContentSize;
- (double)_heightForBottomView;
- (void)_multiFieldClicked;
- (void)setFromAddressPickerVisible:(bool)arg1 animated:(bool)arg2;
- (bool)isKeyboardVisible;
- (bool)isFromAddressPickerVisible;
- (void)_cancelAnimations;
- (void)setToFieldDelegate:(id)arg1;
- (void)cancelSearch;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)menuDidHide;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)composeViewDelegate;
- (void)composeHeaderViewClicked:(id)arg1;
- (bool)isSearching;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (bool)isLoading;
- (void)removeFromSuperview;
- (void)dealloc;
- (id)bodyTextView;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)bottomView;
- (void)_layoutSubviews:(bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)endEditing:(bool)arg1;
- (void)setScrollsToTop:(bool)arg1;
- (void)_collectKeyViews:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
