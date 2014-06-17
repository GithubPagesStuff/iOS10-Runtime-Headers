/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIDatePicker, DOMHTMLInputElement;

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {
    DOMHTMLInputElement *_inputElement;
    UIDatePicker *_datePicker;
    NSString *_formatString;
    bool_shouldRemoveTimeZoneInformation;
    bool_isTimeInput;
}

@property(retain) DOMHTMLInputElement * _inputElement;
@property(retain) UIDatePicker * _datePicker;


- (void)dealloc;
- (id)_datePicker;
- (id)_inputElement;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (void)_dateChangeHandler:(id)arg1;
- (void)set_datePicker:(id)arg1;
- (void)set_inputElement:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;

@end
