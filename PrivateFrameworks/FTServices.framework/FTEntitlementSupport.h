/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary;

@interface FTEntitlementSupport : NSObject  {
}

@property(readonly) bool faceTimeNonWiFiEntitled;
@property(retain,readonly) NSDictionary * registrationState;

+ (id)sharedInstance;

- (bool)_disconnectCTServerConnection;
- (bool)_reconnectCTServerConnectionIfNecessary;
- (void)_cleanupMachInfo;
- (void)_unregisterForCTEntitlementNotifications;
- (bool)_registerForCTEntitlementNotifications;
- (void)_handleEntitlementNotification:(struct __CFDictionary { }*)arg1;
- (void)_registrationStateChanged;
- (id)_rawEntitlementValue;
- (bool)_setupCTServerConnection;
- (bool)faceTimeNonWiFiEntitled;
- (id)registrationState;
- (id)init;

@end
