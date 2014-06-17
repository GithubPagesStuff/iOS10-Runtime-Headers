/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, <SUClientInterfaceDelegate>, SUPreviewOverlayViewController, SUQueueSessionManager, UIColor, NSString, SUUIAppearance, NSObject<OS_dispatch_queue>, SUViewControllerFactory, <SUClientInterfaceDelegatePrivate>, SUPurchaseManager, SUTabBarController;

@interface SUClientInterface : NSObject  {
    NSString *_askToBuyApprovalPrompt;
    SUUIAppearance *_appearance;
    bool_inAskToBuyApprovalFlow;
    NSString *_clientIdentifier;
    UIColor *_darkKeyColor;
    <SUClientInterfaceDelegatePrivate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    bool_ignoresExpectedClientsProtocol;
    UIColor *_lightKeyColor;
    NSString *_localStoragePath;
    SUPurchaseManager *_purchaseManager;
    SUQueueSessionManager *_queueSessionManager;
    NSMutableDictionary *_urlBagKeys;
    NSString *_userAgent;
    SUViewControllerFactory *_viewControllerFactory;
    bool_wasLaunchedFromLibrary;
    boolinAskToBuyApprovalFlow;
}

@property(copy) NSString * clientIdentifier;
@property <SUClientInterfaceDelegate> * delegate;
@property(copy) SUUIAppearance * appearance;
@property(copy) NSString * localStoragePath;
@property(readonly) SUPreviewOverlayViewController * previewOverlay;
@property(retain) SUPurchaseManager * purchaseManager;
@property(retain) SUQueueSessionManager * queueSessionManager;
@property(readonly) SUTabBarController * tabBarController;
@property(copy) NSString * userAgent;
@property(retain) SUViewControllerFactory * viewControllerFactory;
@property bool wasLaunchedFromLibrary;
@property bool inAskToBuyApprovalFlow;
@property(copy) NSString * askToBuyApprovalPrompt;
@property(copy) UIColor * darkKeyColor;
@property(copy) UIColor * lightKeyColor;
@property(getter=_ignoresExpectedClientsProtocol,setter=_setIgnoresExpectedClientsProtocol:) bool _ignoresExpectedClientsProtocol;


- (void)setLightKeyColor:(id)arg1;
- (void)setDarkKeyColor:(id)arg1;
- (void)setWasLaunchedFromLibrary:(bool)arg1;
- (void)setAppearance:(id)arg1;
- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(bool)arg2;
- (void)_showPreviewOverlayAnimated:(bool)arg1;
- (void)_setIgnoresExpectedClientsProtocol:(bool)arg1;
- (bool)wasLaunchedFromLibrary;
- (void)_setStatusBarStyle:(long long)arg1 animated:(bool)arg2;
- (void)_setStatusBarHidden:(bool)arg1 withAnimation:(long long)arg2;
- (void)_returnToLibrary;
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;
- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;
- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)_newUIAlertView;
- (void)setViewControllerFactory:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (id)purchaseManager;
- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)setLocalStoragePath:(id)arg1;
- (id)localStoragePath;
- (void)setQueueSessionManager:(id)arg1;
- (id)queueSessionManager;
- (void)setPurchaseManager:(id)arg1;
- (id)_newScriptInterface;
- (bool)_ignoresExpectedClientsProtocol;
- (void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2;
- (void)_exitStoreWithReason:(long long)arg1;
- (id)previewOverlay;
- (id)askToBuyApprovalPrompt;
- (bool)inAskToBuyApprovalFlow;
- (void)_dispatchXEvent:(id)arg1;
- (void)_hidePreviewOverlayAnimated:(bool)arg1;
- (id)viewControllerFactory;
- (id)lightKeyColor;
- (id)darkKeyColor;
- (void)setAskToBuyApprovalPrompt:(id)arg1;
- (void)setInAskToBuyApprovalFlow:(bool)arg1;
- (id)userAgent;
- (void)_presentDialog:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)clientIdentifier;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setClientIdentifier:(id)arg1;
- (id)tabBarController;
- (id)appearance;

@end
