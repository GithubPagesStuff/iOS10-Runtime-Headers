/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController, SUClientInterface;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate> {
    SUClientInterface *_clientInterface;
    SUOverlayBackgroundViewController *_overlayBackgroundViewController;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    UITabBarController *_rootViewController;
}

@property(readonly) SUClientInterface * clientInterface;
@property(retain) UITabBarController * rootViewController;
@property(readonly) SUOverlayBackgroundViewController * overlayBackgroundViewController;
@property(readonly) SUPreviewOverlayViewController * previewOverlayViewController;


- (void)showPreviewOverlayAnimated:(bool)arg1;
- (id)previewOverlayViewController;
- (void)hidePreviewOverlayAnimated:(bool)arg1;
- (void)_removePreviewOverlayViewController;
- (void)_showPreviewOverlayAnimated:(bool)arg1;
- (bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (bool)composeReviewWithViewController:(id)arg1 animated:(bool)arg2;
- (bool)enterAccountFlowWithViewController:(id)arg1 animated:(bool)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (id)_previewOverlayViewController;
- (void)dismissOverlayBackgroundViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayBackgroundViewController;
- (id)initWithClientInterface:(id)arg1;
- (id)clientInterface;
- (void)setRootViewController:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)rootViewController;

@end
