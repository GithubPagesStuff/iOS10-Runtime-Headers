/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIFocusedTouchGestureRecognizer, UIView, UIImage, NSString, UIImageView, SKUIItemOfferButtonState, <SKUIItemOfferButtonDelegate>, NSMutableAttributedString, SKUICircleProgressIndicator, UILabel, UIColor;

@interface SKUIItemOfferButton : UIControl  {
    UIColor *_backgroundColor;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImage *_cloudImage;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    long long _confirmationTitleStyle;
    struct CGSize { 
        double width; 
        double height; 
    } _confirmationTitleFitSize;
    <SKUIItemOfferButtonDelegate> *_delegate;
    long long _fillStyle;
    UIImage *_image;
    UIImageView *_imageView;
    bool_isUbered;
    double _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    bool_showsConfirmationState;
    NSMutableAttributedString *_titleAttributedString;
    struct CGSize { 
        double width; 
        double height; 
    } _titleFitSize;
    UILabel *_titleLabel;
    long long _titleStyle;
    bool_universal;
    bool_usesDrawRectPath;
    SKUIItemOfferButtonState *_state;
    UIImageView *_universalImageView;
}

@property <SKUIItemOfferButtonDelegate> * delegate;
@property(copy) NSString * confirmationTitle;
@property(retain) UIImage * image;
@property(copy) NSString * title;
@property long long fillStyle;
@property double progress;
@property(getter=isShowingConfirmation,readonly) bool showingConfirmation;
@property bool showsConfirmationState;
@property long long progressType;
@property long long confirmationTitleStyle;
@property long long titleStyle;
@property(getter=isUniversal) bool universal;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsetsForProgressType:(long long)arg1;
+ (id)_imageForProgressType:(long long)arg1;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 fillStyle:(long long)arg4 universal:(bool)arg5 tintColor:(id)arg6;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 fillStyle:(long long)arg4 universal:(bool)arg5 tintColor:(id)arg6;
+ (id)_cloudImageForTint:(id)arg1 isUbered:(bool)arg2;
+ (id)_defaultTitleAttributes;
+ (struct CGSize { double x1; double x2; })_titleSizeThatFitsForSize:(struct CGSize { double x1; double x2; })arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3;
+ (bool)_sizeMattersForTitleStyle:(long long)arg1;
+ (id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)_basicAnimationWithKeyPath:(id)arg1;

- (id)confirmationTitle;
- (void)setConfirmationTitle:(id)arg1;
- (long long)fillStyle;
- (bool)isShowingConfirmation;
- (bool)isUniversal;
- (void)_insertCancelGestureRecognizer;
- (void)_cancelGestureAction:(id)arg1;
- (void)_insertLabel;
- (void)_insertImageView;
- (void)_insertProgressIndicator;
- (void)_insertBorderView;
- (void)_insertUniversalView;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (bool)showsConfirmationState;
- (bool)_touchInBounds:(id)arg1;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(id)arg4;
- (bool)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(bool)arg5;
- (void)setShowsConfirmationState:(bool)arg1;
- (void)setFillStyle:(long long)arg1;
- (void)_updateForChangedTitleProperty;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(id)arg4;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(id)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(id)arg4;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(id)arg4;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)setProgressType:(long long)arg1 animated:(bool)arg2;
- (void)_updateForChangedConfirmationTitleProperty;
- (void)_sendDidAnimate;
- (void)_reloadForCurrentState:(bool)arg1;
- (void)_sendWillAnimate;
- (void)setTitleStyle:(long long)arg1;
- (long long)titleStyle;
- (void)setConfirmationTitleStyle:(long long)arg1;
- (long long)confirmationTitleStyle;
- (long long)progressType;
- (void)showCloudImage;
- (void)setUniversal:(bool)arg1;
- (struct CGSize { double x1; double x2; })layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)removeButtonStateAnimations;
- (void)setColoringWithAppearance:(id)arg1;
- (void)setShowingConfirmation:(bool)arg1 animated:(bool)arg2;
- (bool)setValuesUsingViewElement:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (bool)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (void)_removeCancelGestureRecognizer;
- (void)setBackgroundColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)setProgressType:(long long)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)_removeAllAnimations:(bool)arg1;
- (void)tintColorDidChange;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
