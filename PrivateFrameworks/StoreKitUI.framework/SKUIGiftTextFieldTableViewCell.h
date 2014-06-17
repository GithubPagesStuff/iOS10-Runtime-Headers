/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, NSString, NSAttributedString, UIControl, <UITextFieldDelegate>, UITextField, UILabel;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell  {
    UILabel *_label;
    UITextField *_textField;
    UIView *_topBorderView;
}

@property(copy) NSAttributedString * attributedPlaceholder;
@property(getter=isEnabled) bool enabled;
@property long long keyboardType;
@property(copy) NSString * label;
@property(readonly) UIControl * textField;
@property <UITextFieldDelegate> * textFieldDelegate;
@property(copy) NSString * value;


- (id)textFieldDelegate;
- (void)setTextFieldDelegate:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setKeyboardType:(long long)arg1;
- (long long)keyboardType;
- (id)label;
- (void).cxx_destruct;
- (id)attributedPlaceholder;
- (void)setAttributedPlaceholder:(id)arg1;
- (id)textField;
- (void)setLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
