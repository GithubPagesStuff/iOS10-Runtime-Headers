/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIBezierPath, UIView, NSMutableArray, SUCellConfiguration;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    int _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled : 1;
    unsigned int _highlighted : 1;
    unsigned int _highlightsOnlyContentView : 1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout : 1;
}

@property bool usesSubviews;
@property int clipCorners;
@property(retain) SUCellConfiguration * configuration;
@property(getter=isDeleteConfirmationVisible) bool deleteConfirmationVisisble;
@property bool drawAsDisabled;
@property bool highlightsOnlyContentView;
@property(getter=isHighlighted) bool highlighted;


- (void)_removeSubviewsForConfiguration;
- (id)_clippedImageForImage:(id)arg1;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (void)_reloadSubviewAlphasAnimated:(bool)arg1;
- (bool)isDeleteConfirmationVisible;
- (void)_reloadSubviewsForConfiguration;
- (void)setUsesSubviews:(bool)arg1;
- (bool)usesSubviews;
- (void)setHighlightsOnlyContentView:(bool)arg1;
- (void)setDrawAsDisabled:(bool)arg1;
- (bool)drawAsDisabled;
- (id)_clipPath;
- (bool)highlightsOnlyContentView;
- (void)setUsesSubviews:(bool)arg1 animated:(bool)arg2;
- (void)setDeleteConfirmationVisisble:(bool)arg1;
- (void)reloadView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)configuration;
- (void)dealloc;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setConfiguration:(id)arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (id)_scriptingInfo;
- (void)layoutSubviews;

@end
