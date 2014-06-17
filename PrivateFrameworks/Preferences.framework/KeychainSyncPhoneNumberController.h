/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class KeychainSyncPhoneSettingsFragment, UIAlertView, UILabel, <KeychainSyncViewControllerDelegate>;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UIAlertView *_invalidPhoneNumberAlert;
    UILabel *_footerLabel;
}

@property <KeychainSyncViewControllerDelegate> * delegate;


- (void)controllerDone;
- (void)nextPressed;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)dealloc;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
