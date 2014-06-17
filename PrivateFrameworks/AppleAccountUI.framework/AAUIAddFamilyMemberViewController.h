/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class ACAccountStore, NSOperationQueue, AAGrandSlamSigner, ACAccount, RemoteUIController, <AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate>, NSMutableURLRequest;

@interface AAUIAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, AAUIPickInviteeDelegate> {
    ACAccount *_appleAccount;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    NSOperationQueue *_networkingQueue;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
}

@property <AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate> * delegate;


- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)shouldAutorotate;

@end
