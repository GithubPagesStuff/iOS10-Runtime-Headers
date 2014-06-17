/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElementLayoutContext, SKUISlideshowViewController, SKUIIPhoneSlideshowViewController, NSMutableArray, <SKUIViewElementSlideshowDelegate>;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {
    <SKUIViewElementSlideshowDelegate> *_delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property <SKUIViewElementSlideshowDelegate> * delegate;
@property(retain) SKUIViewElementLayoutContext * layoutContext;
@property(readonly) long long numberOfSlideshowItems;


- (void)setLayoutContext:(id)arg1;
- (id)layoutContext;
- (void)presentFromParentViewController:(id)arg1;
- (long long)numberOfSlideshowItems;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;

@end
