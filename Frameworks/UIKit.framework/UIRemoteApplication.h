/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIRemoteApplication : NSObject  {
    NSString *_machServiceName;
    unsigned int _port;
}


- (id)initWithMachServiceName:(id)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)didTakeScreenshot;
- (void)wakeTimerFired;
- (void)backgroundContinuationEnabledDidChange:(bool)arg1;
- (void)localNotificationDidSnooze:(id)arg1;
- (void)localNotificationMessageDelivered:(id)arg1;
- (void)didRegisterUserNotificationSettings:(id)arg1;
- (void)remoteNotificationMessageDelivered;
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)arg1;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1;
- (void)simpleRemoteActionDidOccur:(long long)arg1;
- (void)statusBarWillChangeOrientation:(long long)arg1 duration:(float)arg2;
- (void)showTopMostMiniAlertWithSynchronizationPort:(unsigned int)arg1;
- (void)hideTopMostMiniAlert;
- (void)updatePort;

@end
