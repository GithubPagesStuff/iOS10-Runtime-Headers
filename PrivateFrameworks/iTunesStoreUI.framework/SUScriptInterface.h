/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptApplication, SUScriptDevice, SUScriptPreviewOverlay, NSNumber, <SUScriptInterfaceDelegate>, SUScriptPassbookLibrary, SUScriptAppleAccountStore, WebFrame, NSString, SUScriptNavigationBar, SUScriptProtocol, NSArray, NSMutableDictionary, SUScriptWindow, SUScriptWindowContext, SSAuthenticationContext, SUScriptAccountManager, SUScriptNotificationObserver, SUScriptOperationDelegate, SUScriptPurchaseManager, SUScriptKeyValueStore, SUClientInterface, SUScriptAccount, SUScriptViewController, SUScriptFairPlayContext, SUScriptMediaLibrary, SUScriptSectionsController;

@interface SUScriptInterface : SUScriptObject  {
    SUScriptAccountManager *_accountManager;
    SUScriptKeyValueStore *_applicationLocalStorage;
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    <SUScriptInterfaceDelegate> *_delegate;
    SUScriptKeyValueStore *_deviceLocalStorage;
    NSMutableDictionary *_downloadQueues;
    WebFrame *_frame;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPreviewOverlay *_previewOverlay;
    SUScriptPurchaseManager *_purchaseManager;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptWindowContext *_scriptWindowContext;
    id _threadSafeDelegate;
}

