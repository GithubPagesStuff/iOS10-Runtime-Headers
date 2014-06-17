/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, NSString, UIImage, <SKUIRedeemCameraViewDelegate>, SKUIClientContext, SKUIRedeemTextField, UIButton, SKUIITunesPassConfiguration, SKUIRedeemITunesPassLockup, SKUIRedeemCameraLandingView;

@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate> {
    SKUIClientContext *_clientContext;
    <SKUIRedeemCameraViewDelegate> *_delegate;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIITunesPassConfiguration *_iTunesPassConfiguration;
    SKUIRedeemITunesPassLockup *_iTunesPassLockup;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}

@property <SKUIRedeemCameraViewDelegate> * delegate;
@property(getter=isEnabled) bool enabled;
@property(retain) UIImage * image;
@property(retain) SKUIITunesPassConfiguration * ITunesPassConfiguration;
@property(copy) NSString * text;


- (id)initWithClientContext:(id)arg1;
- (void)setITunesPassConfiguration:(id)arg1;
- (void)_resumeRedeemer;
- (void)_hideKeyboard;
- (void)_showRedeemer:(bool)arg1;
- (void)_pauseRedeemer;
- (bool)_isShowingRedeemer;
- (void)_iTunesPassLearnMoreAction:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)_landingButtonAction:(id)arg1;
- (id)ITunesPassConfiguration;
- (void)_termsButtonAction:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)text;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;

@end
