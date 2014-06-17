/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {
    SKUIQuicklinksViewController *_quicklinksViewController;
}

@property(retain) SKUIQuicklinksPageComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;
- (id)_quicklinksViewController;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (long long)numberOfCells;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
