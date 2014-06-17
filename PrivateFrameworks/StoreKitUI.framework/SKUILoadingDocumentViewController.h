/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUILoadingTemplateViewElement, NSObject<OS_dispatch_source>, SKUIActivityIndicatorView, SKUILayoutCache, SKUIViewElementLayoutContext;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}


- (void)documentDidUpdate:(id)arg1;
- (void)_showActivityIndicator;
- (void)_reloadViewStyling;
- (id)_viewLayoutContext;
- (id)_layoutCache;
- (id)initWithTemplateElement:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)loadView;

@end
