/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UILabel, UIImage;

@interface SKUIStarRatingView : UIView  {
    double _elementSpacing;
    UIImageView *_ratingStarsImageView;
    UILabel *_textLabel;
}

@property double elementSpacing;
@property(retain) UIImage * ratingStarsImage;
@property(readonly) UILabel * textLabel;


- (double)elementSpacing;
- (void)setRatingStarsImage:(id)arg1;
- (id)ratingStarsImage;
- (void)setElementSpacing:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)textLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