@property(readonly) NSArray * installedSoftwareApplications;
@property(readonly) NSArray * accounts;
@property(retain) SUScriptAccount * primaryAccount;
@property(retain) SUScriptAccount * primaryLockerAccount;
@property(readonly) SUScriptSectionsController * sectionsController;
@property(readonly) SUScriptViewController * viewController;
@property(readonly) SUScriptProtocol * protocol;
@property(readonly) SUScriptWindow * window;
@property(readonly) SUScriptMediaLibrary * mediaLibrary;
@property(readonly) SUScriptPassbookLibrary * passbookLibrary;
@property(readonly) SUScriptApplication * application;
@property(readonly) SUScriptDevice * device;
@property(readonly) NSString * actionTypeReturnToLibrary;
@property(readonly) NSString * actionTypeDismissWindows;
@property(readonly) NSString * actionTypeDismissSheet;
@property(readonly) SUScriptPurchaseManager * purchaseManager;
@property(readonly) SUScriptAppleAccountStore * appleAccountStore;
@property(readonly) SUScriptFairPlayContext * accountCreationSecureContext;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(retain) SUScriptWindowContext * scriptWindowContext;
@property <SUScriptInterfaceDelegate> * delegate;
@property(readonly) <SUScriptInterfaceDelegate> * threadSafeDelegate;
@property(retain) SUClientInterface * clientInterface;
@property(retain) WebFrame * webFrame;
@property(readonly) id applicationAccessibilityEnabled;
@property(readonly) SUScriptKeyValueStore * applicationLocalStorage;
@property(readonly) NSString * clientIdentifier;
@property(copy) NSString * cookie;
@property(readonly) SUScriptKeyValueStore * deviceLocalStorage;
@property(readonly) id globalRootObject;
@property(readonly) id loggingEnabled;
@property(readonly) SUScriptNavigationBar * navigationBar;
@property(readonly) NSNumber * orientation;
@property(readonly) NSString * referringUserAgent;
@property(readonly) SUScriptPreviewOverlay * previewOverlay;
@property(readonly) id screenReaderRunning;
@property(readonly) long long storeSheetType;
@property(readonly) NSString * askToBuyPrompt;
@property(readonly) long long storeSheetTypeDefault;
@property(readonly) long long storeSheetTypeAskToBuy;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (long long)purchaseAnimationStyleFromString:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)accountCreationSecureContext;
- (id)appleAccountStore;
- (id)activeAudioPlayers;
- (id)actionTypeDismissSheet;
- (id)actionTypeDismissWindows;
- (id)actionTypeReturnToLibrary;
- (id)application;
- (id)passbookLibrary;
- (void)addPurchaseWithInfo:(id)arg1;
- (void)addExternalDownloads:(id)arg1;
- (id)sectionsController;
- (void)setPrimaryLockerAccount:(id)arg1;
- (id)primaryLockerAccount;
- (id)systemItemUndo;
- (id)systemItemTrash;
- (id)systemItemStop;
- (id)systemItemSearch;
- (id)systemItemRewind;
- (id)systemItemReplay;
- (id)systemItemRefresh;
- (id)systemItemRedo;
- (id)systemItemPlay;
- (id)systemItemPause;
- (id)systemItemPageCurl;
- (id)systemItemOrganize;
- (id)systemItemFlexibleSpace;
- (id)systemItemFixedSpace;
- (id)systemItemFastForward;
- (id)systemItemEdit;
- (id)systemItemDone;
- (id)systemItemCompose;
- (id)systemItemCancel;
- (id)systemItemCamera;
- (id)systemItemBookmarks;
- (id)systemItemAdd;
- (id)systemItemAction;
- (id)installedSoftwareApplications;
- (void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(id)arg2;
- (id)purchaseManager;
- (long long)storeSheetTypeAskToBuy;
- (long long)storeSheetTypeDefault;
- (id)askToBuyPrompt;
- (long long)storeSheetType;
- (void)setReferringUserAgent:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
- (id)screenReaderRunning;
- (id)previewOverlay;
- (id)requestInfo;
- (id)referringUserAgent;
- (id)loggingEnabled;
- (id)globalRootObject;
- (id)_className;
- (id)applicationLocalStorage;
- (id)applicationAccessibilityEnabled;
- (void)setScriptWindowContext:(id)arg1;
- (id)scriptWindowContext;
- (id)deviceLocalStorage;
- (id)softwareApplicationWithBundleID:(id)arg1;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (void)signOutPrimaryAccount;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (bool)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (bool)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)redeemCode:(id)arg1;
- (void)pingURL:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2;
- (void)perfLog:(id)arg1;
- (id)makeWindow;
- (id)makeVolumeViewController;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeTweetComposeViewController;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makeStoreSheetViewController;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeSplitViewController;
- (id)makeSegmentedControl;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeReviewWithAdamID:(id)arg1;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeRedeemViewController;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeMenuViewController;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (id)makeLookupRequest;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)makeGiftViewController;
- (id)makeFamilySetupViewController;
- (id)makeFacebookSessionWithAccount:(id)arg1;
- (id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2;
- (id)makeDonationViewControllerWithCharityIdentifier:(id)arg1;
- (id)makeDocumentInteractionController;
- (id)makeDialog;
- (id)makeDateFormatter;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeCalloutView;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2;
- (id)makeActivityItemProviderWithMIMEType:(id)arg1;
- (id)makeActivity;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeAccount;
- (id)machineGUID;
- (bool)isExplicitContentDisabled;
- (bool)haveAccount;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(bool)arg3 forceAuthentication:(bool)arg4;
- (void)gotoStoreURL:(id)arg1;
- (void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2;
- (void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1;
- (id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (void)dispatchXEvent:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)dismissWindowsWithOptions:(id)arg1;
- (long long)dialogDisplayCountForKey:(id)arg1;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (bool)canSendEmail;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (void)approveInPerson:(id)arg1;
- (bool)arePodcastsDisabled;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (id)accountForDSID:(id)arg1;
- (void)accessibilityPostScreenChange;
- (void)accessibilityPostLayoutChange;
- (id)scriptAttributeKeys;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (id)hardwareType;
- (id)diskSpaceAvailable;
- (id)activeNetworkType;
- (bool)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(bool)arg2;
- (void)_accessibilityPostLayoutChange;
- (id)DOMElementWithElement:(id)arg1;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (void)deallocMediaLibrary;
- (void)deallocAuthentication;
- (void)_scriptUserInfoDidChangeNotification:(id)arg1;
- (void)_globalEventNotification:(id)arg1;
- (void)initAuthentication;
- (void)setClientInterface:(id)arg1;
- (void)dismissSheet;
- (void)setPrimaryAccount:(id)arg1;
- (id)primaryAccount;
- (void)setLoggingEnabled:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)retryAllRestoreDownloads;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (id)accountName;
- (id)clientInterface;
- (id)accountDSID;
- (id)threadSafeDelegate;
- (void)setMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (id)accounts;
- (void)setOrientation:(id)arg1;
- (id)orientation;
- (id)device;
- (id)protocol;
- (void)openURL:(id)arg1;
- (void)log:(id)arg1;
- (id)parentViewController;
- (id)attributeKeys;
- (id)cookie;
- (void)setWebFrame:(id)arg1;
- (void)goBack;
- (id)clientIdentifier;
- (id)webFrame;
- (id)window;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setCookie:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (bool)isRunningTest;
- (bool)launchedToTest;
- (id)viewController;
- (void)setNavigationBar:(id)arg1;
- (id)systemVersion;
- (void)setWindow:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)navigationBar;
- (void)startedTest:(id)arg1;

@end
