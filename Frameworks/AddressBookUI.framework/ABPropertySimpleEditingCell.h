/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextField;

@interface ABPropertySimpleEditingCell : ABPropertyEditingCell <UITextFieldDelegate> {
    UITextField *_textField;
}

@property(readonly) UITextField * textField;


- (void)textFieldChanged:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)valueView;
- (id)firstResponderItem;
- (id)constantConstraints;
- (id)variableConstraints;
- (void)dealloc;
- (id)textField;
- (void)prepareForReuse;

@end
