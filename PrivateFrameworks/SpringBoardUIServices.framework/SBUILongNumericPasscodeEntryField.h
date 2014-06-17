/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UIButton, UILabel, SBUIButton, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase  {
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    SBUIButton *_okButton;
    bool_showsOkButton;
    UILabel *_promptLabel;
    bool_showsPromptLabel;
    bool_firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property(readonly) UIButton * okButton;
@property bool showsOkButton;
@property(readonly) UILabel * promptLabel;
@property bool showsPromptLabel;


- (bool)showsPromptLabel;
- (id)promptLabel;
- (bool)showsOkButton;
- (struct CGSize { double x1; double x2; })_okButtonSize;
- (void)setShowsPromptLabel:(bool)arg1;
- (void)setShowsOkButton:(bool)arg1;
- (void)_okButtonHit;
- (struct CGSize { double x1; double x2; })_passcodeFieldSize;
- (struct CGSize { double x1; double x2; })_viewSize;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)_resetForFailedPasscode:(bool)arg1 playUnlockFailedSound:(bool)arg2;
- (void)_autofillForMesaWithCompletion:(id)arg1;
- (id)okButton;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (void)setBackgroundAlpha:(double)arg1;
- (bool)canResignFirstResponder;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)isFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
