/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, NSURL, PKLinkedAppUserRatingView, UIImageView, NSDictionary, UIButton, SSSoftwareLibraryItem, SKStoreProductViewController, UILabel, UIActivityIndicatorView;

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate> {
    bool_lookupInitiated;
    bool_appInstalled;
    bool_appNotAvailable;
    NSArray *_storeIDs;
    NSDictionary *_foundStoreItem;
    SSSoftwareLibraryItem *_foundLibraryItem;
    UIImageView *_iconView;
    UILabel *_tapToOpen;
    UILabel *_appName;
    UIButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
    SKStoreProductViewController *_productViewController;
    NSURL *_appLaunchURL;
}

@property(retain) NSArray * storeIDs;
@property(retain) NSURL * appLaunchURL;
@property bool lookupInitiated;
@property bool appInstalled;
@property(retain) NSDictionary * foundStoreItem;
@property(retain) SSSoftwareLibraryItem * foundLibraryItem;
@property(retain) UIImageView * iconView;
@property(retain) UILabel * tapToOpen;
@property(retain) UILabel * appName;
@property(retain) UIButton * viewButton;
@property(retain) UILabel * appPublisher;
@property(retain) PKLinkedAppUserRatingView * userRatingView;
@property(retain) UILabel * price;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property(retain) UILabel * loadingLabel;
@property bool appNotAvailable;
@property(retain) SKStoreProductViewController * productViewController;


- (void)setPrice:(id)arg1;
- (void)_layoutLoadingView;
- (void)setAppLaunchURL:(id)arg1;
- (id)appLaunchURL;
- (void)setUserRatingView:(id)arg1;
- (id)userRatingView;
- (void)setAppPublisher:(id)arg1;
- (id)appPublisher;
- (void)setViewButton:(id)arg1;
- (id)viewButton;
- (void)setAppName:(id)arg1;
- (id)appName;
- (void)setTapToOpen:(id)arg1;
- (id)tapToOpen;
- (bool)_itemArtNeedsShine:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeFromImage:(id)arg1;
- (int)_bindingTypeForNewsstandItem:(id)arg1;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2 requireStrictMatch:(bool)arg3;
- (void)setFoundLibraryItem:(id)arg1;
- (id)_priceForItem:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (id)foundLibraryItem;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (void)_cleanupViews;
- (void)_layoutLockupView;
- (id)foundStoreItem;
- (bool)lookupInitiated;
- (void)_layoutNotAvailableView;
- (bool)appNotAvailable;
- (void)setFoundStoreItem:(id)arg1;
- (int)_iconVariantForImage:(id)arg1 item:(id)arg2;
- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2 requireStrictMatch:(bool)arg3;
- (struct CGSize { double x1; double x2; })_desiredSizeForNewsstandItem:(id)arg1;
- (id)_newsstandArtworkForItem:(id)arg1;
- (bool)_itemIsNewsstandApp:(id)arg1;
- (void)setLookupInitiated:(bool)arg1;
- (void)performStoreLookup;
- (bool)appInstalled;
- (id)storeIDs;
- (void)setAppNotAvailable:(bool)arg1;
- (void)setAppInstalled:(bool)arg1;
- (bool)_anyAppIsInstalled:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)reloadWithDelay:(double)arg1;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2;
- (id)productViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setProductViewController:(id)arg1;
- (id)price;
- (void)reload;
- (void)dealloc;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (void)setIconView:(id)arg1;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
