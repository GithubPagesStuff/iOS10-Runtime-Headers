/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UILabel, SKUIColorScheme, NSString;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell  {
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(copy) NSString * indexString;
@property(copy) NSString * priceString;
@property(copy) NSString * productName;


- (void)setProductName:(id)arg1;
- (void)setPriceString:(id)arg1;
- (void)setIndexString:(id)arg1;
- (id)priceString;
- (id)indexString;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)productName;
- (void)setBackgroundColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void).cxx_destruct;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)layoutSubviews;

@end
