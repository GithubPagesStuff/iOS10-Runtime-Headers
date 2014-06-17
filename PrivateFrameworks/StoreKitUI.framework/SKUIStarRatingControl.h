/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl  {
    long long _previousUserRating;
    UIImageView *_emptyStarsImageView;
    UIImageView *_filledStarsImageView;
    long long _userRating;
}

@property(retain) UIImage * emptyStarsImage;
@property(retain) UIImage * filledStarsImage;
@property long long userRating;


- (id)filledStarsImage;
- (id)emptyStarsImage;
- (void)_updateUserRatingWithTouch:(id)arg1;
- (void)setFilledStarsImage:(id)arg1;
- (void)setEmptyStarsImage:(id)arg1;
- (long long)userRating;
- (void)setUserRating:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
