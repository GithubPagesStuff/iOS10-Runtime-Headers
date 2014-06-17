/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SUNavigationMenuViewController, SUSearchFieldController, ISURLRequestPerformance, SUSegmentedControl, SSMutableURLRequestProperties, SSAuthenticationContext, _UIBackdropView, SSURLRequestProperties, NSString, SUStorePageProtocol, UIPopoverController, SUViewController, SUPageSectionGroup, <SUStorePageViewControllerDelegate>;

@interface SUStorePageViewController : SUViewController <SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate> {
    SUViewController *_activeChildViewController;
    struct __CFSet { } *_allowedInterfaceOrientations;
    double _expirationTime;
    long long _pageType;
    SUViewController *_pendingChildViewController;
    NSString *_scriptUserInfo;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    bool_canMoveToOverlay;
    bool_externalRequest;
    bool_loadingForSectionChange;
    bool_loadsWhenHidden;
    bool_reloadOnAppear;
    bool_reloadsWhenCacheExpired;
    SSAuthenticationContext *_authContext;
    SSMutableURLRequestProperties *_urlRequestProperties;
    bool_needsAuthentication;
    long long _activeSectionIndex;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
    _UIBackdropView *_backdropView;
    <SUStorePageViewControllerDelegate> *_delegate;
    bool_lastLoadDidFail;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    ISURLRequestPerformance *_performanceMetrics;
    bool_useWebViewFastPath;
}

@property(retain) SSAuthenticationContext * authenticationContext;
@property(getter=isExternalRequest) bool externalRequest;
@property bool needsAuthentication;
@property(copy) SSURLRequestProperties * URLRequestProperties;
@property bool canMoveToOverlay;
@property bool loadsWhenHidden;
@property(readonly) SUViewController * activeChildViewController;
@property(readonly) SUSearchFieldController * searchFieldController;
@property(readonly) SUPageSectionGroup * sectionGroup;
@property(readonly) SUSegmentedControl * sectionSegmentedControl;
@property(copy) NSString * scriptUserInfo;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentBounds;
@property(readonly) bool canBeResolved;
@property <SUStorePageViewControllerDelegate> * delegate;
@property(getter=_reloadsWhenCacheExpired,setter=_setReloadsWhenCacheExpired:) bool _reloadsWhenCacheExpired;
@property(getter=_isCacheExpired,readonly) bool _cacheExpired;


- (id)sectionSegmentedControl;
- (id)sectionGroup;
- (id)searchFieldController;
- (void)_setReloadsWhenCacheExpired:(bool)arg1;
- (void)setExternalRequest:(bool)arg1;
- (id)activeChildViewController;
- (id)_activeChildViewController;
- (bool)loadMoreWithURL:(id)arg1;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (bool)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (bool)showPreviewOverlay:(id)arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (void)hidePreviewOverlay:(id)arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (bool)isShowingPreviewOverlay;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(long long)arg2 withButtonItem:(id)arg3;
- (bool)reloadForSectionsWithGroup:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (bool)_isInTransientViewController;
- (void)_navigationMenuButtonAction:(id)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(long long)arg2;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(long long)arg2;
- (void)_navigationButtonAction:(id)arg1;
- (void)_setSegmentedControl:(id)arg1;
- (void)_reloadNavigationMenus;
- (void)_reloadNavigationButtons;
- (bool)_isCacheExpired;
- (bool)_reloadsWhenCacheExpired;
- (bool)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(bool)arg3;
- (bool)isExternalRequest;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_finishSuccessfulLoad;
- (void)enqueueFetchOperation;
- (bool)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (bool)_shouldDisplayControlsInNavigationBar;
- (void)_setHeaderView:(id)arg1;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)_finishHandlingFailure;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (void)_performActionForProtocolButton:(id)arg1;
- (bool)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(bool)arg2;
- (void)reloadWithStorePage:(id)arg1 ofType:(long long)arg2 forURL:(id)arg3;
- (void)_tearDownNavigationMenu;
- (void)_dismissNavigationMenuViewController;
- (void)_reloadContentInsets;
- (bool)_sectionIsNetworkConstrained;
- (bool)_shouldFetchAutomatically;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_repositionForChildViewController:(id)arg1;
- (bool)canMoveToOverlay;
- (void)_reloadNavigationBar;
- (void)_verifyStorePageProtocol:(id)arg1;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_displaySegmentedControl:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (void)setScriptUserInfo:(id)arg1;
- (bool)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(id)arg2;
- (id)_activePageSection;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForActiveViewController;
- (void)_reloadBackgroundViewProperties;
- (void)resetNavigationItem:(id)arg1;
- (void)showPlaceholderViewController;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(bool)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)handleFailureWithError:(id)arg1;
- (double)_expirationTime;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)scriptUserInfo;
- (id)displayedURL;
- (void)_reloadForAppearance:(bool)arg1;
- (bool)_shouldReloadForAppearance;
- (void)_showPlaceholderViewControllerWithTearDown:(bool)arg1;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionButtons;
- (bool)viewIsReady;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)setURLRequestProperties:(id)arg1;
- (id)URLRequestProperties;
- (void)_renderStorePage:(id)arg1 withType:(long long)arg2 viewController:(id)arg3 block:(id)arg4;
- (void)_finishWebViewLoadWithResult:(bool)arg1 error:(id)arg2;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id*)arg3;
- (id)newFetchOperation;
- (void)_fetchPage:(bool)arg1;
- (void)_handleFailureWithError:(id)arg1;
- (bool)canBeResolved;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (id)copyScriptViewController;
- (id)navigationItemForScriptInterface;
- (void)invalidateForMemoryPurge;
- (id)newRotationController;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (bool)shouldExcludeFromNavigationHistory;
- (id)iTunesStoreUI_searchFieldController;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)copyDefaultScriptProperties;
- (id)urlBagKey;
- (void)restoreArchivableContext:(id)arg1;
- (id)newPlaceholderViewController;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (id)copyArchivableContext;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (bool)reloadWithURLRequestProperties:(id)arg1;
- (void)setLoadsWhenHidden:(bool)arg1;
- (bool)loadsWhenHidden;
- (void)showExternalURL:(id)arg1;
- (id)initWithTabBarItem:(id)arg1;
- (void)setCanMoveToOverlay:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (id)URLRequest;
- (bool)needsAuthentication;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)reload;
- (void)didMoveToParentViewController:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)isLoaded;
- (double)defaultPNGExpirationTime;
- (void)setSection:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;

@end
