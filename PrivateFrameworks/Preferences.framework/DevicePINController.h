/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, <DevicePINControllerDelegate>, UIBarButtonItem;

@interface DevicePINController : PSDetailController  {
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    bool_success;
    id _pinDelegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    bool_hidesNavigationButtons;
}

@property <DevicePINControllerDelegate> * pinDelegate;
@property bool hidesNavigationButtons;

+ (bool)settingEnabled;

- (void)setHidesNavigationButtons:(bool)arg1;
- (bool)hidesNavigationButtons;
- (void)setPinDelegate:(id)arg1;
- (id)pinInstructionsPromptFont;
- (id)pinInstructionsPrompt;
- (void)pinEntered:(id)arg1;
- (int)pinLength;
- (void)performActionAfterPINEntry;
- (void)performActionAfterPINRemove;
- (void)setOldPassword:(id)arg1;
- (bool)attemptValidationWithPIN:(id)arg1;
- (void)_showPINConfirmationError;
- (void)setPIN:(id)arg1 completion:(id)arg2;
- (bool)_asyncSetPinCompatible;
- (id)pinDelegate;
- (void)performActionAfterPINSet;
- (bool)completedInputIsValid:(id)arg1;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (void)_slidePasscodeField;
- (void)setLastEntry:(id)arg1;
- (bool)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (void)_updatePINButtons;
- (void)adjustButtonsForPasswordLength:(unsigned long long)arg1;
- (bool)showSimplePINCancelButtonOnLeft;
- (bool)simplePIN;
- (void)cancelButtonTapped;
- (void)_updateErrorTextAndFailureCount:(bool)arg1;
- (void)_showFailedAttempts;
- (id)stringsTable;
- (id)stringsBundle;
- (void)_setUnblockTime:(double)arg1;
- (void)_setNumberOfFailedAttempts:(long long)arg1;
- (long long)numberOfFailedAttempts;
- (void)_clearBlockedState;
- (double)unblockTime;
- (struct __CFString { }*)blockedStateKey;
- (struct __CFString { }*)blockTimeIntervalKey;
- (struct __CFString { }*)failedAttemptsKey;
- (int)_getScreenType;
- (bool)validatePIN:(id)arg1;
- (struct CGSize { double x1; double x2; })overallContentSizeForViewInPopover;
- (void)_updateUI;
- (struct __CFString { }*)defaultsID;
- (bool)useProgressiveDelays;
- (void)setPane:(id)arg1;
- (bool)requiresKeyboard;
- (void)willUnlock;
- (void)setSpecifier:(id)arg1;
- (void)setPIN:(id)arg1;
- (bool)success;
- (void)setSuccess:(bool)arg1;
- (bool)isBlocked;
- (id)init;
- (void)setMode:(int)arg1;
- (void)suspend;
- (void)dealloc;
- (void)_dismiss;
- (int)mode;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
