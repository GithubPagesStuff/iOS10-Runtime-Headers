/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImage, SKUIItemStateCenter, SKUIClientContext, NSOperationQueue, NSDictionary, SKUIBannerView, NSMutableArray, SKUIItemArtworkContext, SSLookupItem, <SKUIBannerViewDelegate>;

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver> {
    SKUIBannerView *_bannerView;
    SKUIClientContext *_clientContext;
    <SKUIBannerViewDelegate> *_delegate;
    UIImage *_iconImage;
    SSLookupItem *_item;
    long long _itemIdentifier;
    SKUIItemStateCenter *_itemStateCenter;
    NSOperationQueue *_resourceOperationQueue;
    NSMutableArray *_screenshotImages;
    NSDictionary *_scriptContextDictionary;
    SKUIItemArtworkContext *_itemArtworkContext;
}

@property(retain) SKUIClientContext * clientContext;
@property <SKUIBannerViewDelegate> * delegate;
@property(retain) NSOperationQueue * resourceOperationQueue;
@property(copy) NSDictionary * scriptContextDictionary;


- (void)loadWithProductParameters:(id)arg1;
- (void)setResourceOperationQueue:(id)arg1;
- (id)_iconImage;
- (void)_setScreenshot:(id)arg1 forIndex:(long long)arg2 error:(id)arg3;
- (id)_screenshotConsumerWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setIcon:(id)arg1 error:(id)arg2;
- (void)_launchURL:(id)arg1 withBundleIdentifier:(id)arg2;
- (id)_itemArtworkContext;
- (void)_loadImages;
- (void)_launchApp;
- (id)_itemState;
- (void)_reloadBannerView;
- (void)_bannerViewAction:(id)arg1;
- (void)_closeButtonAction:(id)arg1;
- (void)_warmItemStateCenter;
- (id)resourceOperationQueue;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (id)scriptContextDictionary;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;

@end
