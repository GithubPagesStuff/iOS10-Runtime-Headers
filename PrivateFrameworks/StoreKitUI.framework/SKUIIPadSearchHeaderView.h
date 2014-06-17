/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, <SKUIIPadSearchHeaderViewDelegate>, SKUIClientContext, NSDictionary, NSMutableDictionary, UIPopoverController, NSMutableArray;

@interface SKUIIPadSearchHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    long long _activeFacetIndex;
    SKUIClientContext *_clientContext;
    <SKUIIPadSearchHeaderViewDelegate> *_delegate;
    NSMutableArray *_facetButtons;
    UIPopoverController *_facetPopoverController;
    NSMutableDictionary *_facetSelections;
    NSArray *_searchFacets;
}

@property <SKUIIPadSearchHeaderViewDelegate> * delegate;
@property(readonly) NSArray * searchFacets;
@property(readonly) NSDictionary * facetSelections;


- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)searchFacets;
- (void)setSearchFacets:(id)arg1 selections:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 clientContext:(id)arg2;
- (long long)_selectedIndexForFacet:(id)arg1;
- (id)_titleForFacet:(id)arg1;
- (void)_facetButtonAction:(id)arg1;
- (void)_destroyFacetPopover;
- (id)facetSelections;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
