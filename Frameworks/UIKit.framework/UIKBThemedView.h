/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView> {
    CALayer *_borders;
    CALayer *_background;
    bool_lightKeyboard;
    bool_active;
    bool_usePersistentCaching;
    int _style;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _cacheInsets;
}

@property bool active;
@property int style;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cacheInsets;
@property bool usePersistentCaching;
@property(readonly) NSString * cacheKey;
@property(readonly) bool cacheDeferable;
@property(readonly) double cachedWidth;
@property(readonly) bool keepNonPersistent;


- (bool)active;
- (void)setStyle:(int)arg1;
- (void)displayLayer:(id)arg1;
- (int)style;
- (void)setActive:(bool)arg1;
- (bool)usePersistentCaching;
- (id)traitsForCurrentStyle;
- (bool)_hasInsets;
- (void)_popuplateLayer:(id)arg1 withContents:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cacheInsets;
- (void)setUsePersistentCaching:(bool)arg1;
- (void)setCacheInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)keepNonPersistent;
- (bool)cacheDeferable;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (id)cacheKey;
- (void)_setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(int)arg2;
- (bool)_canDrawContent;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
