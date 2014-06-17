/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIColor, _UIBarButtonItemAppearanceStorage;

@interface UINavigationItemButtonView : UINavigationItemView  {
    long long _style;
    bool_pressed;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    bool_customBackgroundImageChangedToOrFromNil;
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
    bool_wantsBlendModeForAccessibilityBackgrounds;
    unsigned long long _abbreviatedTitleIndex;
}

@property(setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex;
@property(setter=_setWantsBlendModeForAccessibilityBackgrounds:) bool _wantsBlendModeForAccessibilityBackgrounds;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(long long)arg1;
- (id)title;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (void)dealloc;
- (struct UIOffset { double x1; double x2; })_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_drawBackground_legacy;
- (id)_currentCustomBackgroundNeedsDarkening:(bool*)arg1;
- (double)_titleYAdjustmentCustomization;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (bool)_useSilverLookForBarStyle:(long long)arg1;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (id)_tintColor;
- (bool)_wantsBlendModeForAccessibilityBackgrounds;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_defaultFont;
- (id)backgroundImageView;
- (bool)hasCustomBackgroundImage;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1;
- (bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (bool)pressed;
- (void)setPressed:(bool)arg1 initialPress:(bool)arg2;
- (bool)_suppressesBackIndicatorView;
- (bool)customBackgroundImageChangedToOrFromNil;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (bool)_wantsAccessibilityButtonShapes;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_appearanceStorage;
- (void)setPressed:(bool)arg1;
- (void)_setAbbreviatedTitleIndex:(unsigned long long)arg1;
- (unsigned long long)_abbreviatedTitleIndex;
- (id)_scriptingInfo;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)tintColorDidChange;
- (Class)_appearanceGuideClass;
- (bool)_canDrawContent;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
