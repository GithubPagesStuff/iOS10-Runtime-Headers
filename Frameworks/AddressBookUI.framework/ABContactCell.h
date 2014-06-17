/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, ABCardGroupItem;

@interface ABContactCell : UITableViewCell  {
    bool_addedConstantsConstraints;
    NSArray *_variableConstraints;
    bool_hasBeenDisplayed;
    ABCardGroupItem *_cardGroupItem;
    double _leftContentMargin;
    double _rightContentMargin;
}

@property bool showSeparator;
@property(retain) ABCardGroupItem * cardGroupItem;
@property double leftContentMargin;
@property double rightContentMargin;
@property bool hasBeenDisplayed;

+ (bool)requiresConstraintBasedLayout;

- (void)setHasBeenDisplayed:(bool)arg1;
- (bool)hasBeenDisplayed;
- (void)setRightContentMargin:(double)arg1;
- (double)rightContentMargin;
- (void)setLeftContentMargin:(double)arg1;
- (double)leftContentMargin;
- (bool)showSeparator;
- (void)setShowSeparator:(bool)arg1;
- (void)performAccessoryAction;
- (bool)shouldPerformAccessoryAction;
- (id)constantConstraints;
- (bool)shouldPerformDefaultAction;
- (double)minCellHeight;
- (id)variableConstraints;
- (void)setCardGroupItem:(id)arg1;
- (id)cardGroupItem;
- (void)performDefaultAction;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateConstraints;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
