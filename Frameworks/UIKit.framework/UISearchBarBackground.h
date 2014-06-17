/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSMutableDictionary, UIImage;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {
    UIColor *_barTintColor;
    NSMutableDictionary *_customBackgroundImages;
    NSMutableDictionary *_generatedBackgroundImages;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    unsigned int _barStyle : 3;
    unsigned int _barTranslucence : 3;
    unsigned int _usesEmbeddedAppearance : 1;
    unsigned int _actingAsNavBar : 1;
    unsigned int _usesContiguousBarBackground : 1;
    unsigned int _barHasController;
}

@property long long barStyle;
@property unsigned long long searchBarStyle;
@property(retain) UIColor * barTintColor;
@property(getter=isTranslucent) bool translucent;
@property bool usesEmbeddedAppearance;
@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * backgroundImagePrompt;
@property bool usesContiguousBarBackground;


- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (bool)usesContiguousBarBackground;
- (id)backgroundImagePrompt;
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;
- (void)_updateBackgroundImageIfPossible;
- (unsigned long long)searchBarStyle;
- (bool)usesEmbeddedAppearance;
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setUsesContiguousBarBackground:(bool)arg1;
- (bool)_hasCustomBackgroundImage;
- (void)_setBehavesAsIfSearchBarHasController:(bool)arg1;
- (void)setSearchBarStyle:(unsigned long long)arg1;
- (void)setUsesEmbeddedAppearance:(bool)arg1;
- (id)barTintColor;
- (long long)_barPosition;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (long long)barStyle;
- (void)setBarStyle:(long long)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_updateBackgroundImage;
- (id)backgroundImage;
- (bool)isTranslucent;

@end
