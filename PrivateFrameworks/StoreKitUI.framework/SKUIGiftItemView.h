/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemOfferButton, NSString, SKUIGiftTheme, UIImage, SKUIClientContext, UIImageView, SKUIItemArtworkContext, SKUIItem, UILabel, SKUIItemState;

@interface SKUIGiftItemView : UIView  {
    NSString *_artistName;
    NSString *_categoryName;
    SKUIClientContext *_clientContext;
    SKUIItem *_item;
    UIImageView *_itemImageView;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemState *_itemState;
    long long _itemStyle;
    long long _numberOfUserRatings;
    NSString *_price;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    SKUIGiftTheme *_theme;
    UILabel *_titleLabel;
    float _userRating;
    UILabel *_userRatingCountLabel;
}

@property(readonly) long long giftItemStyle;
@property(readonly) SKUIItem * item;
@property(copy) SKUIGiftTheme * theme;
@property(copy) NSString * artistName;
@property(copy) NSString * categoryName;
@property(copy) NSString * price;
@property(copy) NSString * title;
@property long long numberOfUserRatings;
@property float userRating;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(retain) SKUIItemState * itemState;
@property(retain) UIImage * itemImage;
@property(readonly) SKUIItemArtworkContext * artworkContext;


- (long long)numberOfUserRatings;
- (id)_newLabel;
- (id)itemOfferButton;
- (long long)giftItemStyle;
- (id)_userRatingColor;
- (void)_enumerateMetadataViewsUsingBlock:(id)arg1;
- (double)_paddingLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageEdgeInsets;
- (double)_paddingRight;
- (id)_subtitleColor;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)_reloadSubtitles;
- (void)_itemOfferConfirmAction:(id)arg1;
- (void)_reloadItemState:(bool)arg1;
- (id)itemImage;
- (void)setPrice:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3;
- (id)artworkContext;
- (id)itemState;
- (void)setItemState:(id)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)_reloadUserRatingViews;
- (id)categoryName;
- (struct CGSize { double x1; double x2; })_imageSize;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (float)userRating;
- (void)setUserRating:(float)arg1;
- (id)price;
- (void)setBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (id)_titleColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
