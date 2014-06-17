/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError;

@interface GKHostedAuthenticateViewController : GKHostedViewController <GKAuthenticateViewController> {
    bool_disablesSignIn;
    bool_rotationLocked;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSError *_error;
    long long _mode;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dismissCompletionHandler;

}

@property(getter=isRotationLocked) bool rotationLocked;
@property(retain) NSError * error;
@property long long mode;
@property(copy) id dismissCompletionHandler;
@property(copy) id completionHandler;
@property bool disablesSignIn;

+ (bool)_preventsAppearanceProxyCustomization;

- (bool)isRotationLocked;
- (void)setRotationLocked:(bool)arg1;
- (void)setDisablesSignIn:(bool)arg1;
- (bool)disablesSignIn;
- (id)initWithMode:(long long)arg1;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)setMode:(long long)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (void)setDismissCompletionHandler:(id)arg1;
- (id)dismissCompletionHandler;
- (void)setCompletionHandler:(id)arg1;
- (long long)mode;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (id)completionHandler;
- (bool)shouldAutorotate;

@end
