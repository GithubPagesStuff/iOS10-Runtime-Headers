/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIWindow, SKUIClientContext, NSOperationQueue, SKUIReviewConfiguration;

@interface SKUIStarRatingQueue : NSObject  {
    SKUIClientContext *_clientContext;
    NSOperationQueue *_queue;
    SKUIReviewConfiguration *_reviewConfiguration;
    UIWindow *_window;
}

@property UIWindow * window;


- (void)_setRating:(long long)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(id)arg4;
- (void)setRating:(long long)arg1 forItem:(id)arg2 completionBlock:(id)arg3;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (id)window;
- (id)init;
- (void).cxx_destruct;
- (void)setWindow:(id)arg1;

@end
