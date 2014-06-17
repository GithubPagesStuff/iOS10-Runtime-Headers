/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, SKUIBorderView;

@interface SKUITableViewCell : UITableViewCell  {
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    double _titlePaddingLeft;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _textLabelInsets;
    double _borderPaddingLeft;
}

@property(copy) UIColor * bottomBorderColor;
@property(copy) UIColor * topBorderColor;
@property double borderPaddingLeft;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textLabelInsets;


- (id)topBorderColor;
- (id)bottomBorderColor;
- (void)setTopBorderColor:(id)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textLabelInsets;
- (double)borderPaddingLeft;
- (void)_reloadBorderVisibility;
- (void)setTextLabelInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderPaddingLeft:(double)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
