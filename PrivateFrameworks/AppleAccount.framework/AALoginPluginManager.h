/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSObject<OS_dispatch_queue>, <AASetupAssistantDelegateService>;

@interface AALoginPluginManager : NSObject  {
    NSArray *_plugins;
    bool_shouldStashLoginResponse;
    bool_hasStashedLoginResponse;
    NSObject<OS_dispatch_queue> *_pluginNotificationQueue;
    <AASetupAssistantDelegateService> *_idsPlugin;
}

@property bool shouldStashLoginResponse;

+ (id)sharedInstance;

- (void)unstashLoginResponse;
- (void)setShouldStashLoginResponse:(bool)arg1;
- (bool)shouldStashLoginResponse;
- (void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(id)arg4;
- (id)collectParametersForIdentityEstablishmentRequest;
- (id)collectParametersForLoginRequest;
- (void)_stashServiceTokensFromResponse:(id)arg1;
- (bool)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3;
- (void)_loadPlugins;
- (id)init;
- (void).cxx_destruct;

@end
