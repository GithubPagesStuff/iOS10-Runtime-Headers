/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UILongPressGestureRecognizer, NSString, UIImageView, PSSpecifier, PSTableCellHighlightContext;

@interface PSTableCell : UITableViewCell  {
    id _value;
    UIImageView *_checkedImageView;
    bool_checked;
    bool_shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    bool_cellEnabled;
    PSSpecifier *_specifier;
    long long _type;
    bool_lazyIcon;
    bool_lazyIconDontUnload;
    bool_lazyIconForceSynchronous;
    NSString *_lazyIconAppID;
    bool_reusedCell;
    PSTableCellHighlightContext *_customHighlightContext;
    bool_isCopyable;
    UILongPressGestureRecognizer *_longTapRecognizer;
}

@property long long type;
@property(retain) PSSpecifier * specifier;
@property bool reusedCell;
@property bool isCopyable;
@property(retain) UILongPressGestureRecognizer * longTapRecognizer;

+ (double)defaultCellHeight;
+ (long long)cellTypeFromString:(id)arg1;
+ (id)reuseIdentifierForBasicCellTypes:(long long)arg1;
+ (id)reuseIdentifierForClassAndType:(long long)arg1;
+ (id)stringFromCellType:(long long)arg1;
+ (Class)cellClassForSpecifier:(id)arg1;
+ (id)reuseIdentifierForSpecifier:(id)arg1;
+ (long long)cellStyle;

- (id)valueLabel;
- (void)setLongTapRecognizer:(id)arg1;
- (id)longTapRecognizer;
- (void)setIsCopyable:(bool)arg1;
- (bool)isCopyable;
- (bool)reusedCell;
- (bool)cellEnabled;
- (id)getIcon;
- (id)titleTextLabel;
- (SEL)cellAction;
- (id)cellTarget;
- (void)setCellAction:(SEL)arg1;
- (void)setCellTarget:(id)arg1;
- (id)iconImageView;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)setCellEnabled:(bool)arg1;
- (id)getLazyIconID;
- (id)getLazyIcon;
- (id)blankIcon;
- (void)setShouldHideTitle:(bool)arg1;
- (void)longPressed:(id)arg1;
- (id)_copyableText;
- (void)_invalidateHighlightContext;
- (void)highlightCellForDuration:(double)arg1 animateUnighlight:(bool)arg2;
- (bool)canBeChecked;
- (void)cellRemovedFromView;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setReusedCell:(bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)reloadWithSpecifier:(id)arg1 animated:(bool)arg2;
- (bool)canReload;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setAlignment:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)dealloc;
- (id)target;
- (bool)isChecked;
- (double)textFieldOffset;
- (void)setIcon:(id)arg1;
- (void)copy:(id)arg1;
- (id)_contentString;
- (void)prepareForReuse;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (id)titleLabel;
- (bool)canBecomeFirstResponder;
- (id)scriptingInfoWithChildren;
- (id)_automationID;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setChecked:(bool)arg1;
- (void)layoutSubviews;

@end
