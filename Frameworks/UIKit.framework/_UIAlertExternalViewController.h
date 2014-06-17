/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, NSMutableArray, UIAlertView;

@interface _UIAlertExternalViewController : UIViewController  {
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSMutableArray *_buttons;
    UIAlertView *_representedAlert;
}

@property UIAlertView * representedAlert;


- (id)init;
- (void)dealloc;
- (void)setRepresentedAlert:(id)arg1;
- (id)_messageAttributedStringSmallText;
- (id)_buttonWithTitle:(id)arg1 index:(long long)arg2;
- (void)_dismissIfCapable;
- (void)_buttonTapped:(id)arg1;
- (id)_messageAttributesSmallText;
- (id)_messageAttributes;
- (id)_titleAttributes;
- (id)representedAlert;
- (id)_textAttributes;
- (id)_messageAttributedString;
- (id)_titleAttributedString;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;

@end
