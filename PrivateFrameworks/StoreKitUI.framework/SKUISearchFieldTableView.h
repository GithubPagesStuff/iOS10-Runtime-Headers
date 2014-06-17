/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIIPhoneTrendingSearchPageView, SKUIClientContext, NSOperationQueue, SKUILoadTrendingSearchPageOperation, SKUITrendingSearchPage, <SKUITrendingSearchPageViewDelegate>;

@interface SKUISearchFieldTableView : UITableView  {
    SKUITrendingSearchPage *_page;
    SKUILoadTrendingSearchPageOperation *_loadOp;
    NSOperationQueue *_opQueue;
    SKUIClientContext *_clientContext;
    SKUIIPhoneTrendingSearchPageView *_pageView;
    bool_visible;
    <SKUITrendingSearchPageViewDelegate> *_trendingSearchDelegate;
}

@property bool trendingSearchesVisible;
@property(retain) SKUIClientContext * clientContext;
@property <SKUITrendingSearchPageViewDelegate> * trendingSearchDelegate;


- (void)_reloadView;
- (id)trendingSearchDelegate;
- (void)setTrendingSearchDelegate:(id)arg1;
- (void)setTrendingSearchesVisible:(bool)arg1;
- (bool)trendingSearchesVisible;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void).cxx_destruct;
- (void)_reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;

@end
