/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIIPhoneProductPageViewController, NSURL, <SKProductPageViewControllerDelegate>, NSDictionary, SUBarButtonItem, SKUIITunesStoreUIPageViewController, SKUIItemStateCenter, NSString, SSMetricsPageEvent, SUDialogManager, SKUIIPadProductPageViewController, SKUIClientContext, <SKProductPageViewControllerDelegatePrivate>, SUPurchaseManager, SUPreviewOverlayViewController, SKUIBannerViewController;

@interface SKProductPageViewController : SUViewController <SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate, SKUIItemStateCenterObserver> {
    NSString *_additionalPurchaseParameters;
    NSString *_affiliateIdentifier;
    bool_askToBuy;
    SKUIBannerViewController *_bannerViewController;
    SKUIClientContext *_clientContext;
    <SKProductPageViewControllerDelegatePrivate> *_delegate;
    SUDialogManager *_dialogManager;
    SUBarButtonItem *_gotoStoreButtonItem;
    SUBarButtonItem *_rightBarButtonItem;
    SKUIIPadProductPageViewController *_ipadProductPageViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKUIItemStateCenter *_itemStateCenter;
    SSMetricsPageEvent *_lastPageEvent;
    NSURL *_nativeURL;
    SUPreviewOverlayViewController *_previewOverlay;
    NSDictionary *_productParameters;
    SUPurchaseManager *_purchaseManager;
    bool_showsStoreButton;
    bool_showsRightBarButton;
    NSString *_rightBarButtonTitle;
    NSString *_promptString;
    long long _style;
    SKUIITunesStoreUIPageViewController *_storePageViewController;
    long long _urlBagType;
    NSString *_cancelButtonTitle;
}

@property <SKProductPageViewControllerDelegate> * delegate;
@property long long productPageStyle;
@property bool showsStoreButton;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * rightBarButtonTitle;
@property bool showsRightBarButton;
@property(copy) NSString * promptString;
@property bool askToBuy;
@property(copy) NSString * additionalPurchaseParameters;
@property(copy) NSString * affiliateIdentifier;
@property(copy) NSDictionary * scriptContextDictionary;
@property long long URLBagType;

+ (void)getCanLoadWithURL:(id)arg1 completionBlock:(id)arg2;
+ (id)_defaultClientIdentifier;
+ (void)_validateURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id)arg3;
+ (id)_defaultClientInterface;

- (void)_loadClientContextWithCompletionBlock:(id)arg1;
- (void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
- (void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
- (void)_showPreviewOverlayAnimated:(bool)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(bool)arg3;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(bool)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(bool)arg2;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (id)cancelButtonTitle;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)setClientInterface:(id)arg1;
- (bool)askToBuy;
- (bool)showsStoreButton;
- (bool)showsRightBarButton;
- (id)rightBarButtonTitle;
- (id)promptString;
- (id)affiliateIdentifier;
- (id)additionalPurchaseParameters;
- (void)_showPageWithRequest:(id)arg1 animated:(bool)arg2;
- (void)_setClientContext:(id)arg1;
- (void)loadWithProductPage:(id)arg1;
- (void)_applicationWillEnterForeground;
- (id)cancelButtonTitle:(id)arg1;
- (void)setAdditionalPurchaseParameters:(id)arg1;
- (id)scriptContextDictionary;
- (id)initWithTabBarItem:(id)arg1;
- (id)initWithProductPageStyle:(long long)arg1;
- (void)itemStateCenter:(id)arg1 didFinishPurchases:(id)arg2;
- (bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(id)arg3;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)bannerView:(id)arg1 didFailWithError:(id)arg2;
- (void)bannerViewDidClose:(id)arg1;
- (void)_rightBarButtonAction:(id)arg1;
- (void)_gotoStoreButtonAction:(id)arg1;
- (void)_setResponse:(id)arg1 forProperties:(id)arg2 error:(id)arg3;
- (id)_newRequestPropertiesWithRequest:(id)arg1;
- (void)loadWithStorePageRequest:(id)arg1;
- (void)_showProductPage:(id)arg1 pageEvent:(id)arg2;
- (id)_previewOverlay;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (void)_sendDidFailLoadWithError:(id)arg1;
- (void)_reloadViews;
- (void)_reloadGotoStoreButton;
- (void)_loadProductWithRequest:(id)arg1;
- (void)_loadRequestForProductParameters;
- (id)_initSKProductPageViewController;
- (void)_purchaseFinishedNotification:(id)arg1;
- (void)_purchaseFailedNotification:(id)arg1;
- (long long)productPageStyle;
- (void)setPromptString:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setAskToBuy:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setProductPageStyle:(long long)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithParameters:(id)arg1;
- (long long)URLBagType;
- (void)setURLBagType:(long long)arg1;
- (void)_failWithError:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_setShowsCancelButton:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;

@end
