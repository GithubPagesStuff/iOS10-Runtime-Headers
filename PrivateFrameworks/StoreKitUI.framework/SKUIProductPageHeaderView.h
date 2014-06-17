/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage, UILabel, SKUIItemOfferButton, SKUIItemState, UIButton, SKUIBadgeLabel, NSString, SKUIItemContentRating, SKUIProductPageHeaderLabel, SKUIClientContext, UIControl, SKUIContentRatingArtworkResourceLoader, SKUIColorScheme, SKUIItemOffer;

@interface SKUIProductPageHeaderView : UIView <SKUIItemOfferButtonDelegate, SKUIContentRatingArtworkLoaderObserver> {
    UILabel *_ageBandLabel;
    UIButton *_artistButton;
    SKUIBadgeLabel *_editorialBadgeLabel;
    SKUIClientContext *_clientContext;
    SKUIItemContentRating *_contentRating;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIColorScheme *_colorScheme;
    UILabel *_facebookFriendsLabel;
    UIImageView *_facebookLogoImageView;
    double _headerImageHeight;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    UILabel *_itemOfferExplanationLabel;
    UILabel *_itemOfferExplanationTitleLabel;
    SKUIItemState *_itemState;
    bool_needsLayoutAfterButtonAnimation;
    long long _numberOfUserRatings;
    bool_restricted;
    SKUIItemContentRating *_secondaryContentRating;
    UIButton *_shareButton;
    SKUIProductPageHeaderLabel *_titleLabel;
    double _userRating;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}

@property(copy) NSString * artistName;
@property(copy) NSString * facebookFriendsString;
@property(copy) NSString * title;
@property(copy) NSString * inAppPurchasesString;
@property(copy) NSString * editorialBadge;
@property(readonly) UIControl * artistButton;
@property(retain) SKUIContentRatingArtworkResourceLoader * contentRatingArtworkLoader;
@property(retain) SKUIItemContentRating * contentRating;
@property(retain) SKUIItemContentRating * secondaryContentRating;
@property(copy) NSString * ageBandString;
@property(retain) SKUIColorScheme * colorScheme;
@property(retain) UIImage * headerImage;
@property double headerImageHeight;
@property(retain) UIImage * iconImage;
@property(readonly) UIControl * shareButton;
@property(retain) SKUIItemOffer * itemOffer;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(copy) NSString * itemOfferExplanationText;
@property(copy) NSString * itemOfferExplanationTitle;
@property(getter=isRestricted) bool restricted;
@property(copy) SKUIItemState * itemState;
@property long long numberOfUserRatings;
@property double userRating;


- (long long)numberOfUserRatings;
- (id)initWithClientContext:(id)arg1;
- (id)itemOfferButton;
- (id)shareButton;
- (id)secondaryContentRating;
- (double)headerImageHeight;
- (id)contentRatingArtworkLoader;
- (id)artistButton;
- (void)setSecondaryContentRating:(id)arg1;
- (void)setItemOfferExplanationTitle:(id)arg1;
- (void)setItemOfferExplanationText:(id)arg1;
- (void)setInAppPurchasesString:(id)arg1;
- (void)setHeaderImageHeight:(double)arg1;
- (void)setFacebookFriendsString:(id)arg1;
- (void)setEditorialBadge:(id)arg1;
- (void)setContentRatingArtworkLoader:(id)arg1;
- (void)setAgeBandString:(id)arg1;
- (id)itemOfferExplanationTitle;
- (id)itemOfferExplanationText;
- (id)inAppPurchasesString;
- (id)facebookFriendsString;
- (void)_finishButtonAnimation;
- (void)_getBottomLayoutProperties:(struct { /* ? */ }**)arg1 origins:(double**)arg2 height:(double*)arg3 forWidth:(double)arg4;
- (void)_getTopLayoutProperties:(struct { /* ? */ }**)arg1 origins:(double**)arg2 height:(double*)arg3 forWidth:(double)arg4;
- (id)ageBandString;
- (id)contentRatingName;
- (void)_reloadItemOfferButton:(bool)arg1;
- (void)setRestricted:(bool)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setHeaderImage:(id)arg1;
- (id)headerImage;
- (id)itemState;
- (id)itemOffer;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (id)editorialBadge;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setIconImage:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (id)artistName;
- (double)userRating;
- (void)setUserRating:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (bool)isRestricted;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (void).cxx_destruct;
- (id)iconImage;
- (void)sizeToFit;
- (void)layoutSubviews;

@end
