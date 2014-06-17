/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIKeyboardBackdropCornerView;

@interface UIKBBackdropView : _UIBackdropView  {
    bool_primaryBackdrop;
    NSMutableArray *_secondaryBackdrops;
    UIKeyboardBackdropCornerView *_backdropCornerView;
    bool_hasUpdatedFrame;
}

@property(readonly) bool _hasUpdatedFrame;

+ (void)_updatedSecondaryBackdropsWithSettings:(id)arg1;
+ (void)_unregisterSecondaryBackdropView:(id)arg1;
+ (void)_registerSecondaryBackdropView:(id)arg1;
+ (id)triggerNotificationNames;
+ (void)overlayRelevantSettings:(id)arg1 ontoSettings:(id)arg2;
+ (id)unconditionalTriggerNotificationNames;

- (void)applySettings:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (bool)_hasUpdatedFrame;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (void)willCallRenderInContextOnBackdropViewLayer;
- (int)textEffectsVisibilityLevel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2 primaryBackdrop:(bool)arg3;
- (void)_setRenderConfig:(id)arg1;
- (void)transitionToStyle:(long long)arg1;
- (void)triggerUpdate:(id)arg1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCorners:(int)arg2;
- (void)layoutSubviews;

@end
