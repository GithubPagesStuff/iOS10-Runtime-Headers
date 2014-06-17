/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUClientInterface, NSString, SURotationController, NSArray, SUViewControllerScriptProperties, SUViewControllerContext, SUNavigationItem, NSMutableArray, UIViewController, UIBarButtonItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate> {
    SUViewControllerScriptProperties *_cachedScriptProperties;
    bool_canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    bool_excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    bool_isEnteringForeground;
    bool_loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    long long _rotationState;
    bool_shouldInvalidateForMemoryPurge;
    bool_showsLibraryButton;
    long long _transitionSafetyCount;
}

@property(retain) SUClientInterface * clientInterface;
@property(getter=isLoading) bool loading;
@property(readonly) UIViewController * footerViewController;
@property(retain) UIViewController * inputAccessoryViewController;
@property bool shouldExcludeFromNavigationHistory;
@property bool showsLibraryButton;
@property bool shouldInvalidateForMemoryPurge;
@property(getter=isVisible,readonly) bool visible;
@property(getter=isVisibleAndFrontmost,readonly) bool visibleAndFrontmost;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) NSString * defaultPNGName;
@property(retain,readonly) SUNavigationItem * navigationItem;
@property(getter=_cachedScriptProperties,readonly) SUViewControllerScriptProperties * _cachedScriptProperties;
@property(getter=_isEnteringForeground,readonly) bool _enteringForeground;
@property(getter=_pendingDialogs,readonly) NSArray * _pendingDialogs;
@property(getter=_restoredContext,readonly) SUViewControllerContext * _restoredContext;


- (bool)showsLibraryButton;
- (void)setShouldInvalidateForMemoryPurge:(bool)arg1;
- (id)_restoredContext;
- (id)_pendingDialogs;
- (id)footerViewController;
- (bool)_isEnteringForeground;
- (id)_cachedScriptProperties;
- (void)_reloadLibraryButton;
- (void)setTitle:(id)arg1 changeTabBarItem:(bool)arg2;
- (void)setShowsLibraryButton:(bool)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)presentFooterViewController:(id)arg1 animated:(bool)arg2;
- (bool)presentDialogForError:(id)arg1 pendUntilVisible:(bool)arg2;
- (void)handleApplicationURL:(id)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(bool)arg2;
- (void)dismissFooterViewControllerAnimated:(bool)arg1;
- (void)dismissAfterDialogs;
- (void)cancelOperations;
- (bool)clearsWeakScriptReferences;
- (void)_exitStoreButtonAction:(id)arg1;
- (void)invalidateForMemoryPurge;
- (bool)isVisibleAndFrontmost;
- (id)newRotationController;
- (id)_rotationController;
- (void)storePageProtocolDidChange;
- (void)setShouldExcludeFromNavigationHistory:(bool)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (id)copyScriptProperties;
- (bool)shouldExcludeFromNavigationHistory;
- (bool)shouldInvalidateForMemoryPurge;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_presentFooterAnimationDidStop;
- (bool)presentDialog:(id)arg1 pendUntilVisible:(bool)arg2;
- (void)resetRestoredContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(bool)arg2;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_dialogFinishedNotification:(id)arg1;
- (id)copyDefaultScriptProperties;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (id)initWithSection:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)viewControllerFactory;
- (id)copyArchivableContext;
- (long long)ITunesStoreUIBarStyle;
- (void)setClientInterface:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)clientInterface;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)reload;
- (bool)isVisible;
- (bool)becomeFirstResponder;
- (bool)isLoading;
- (void)setTitle:(id)arg1;
- (long long)interfaceOrientation;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (double)defaultPNGExpirationTime;
- (void)setSection:(id)arg1;
- (id)inputAccessoryViewController;
- (id)inputAccessoryView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)tabBarItem;
- (id)defaultPNGName;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)_existingNavigationItem;
- (bool)_canReloadView;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (bool)canBecomeFirstResponder;
- (bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationDidResume;
- (void)didReceiveMemoryWarning;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)applicationWillSuspend;
- (id)navigationItem;

@end
