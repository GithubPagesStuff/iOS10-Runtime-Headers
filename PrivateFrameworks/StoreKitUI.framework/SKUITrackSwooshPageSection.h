/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIMissingItemLoader, SKUITrackSwooshViewController, SKUISwooshPageComponent, SKUITrackSwooshArtworkLoader;

@interface SKUITrackSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUITrackSwooshViewControllerDelegate> {
    SKUITrackSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUITrackSwooshViewController *_swooshViewController;
}

@property(retain) SKUISwooshPageComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (id)swoosh:(id)arg1 didConfirmItemOfferForItemAtIndex:(long long)arg2;
- (void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didDoubleTapCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)_artworkLoader;
- (id)_swooshViewController;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
