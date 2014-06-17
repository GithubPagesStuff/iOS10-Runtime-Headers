/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImage, UIImageView, _UIBackdropView;

@interface TPWallpaperView : UIView  {
    bool_blursBackground;
    bool_hidesContactImage;
    bool_shouldLockContactImage;
    bool_shouldBindBlurringWithPresenceOfContactImage;
    UIImage *_contactImage;
    double _blurProportion;
    UIImageView *_contactImageView;
    _UIBackdropView *_backdropEffectView;
}

@property(retain) UIImage * contactImage;
@property bool blursBackground;
@property double blurProportion;
@property bool hidesContactImage;
@property bool shouldLockContactImage;
@property bool shouldBindBlurringWithPresenceOfContactImage;
@property(retain) UIImageView * contactImageView;
@property(retain) _UIBackdropView * backdropEffectView;


- (bool)shouldBindBlurringWithPresenceOfContactImage;
- (void)setShouldLockContactImage:(bool)arg1;
- (double)blurProportion;
- (void)setShouldBindBlurringWithPresenceOfContactImage:(bool)arg1;
- (void)setBlurProportion:(double)arg1;
- (void)setHidesContactImage:(bool)arg1;
- (void)setContactImage:(id)arg1;
- (bool)hidesContactImage;
- (void)setContactImage:(id)arg1 animated:(bool)arg2;
- (id)contactImage;
- (void)updateBindBlurringWithPresenceOfContactImage;
- (bool)shouldLockContactImage;
- (void)setContactImageView:(id)arg1;
- (id)contactImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setBlursBackground:(bool)arg1;
- (bool)blursBackground;
- (void)setBackdropEffectView:(id)arg1;
- (id)backdropEffectView;

@end
