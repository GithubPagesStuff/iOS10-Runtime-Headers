/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UINavigationController, ACAccount, AAUIAccountRepairRemoteUI, NSMutableArray, AAUIGenericTermsRemoteUI, NSString, PSSpecifier, AAUICredentialRecoveryController, ACAccountType, ABMonogrammer, RUILoader, AAUIAccountCreationRemoteUI, UIImageView;

@interface AAUIBaseSignInViewController : ACUIViewController <AAUIAccountCreationDelegate, AAUICredentialRecoveryPresentationDelegate, AAUIGenericTermsRemoteUIDelegate, AAUIAccountRepairRemoteUIDelegate> {
    ACAccount *_account;
    ACAccountType *_appleAccountType;
    ACAccount *_appleAccount;
    bool_isPasswordDirty;
    bool_shouldHideBackButton;
    NSString *_recommendedUsername;
    bool_shouldHideCreateNewAccount;
    ABMonogrammer *_monogrammer;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createNewAccountButtonSpecifier;
    NSString *_initialTitle;
    AAUIAccountCreationRemoteUI *_remoteAccountCreationUI;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    AAUIAccountRepairRemoteUI *_accountRepairRemoteUI;
    AAUICredentialRecoveryController *_credentialRecoveryUIController;
    id _textFieldTextDidChangeObserver;
    RUILoader *_remoteUILoader;
    NSMutableArray *_remoteUIModels;
    UINavigationController *_modalRemoteViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _identityConsolidationCompletion;

    UIImageView *_silhouetteView;
    bool_isPresentedModally;
}

@property(setter=setPresentedModally:) bool isPresentedModally;
@property(readonly) ACAccount * account;


- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)returnPressedAtEnd;
- (id)specifiers;
- (void)setPresentedModally:(bool)arg1;
- (bool)isPresentedModally;
- (void)_presentWrongAccountStatusAlert;
- (id)descriptionPlaceholder;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (void)_accountRepairDidFail;
- (void)_showGenericTermsUIforAccount:(id)arg1;
- (id)_learnMoreURLForErrorCode:(id)arg1;
- (void)_handleAccountPromotionCompletionForAccount:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_saveAccountWithAllDataclassesEnabledIfPossibleWithCompletion:(id)arg1;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentNoMailServiceWhileInMailAlert;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2;
- (void)_attemptHSALoginForAccount:(id)arg1;
- (void)_updateAccountInformation:(id)arg1;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_promoteExistingAccountToPrimary:(id)arg1;
- (void)_handleAccountRegistrationCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_accountDescriptionFromEmailAddress:(id)arg1;
- (void)_didFinishAccountVerificationWithResult:(bool)arg1 error:(id)arg2;
- (void)_saveAccountAndComplete;
- (void)didCompleteSignIn;
- (bool)_saveAccountWithAllDataclassesEnabledIfPossible;
- (void)_handleAccountSetupCompletionWithAppleID:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_openWebBasedCredentialRecoveryFlow;
- (void)_openiForgotLink:(id)arg1;
- (void)_createNewAccountButtonTapped:(id)arg1;
- (bool)_runningInMail;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_usernameForSpecifier:(id)arg1;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (id)_specifiersForCreateNewAccount;
- (id)_specifiersForSignInButton;
- (id)_specifiersForLoginForm;
- (id)_specifierForGroupWithiForgotLink;
- (void)didCancelSignIn;
- (void)_verifyAccount;
- (void)_presentInvalidUsernameAlert;
- (id)_appleAccountType;
- (id)_displayedAccountType;
- (void)_updateDoneButton;
- (bool)_shouldShowCancelDone;
- (void)_loadAccountRepairRemoteUIWithAccount:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;
- (void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
- (void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(bool)arg3;
- (void)accountCreationWasCanceled;
- (void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
- (void)accountCreationDidFailWithError:(id)arg1;
- (void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (id)_monogrammer;
- (void)doneButtonTapped:(id)arg1;
- (void)handleURL:(id)arg1;
- (id)account;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

@end
