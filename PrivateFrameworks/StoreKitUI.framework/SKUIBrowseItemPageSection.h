/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIBrowseItemComponent;

@interface SKUIBrowseItemPageSection : SKUIStorePageSection  {
}

@property(retain) SKUIBrowseItemComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;

@end
