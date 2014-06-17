/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary, NSMutableSet, _UIFlowLayoutInfo, NSMutableArray;

@interface _UIFlowLayoutSection : NSObject  {
    NSMutableArray *_items;
    NSMutableArray *_rows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _sectionMargins;
    double _verticalInterstice;
    double _horizontalInterstice;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _headerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _footerFrame;
    double _headerDimension;
    double _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    bool_isValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _validRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rectToKeepValid;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _validItemRange;
    NSMutableSet *_invalidatedIndexPaths;
    NSDictionary *_rowAlignmentOptions;
    bool_fixedItemSize;
    struct CGSize { 
        double width; 
        double height; 
    } _itemSize;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    bool_lastRowIncomplete;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
}

@property(readonly) NSMutableArray * items;
@property(readonly) NSMutableArray * rows;
@property double verticalInterstice;
@property double horizontalInterstice;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionMargins;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headerFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } footerFrame;
@property double headerDimension;
@property double footerDimension;
@property _UIFlowLayoutInfo * layoutInfo;
@property(retain) NSDictionary * rowAlignmentOptions;
@property bool fixedItemSize;
@property struct CGSize { double x1; double x2; } itemSize;
@property(readonly) double otherMargin;
@property(readonly) double beginMargin;
@property(readonly) double endMargin;
@property(readonly) double actualGap;
@property(readonly) double lastRowBeginMargin;
@property(readonly) double lastRowEndMargin;
@property(readonly) double lastRowActualGap;
@property(readonly) bool lastRowIncomplete;
@property long long itemsCount;
@property(readonly) long long itemsByRowCount;
@property(readonly) long long indexOfIncompleteRow;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } validItemRange;
@property(readonly) NSArray * invalidatedIndexPaths;


- (id)items;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (double)lastRowEndMargin;
- (void)setFooterFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)horizontalInterstice;
- (id)rowsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyFromLayoutInfo:(id)arg1;
- (void)addInvalidatedIndexPath:(id)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setEstimatedSize:(struct CGSize { double x1; double x2; })arg1 forSection:(long long)arg2;
- (void)logInvalidSizes;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (id)addRowAtEnd:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })footerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (void)computeLayout;
- (void)computeLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSection:(long long)arg2;
- (void)setFooterDimension:(double)arg1;
- (void)setHeaderDimension:(double)arg1;
- (void)setRowAlignmentOptions:(id)arg1;
- (void)setVerticalInterstice:(double)arg1;
- (void)setHorizontalInterstice:(double)arg1;
- (void)setSectionMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFixedItemSize:(bool)arg1;
- (id)addItem;
- (void)setItemsCount:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validItemRange;
- (double)endMargin;
- (id)layoutInfo;
- (long long)itemsCount;
- (id)invalidatedIndexPaths;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2;
- (double)verticalInterstice;
- (double)otherMargin;
- (double)actualGap;
- (double)beginMargin;
- (double)lastRowActualGap;
- (double)lastRowBeginMargin;
- (long long)indexOfIncompleteRow;
- (bool)lastRowIncomplete;
- (id)rowAlignmentOptions;
- (struct CGSize { double x1; double x2; })itemSize;
- (long long)itemsByRowCount;
- (bool)fixedItemSize;
- (double)footerDimension;
- (double)headerDimension;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rows;
- (id)snapshot;

@end
