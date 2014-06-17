/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISURLOperationPool, NSString, MFMailComposeViewController, NSArray, SUImageCache, SUClientInterface, NSMutableDictionary, NSObject<OS_dispatch_queue>, UIViewController, SUScriptExecutionContext;

@interface SUClientController : NSObject <SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate> {
    bool_active;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSString *_localStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    struct __CFArray { } *_offeredAssetTypes;
    NSArray *_overlayConfigurations;
    UIViewController *_rootViewController;
    SUScriptExecutionContext *_scriptExecutionContext;
    NSString *_synchedStoreFrontAtLastSuspend;
    NSMutableDictionary *_urlBagKeys;
}

@property(copy) SUClientInterface * clientInterface;
@property(getter=isStoreEnabled,readonly) bool storeEnabled;
@property(retain) UIViewController * rootViewController;
@property(getter=isActive,readonly) bool active;
@property(retain) SUImageCache * imageCache;
@property(retain) ISURLOperationPool * imageOperationPool;
@property(readonly) SUScriptExecutionContext * scriptExecutionContext;
@property(readonly) NSString * storeContentLanguage;
@property(readonly) bool storeFrontDidChangeSinceLastSuspend;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (void)setImageOperationPool:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (bool)storeFrontDidChangeSinceLastSuspend;
- (id)imageOperationPool;
- (void)autosaveMessageWithCompletionBlock:(id)arg1;
- (void)setOfferedAssetTypes:(struct __CFArray { }*)arg1;
- (void)setIgnoresExpectedClientsProtocol:(bool)arg1;
- (bool)openURL:(id)arg1 inClientWithIdentifier:(id)arg2;
- (bool)ignoresExpectedClientsProtocol;
- (bool)displayClientURL:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(bool)arg3;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (void)_reloadUserDefaultsFromURLBag;
- (void)_reloadScriptExecutionContextFromURLBag;
- (bool)openClientURL:(id)arg1;
- (bool)presentAccountViewController:(id)arg1 animated:(bool)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2 animated:(bool)arg3;
- (bool)presentAccountViewController:(id)arg1 showNavigationBar:(bool)arg2 animated:(bool)arg3;
- (void)_reloadOverlayConfigurationsFromURLBag;
- (struct __CFArray { }*)offeredAssetTypes;
- (bool)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (void)_dialogNotification:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (id)storeContentLanguage;
- (void)dismissMailComposeViewControllerAnimated:(bool)arg1;
- (void)presentMailComposeViewController:(id)arg1 animated:(bool)arg2;
- (bool)isComposingEmail;
- (void)presentExternalURLViewController:(id)arg1;
- (void)composeEmailByRestoringAutosavedMessage;
- (bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)exitStoreWithReason:(long long)arg1;
- (void)_purgeCaches;
- (void)setViewControllerFactory:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (bool)dismissTopViewControllerAnimated:(bool)arg1;
- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (bool)composeReviewWithViewController:(id)arg1 animated:(bool)arg2;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (id)newScriptInterface;
- (void)setImageCache:(id)arg1;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)dismissOverlayBackgroundViewController;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)viewControllerFactory;
- (id)overlayBackgroundViewController;
- (id)initWithClientInterface:(id)arg1;
- (bool)isStoreEnabled;
- (void)setClientInterface:(id)arg1;
- (bool)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (id)scriptExecutionContext;
- (id)userAgent;
- (id)clientInterface;
- (void)_presentDialog:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)becomeActive;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)resignActive;
- (void)cancelAllOperations;
- (bool)openURL:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (bool)isActive;
- (id)clientIdentifier;
- (id)imageCache;
- (id)init;
- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)rootViewController;

@end
