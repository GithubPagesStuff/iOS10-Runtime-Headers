/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, <UIPickerViewDelegate>, CALayer, UIImageView, NSMutableArray, <UIPickerViewDataSource>, _UIPickerViewTestParameters, UIColor;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource> {
    NSMutableArray *_tables;
    UIView *_topFrame;
    NSMutableArray *_dividers;
    NSMutableArray *_selectionBars;
    <UIPickerViewDataSource> *_dataSource;
    <UIPickerViewDelegate> *_delegate;
    UIView *_backgroundView;
    long long _numberOfComponents;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    UIView *_topLineView;
    UIView *_bottomLineView;
    struct { 
        unsigned int needsLayout : 1; 
        unsigned int delegateRespondsToNumberOfComponentsInPickerView : 1; 
        unsigned int delegateRespondsToNumberOfRowsInComponent : 1; 
        unsigned int delegateRespondsToDidSelectRow : 1; 
        unsigned int delegateRespondsToViewForRow : 1; 
        unsigned int delegateRespondsToTitleForRow : 1; 
        unsigned int delegateRespondsToAttributedTitleForRow : 1; 
        unsigned int delegateRespondsToWidthForComponent : 1; 
        unsigned int delegateRespondsToRowHeightForComponent : 1; 
        unsigned int showsSelectionBar : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowSelectingCells : 1; 
        unsigned int soundsDisabled : 1; 
        unsigned int usesCheckedSelection : 1; 
        unsigned int skipsBackground : 1; 
    } _pickerViewFlags;
    bool_usesModernStyle;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    _UIPickerViewTestParameters *_currentTestParameters;
    bool_isInLayoutSubviews;
    bool_magnifierEnabled;
}

@property <UIPickerViewDataSource> * dataSource;
@property <UIPickerViewDelegate> * delegate;
@property bool showsSelectionIndicator;
@property(readonly) long long numberOfComponents;
@property(setter=_setMagnifierEnabled:) bool _magnifierEnabled;
@property(getter=_usesModernStyle,setter=_setUsesModernStyle:) bool usesModernStyle;
@property(getter=_highlightColor,setter=_setHighlightColor:,retain) UIColor * highlightColor;
@property(getter=_textColor,setter=_setTextColor:,retain) UIColor * textColor;
@property(getter=_textShadowColor,setter=_setTextShadowColor:,retain) UIColor * textShadowColor;
@property(setter=_setInLayoutSubviews:) bool _isInLayoutSubviews;

+ (id)_modernNonCenterCellFont;
+ (id)_modernCenterCellFont;
+ (struct CGSize { double x1; double x2; })sizeForCurrentOrientationThatFits:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeForCurrentOrientation;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forInterfaceOrientation:(long long)arg2;

- (void)reload;
- (void)setBackgroundColor:(id)arg1;
- (void)setHidden:(bool)arg1;
- (id)_contentView;
- (void)setDataSource:(id)arg1;
- (void)setNeedsLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (long long)numberOfColumns;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (bool)isAccessibilityElementByDefault;
- (void)_setInLayoutSubviews:(bool)arg1;
- (bool)_isInLayoutSubviews;
- (void)_setTextShadowColor:(id)arg1;
- (id)_textShadowColor;
- (void)_setHighlightColor:(id)arg1;
- (id)_highlightColor;
- (void)_setUsesModernStyle:(bool)arg1;
- (void)_setMagnifierEnabled:(bool)arg1;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveTableViewFrameForColumn:(long long)arg1;
- (int)selectedRowForColumn:(int)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRowsForColumn:(int)arg1;
- (void)_setDrawsBackground:(bool)arg1;
- (bool)_usesCheckedSelection;
- (void)_setUsesCheckedSelection:(bool)arg1;
- (bool)allowsMultipleSelection;
- (bool)showsSelectionIndicator;
- (void)setShowsSelectionIndicator:(bool)arg1;
- (void)reloadAllPickerPieces;
- (id)viewForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)numberOfRowsInColumn:(long long)arg1;
- (struct CGSize { double x1; double x2; })rowSizeForComponent:(long long)arg1;
- (double)scrollAnimationDuration;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)reloadDataForColumn:(int)arg1;
- (void)setSoundsEnabled:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (bool)_usesCheckSelection;
- (bool)_soundsEnabled;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(bool)arg3;
- (void)_completeCurrentTest;
- (void)_iterateOnCurrentTest;
- (id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)_textColor;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(bool)arg2;
- (void)_sendSelectionChangedForComponent:(long long)arg1 notify:(bool)arg2;
- (void)_noteScrollingFinishedForComponent:(long long)arg1;
- (void)_updateWithOldSize:(struct CGSize { double x1; double x2; })arg1 newSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)_delegateNumberOfRowsInComponent:(long long)arg1;
- (void)_resetSelectionOfTables;
- (void)_addMagnifierLinesForRowHeight:(double)arg1;
- (bool)_magnifierEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionBarRectForHeight:(double)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (id)_createTableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forComponent:(long long)arg2;
- (id)_createColumnWithTableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rowHeight:(double)arg2;
- (id)createDividerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_usesModernStyle;
- (double)_wheelShift;
- (double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3;
- (id)_createViewForPickerPiece:(int)arg1;
- (bool)_drawsBackground;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)tableViewForColumn:(long long)arg1;
- (void)layoutSubviews;
- (double)_delegateRowHeightForComponent:(long long)arg1;
- (void)_setTextColor:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_perspectiveTransform;
- (double)_tableRowHeight;
- (long long)columnForTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)imageForPickerPiece:(int)arg1;
- (id)_popoverSuffix;
- (id)_selectionBarSuffix;
- (void)reloadComponent:(long long)arg1;
- (void)reloadData;
- (long long)_delegateNumberOfComponents;
- (void)reloadAllComponents;
- (void)_updateSelectedRows;
- (void)didMoveToWindow;
- (void)setAlpha:(double)arg1;
- (void)_updateSound;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3 notify:(bool)arg4;
- (long long)selectedRowInComponent:(long long)arg1;
- (long long)numberOfComponents;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (bool)_shouldDrawWithModernStyle;
- (bool)_isLandscapeOrientation;
- (id)_orientationImageSuffix;
- (id)pickerImageNamePrefix;
- (void)_UIAppearance_setBackgroundColor:(id)arg1;

@end
