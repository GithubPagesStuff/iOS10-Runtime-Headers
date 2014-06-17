/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIFont, NSString, ABNamePropertyGroup, UILabel, ABStyleProvider, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl  {
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    double _minimumHeight;
    bool_alignOnBottom;
    UILabel *_headlineLabel;
    UILabel *_tagLineLabel;
    UILabel *_messageLabel;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UIFont *_messageDetailFont;
    ABStyleProvider *_styleProvider;
    NSString *_customHeadline;
    NSString *_customTagLine;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
}

@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property int primaryProperty;
@property(copy) NSString * primaryPropertyFormattingCountryCode;
@property double minimumHeight;
@property bool alignOnBottom;
@property(copy) NSString * headline;
@property(copy) NSString * tagLine;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) ABStyleProvider * styleProvider;
@property(retain) UIView * customMessageView;


- (double)minimumHeight;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageDetail;
- (id)tagLine;
- (id)headline;
- (void)setAlignOnBottom:(bool)arg1;
- (bool)alignOnBottom;
- (void)setMinimumHeight:(double)arg1;
- (void)setPrimaryPropertyFormattingCountryCode:(id)arg1;
- (id)primaryPropertyFormattingCountryCode;
- (id)namePropertyGroup;
- (void)_setSubviewsHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)reloadNameDataAnimated:(bool)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setTagLine:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)_setLabel:(id)arg1 highlighted:(bool)arg2 animated:(bool)arg3;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (id)_copyTagLine;
- (id)_copyPrimaryValue;
- (void)_adjustLabelTextColorForPasteboardSelection:(bool)arg1;
- (struct CGSize { double x1; double x2; })multilineLabel:(id)arg1 sizeThatFits:(struct CGSize { double x1; double x2; })arg2;
- (double)_heightForLabelsForWidth:(double)arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned long long)arg2;
- (void)_setFont:(id)arg1 isDetail:(bool)arg2;
- (void)_setMessageText:(id)arg1 isDetail:(bool)arg2;
- (void)_updateTagLineText;
- (void)_updateHeadlineText;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (bool)abShouldShowMenu;
- (int)primaryProperty;
- (void)setPrimaryProperty:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)messageFont;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)copy:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
