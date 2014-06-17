/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSSystemPolicyForApp : NSObject  {
    unsigned long long _policyOptions;
    bool_forcePolicyOptions;
    NSString *_bundleIdentifier;
}

@property(copy) NSString * bundleIdentifier;

+ (bool)isServiceRestricted:(id)arg1;

- (id)dataUsageWorkspaceInfo;
- (struct __CFBundle { }*)copyTCCBundleForService:(struct __CFString { }*)arg1;
- (id)privacyAccessForSpecifier:(id)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)_privacyAccessForService:(struct __CFString { }*)arg1;
- (id)locationServicesSpecifier;
- (bool)_isLocationServicesRestricted;
- (bool)_isBackgroundAppRefreshRestricted;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (bool)_supportsBackgroundAppRefresh;
- (bool)_isCellularDataRestricted;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (bool)isCellularBundleID:(id)arg1;
- (id)_sectionInfo;
- (id)cellularSpecifier;
- (id)backgroundAppRefreshSpecifier;
- (id)privacySpecifierForService:(struct __CFString { }*)arg1;
- (id)privacySpecifier;
- (id)notificationSpecifier;
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(bool)arg2;
- (id)specifiers;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;

@end
