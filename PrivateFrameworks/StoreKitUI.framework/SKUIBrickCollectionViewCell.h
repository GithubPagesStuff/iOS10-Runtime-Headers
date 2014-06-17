/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUICountdown, NSString, UIImage, UIView, SKUICountdownView, SKUIClientContext, UIImageView, UILabel, UIColor;

@interface SKUIBrickCollectionViewCell : UICollectionViewCell  {
    NSString *_accessibilityLabel;
    SKUIClientContext *_clientContext;
    SKUICountdownView *_countdownView;
    bool_itemImageHidden;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _itemImageInsets;
    UIImageView *_itemImageView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_overlayImageView;
}

@property(copy) NSString * accessibilityLabel;
@property(copy) NSString * title;
@property(retain) SKUICountdown * countdown;
@property(retain) SKUIClientContext * clientContext;
@property(retain) UIImage * itemImage;
@property(getter=isItemImageHidden) bool itemImageHidden;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } itemImageInsets;
@property(readonly) UIView * itemImageView;


- (id)itemImageView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })itemImageInsets;
- (void)setItemImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItemImageHidden:(bool)arg1;
- (void)_removeOverlay;
- (bool)isItemImageHidden;
- (void)_reloadHighlight;
- (id)itemImage;
- (void)setCountdown:(id)arg1;
- (void)setItemImage:(id)arg1;
- (id)countdown;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setBackgroundColor:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void).cxx_destruct;
- (void)setSelected:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)layoutSubviews;

@end
