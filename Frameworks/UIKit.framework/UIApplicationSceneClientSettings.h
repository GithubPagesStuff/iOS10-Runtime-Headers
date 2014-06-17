/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings> {
}

@property(readonly) long long statusBarStyle;
@property(readonly) bool statusBarHidden;
@property(readonly) long long defaultStatusBarStyle;
@property(readonly) bool defaultStatusBarHidden;
@property(copy,readonly) NSString * defaultPNGName;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) long long compatibilityMode;
@property(readonly) bool idleTimerDisabled;
@property(readonly) bool orientationEnabled;
@property(readonly) unsigned long long proximityDetectionModes;
@property(readonly) long long controlCenterRevealMode;
@property(readonly) long long notificationCenterRevealMode;


- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)notificationCenterRevealMode;
- (long long)controlCenterRevealMode;
- (bool)orientationEnabled;
- (bool)idleTimerDisabled;
- (double)defaultPNGExpirationTime;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (id)defaultPNGName;
- (long long)compatibilityMode;
- (unsigned long long)proximityDetectionModes;
- (long long)statusBarStyle;
- (bool)statusBarHidden;
- (bool)isUISubclass;

@end
