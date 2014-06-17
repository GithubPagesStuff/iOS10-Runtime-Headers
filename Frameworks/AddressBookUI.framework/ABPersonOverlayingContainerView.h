/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTabsLayoutManager>, UIView;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {
    double _minimumBottomInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _savedContentInset;
    UIView *_backgroundView;
    UIView *_abContentView;
    <ABPersonTabsLayoutManager> *_tabsLayoutManager;
}

@property(retain) UIView * contentView;
@property double minimumBottomInset;
@property(retain) UIView * backgroundView;
@property(retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;


- (void)_updateContentFrameAndSize;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;
- (void)setMinimumBottomInset:(double)arg1;
- (double)minimumBottomInset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
