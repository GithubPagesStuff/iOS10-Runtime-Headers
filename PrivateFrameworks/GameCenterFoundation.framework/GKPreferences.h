/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSDictionary, <GKPreferencesDelegate>, NSString;

@interface GKPreferences : NSObject  {
    bool_shouldSynchronizeOnNextRead;
    bool_webKitInspectElementEnabled;
    NSDictionary *_overrideValues;
}

@property <GKPreferencesDelegate> * preferencesDelegate;
@property(getter=isStoreDemoModeEnabled,readonly) bool storeDemoModeEnabled;
@property(getter=isAddingFriendsRestricted,readonly) bool addingFriendsRestricted;
@property(getter=isMultiplayerGamingRestricted,readonly) bool multiplayerGamingRestricted;
@property(getter=isAppInstallationRestricted,readonly) bool appInstallationRestricted;
@property(getter=isAccountModificationRestricted,readonly) bool accountModificationRestricted;
@property(getter=isGameCenterRestricted,readonly) bool gameCenterRestricted;
@property(copy) NSDictionary * overrideValues;
@property long long environment;
@property(retain) NSString * storeBagURL;
@property unsigned long long mescalSetupRetries;
@property unsigned long long loginDisableThreshold;
@property bool allowUnsignedBag;
@property bool useTestProtocols;
@property double terminationInterval;
@property double garbageCollectionInterval;
@property double minimumCacheTTL;
@property double cacheTTLOverride;
@property double operationTimeout;
@property double operationRetryDelay;
@property unsigned long long operationRetryCount;
@property double debugRequestTimeout;
@property(getter=isNotificationCenterEnabled) bool notificationCenterEnabled;
@property bool notificationBadgesEnabled;
@property bool notificationSoundsEnabled;
@property bool notificationAlertsEnabled;
@property bool verboseLogging;
@property unsigned int logFilter;
@property bool forceRelay;
@property bool preemptiveRelay;
@property long long pushEnvironment;
@property long long pipeliningSetting;
@property unsigned long long maxPlayersP2P;
@property unsigned long long maxPlayersHosted;
@property unsigned long long maxPlayersTurnBased;
@property unsigned long long maxGameStateSizeTurnBased;
@property unsigned long long exchangeDataMaximumSize;
@property unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property(readonly) bool HTTPShouldUsePipelining;
@property(readonly) unsigned long long maxDefaultPlayersP2P;
@property(readonly) unsigned long long maxDefaultPlayersHosted;
@property(readonly) unsigned long long maxDefaultPlayersTurnBased;
@property(readonly) unsigned long long maxDefaultGameStateSizeTurnBased;
@property(readonly) unsigned long long exchangeDataDefaultMaximumSize;
@property(readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property bool useInternalHeader;
@property(getter=isWebKitInspectElementEnabled) bool webKitInspectElementEnabled;
@property bool shouldAnnotateImageUsage;
@property bool shouldTrackAtlasImageUsage;
@property bool shouldUseTestIcons;
@property bool shouldLinkPlayerToICloud;
@property bool shouldLinkPlayerToTwitter;
@property bool shouldLinkPlayerToFacebook;
@property(readonly) bool shouldDisallowInvitesFromStrangers;
@property bool shouldAllowGameInvites;
@property bool shouldAllowNearbyMultiplayer;
@property bool shouldUseSandboxServer;
@property bool shouldAddPlayerInfoToAddressBook;
@property bool _shouldSynchronizeOnNextRead;

+ (id)displayNameForEnvironment:(long long)arg1;
+ (id)hostNameForEnvironment:(long long)arg1;
+ (id)sharedPreferences;

- (void)setOperationTimeout:(double)arg1;
- (double)operationTimeout;
- (bool)isInternalBuild;
- (bool)isAccountModificationRestricted;
- (bool)shouldUseTestIcons;
- (void)setNotificationCenterEnabled:(bool)arg1;
- (bool)isNotificationCenterEnabled;
- (void)setNotificationAlertsEnabled:(bool)arg1;
- (void)setNotificationSoundsEnabled:(bool)arg1;
- (void)setNotificationBadgesEnabled:(bool)arg1;
- (bool)notificationAlertsEnabled;
- (bool)notificationSoundsEnabled;
- (bool)notificationBadgesEnabled;
- (bool)shouldAnnotateImageUsage;
- (bool)isAppInstallationRestricted;
- (void)setPreferencesDelegate:(id)arg1;
- (bool)isGameCenterRestricted;
- (bool)restrictionEnabledForKey:(id)arg1;
- (id)preferencesDelegate;
- (id)overrideValues;
- (void)setWebKitInspectElementEnabled:(bool)arg1;
- (bool)isWebKitInspectElementEnabled;
- (void)setShouldAddPlayerInfoToAddressBook:(bool)arg1;
- (bool)shouldAddPlayerInfoToAddressBook;
- (void)setShouldAllowNearbyMultiplayer:(bool)arg1;
- (bool)shouldAllowNearbyMultiplayer;
- (void)setShouldUseSandboxServer:(bool)arg1;
- (bool)shouldUseSandboxServer;
- (bool)shouldDisallowInvitesFromStrangers;
- (void)setShouldAllowGameInvites:(bool)arg1;
- (bool)shouldAllowGameInvites;
- (void)setShouldLinkPlayerToFacebook:(bool)arg1;
- (bool)shouldLinkPlayerToFacebook;
- (void)setShouldLinkPlayerToTwitter:(bool)arg1;
- (bool)shouldLinkPlayerToTwitter;
- (void)setShouldLinkPlayerToICloud:(bool)arg1;
- (bool)shouldLinkPlayerToICloud;
- (void)setShouldUseTestIcons:(bool)arg1;
- (void)setShouldTrackAtlasImageUsage:(bool)arg1;
- (bool)shouldTrackAtlasImageUsage;
- (void)setShouldAnnotateImageUsage:(bool)arg1;
- (void)setCacheTTLOverride:(double)arg1;
- (double)cacheTTLOverride;
- (void)setMinimumCacheTTL:(double)arg1;
- (void)setGarbageCollectionInterval:(double)arg1;
- (double)garbageCollectionInterval;
- (void)setTerminationInterval:(double)arg1;
- (double)terminationInterval;
- (void)setUseInternalHeader:(bool)arg1;
- (void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned long long)arg1;
- (unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
- (void)setExchangeDataMaximumSize:(unsigned long long)arg1;
- (unsigned long long)exchangeDataMaximumSize;
- (void)setMaxGameStateSizeTurnBased:(unsigned long long)arg1;
- (unsigned long long)maxGameStateSizeTurnBased;
- (void)setMaxPlayersTurnBased:(unsigned long long)arg1;
- (unsigned long long)maxPlayersTurnBased;
- (void)setMaxPlayersHosted:(unsigned long long)arg1;
- (unsigned long long)maxPlayersHosted;
- (void)setMaxPlayersP2P:(unsigned long long)arg1;
- (unsigned long long)maxPlayersP2P;
- (void)setPipeliningSetting:(long long)arg1;
- (long long)pipeliningSetting;
- (void)setPushEnvironment:(long long)arg1;
- (long long)pushEnvironment;
- (void)setPreemptiveRelay:(bool)arg1;
- (bool)preemptiveRelay;
- (void)setForceRelay:(bool)arg1;
- (bool)forceRelay;
- (void)setLogFilter:(unsigned int)arg1;
- (void)setVerboseLogging:(bool)arg1;
- (bool)verboseLogging;
- (void)setDebugRequestTimeout:(double)arg1;
- (double)debugRequestTimeout;
- (void)setOperationRetryCount:(unsigned long long)arg1;
- (unsigned long long)operationRetryCount;
- (void)setOperationRetryDelay:(double)arg1;
- (double)operationRetryDelay;
- (void)setLoginDisableThreshold:(unsigned long long)arg1;
- (unsigned long long)loginDisableThreshold;
- (void)setMescalSetupRetries:(unsigned long long)arg1;
- (unsigned long long)mescalSetupRetries;
- (void)setUseTestProtocols:(bool)arg1;
- (void)setAllowUnsignedBag:(bool)arg1;
- (bool)allowUnsignedBag;
- (void)setStoreBagURL:(id)arg1;
- (id)storeBagURL;
- (void)setStringValue:(id)arg1 forKey:(struct __CFString { }*)arg2;
- (id)stringValueForKey:(struct __CFString { }*)arg1 defaultValue:(id)arg2;
- (unsigned long long)exchangeDefaultMaxInitiatedExchangesPerPlayer;
- (unsigned long long)exchangeDataDefaultMaximumSize;
- (unsigned long long)maxDefaultGameStateSizeTurnBased;
- (unsigned long long)maxDefaultPlayersTurnBased;
- (unsigned long long)maxDefaultPlayersHosted;
- (unsigned long long)maxDefaultPlayersP2P;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString { }*)arg2;
- (double)timeIntervalForKey:(struct __CFString { }*)arg1 defaultValue:(double)arg2;
- (void)setUnsignedIntegerValue:(long long)arg1 forKey:(struct __CFString { }*)arg2;
- (long long)unsignedIntegerValueForKey:(struct __CFString { }*)arg1 defaultValue:(long long)arg2;
- (void)setBooleanValue:(bool)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)booleanValueForKey:(struct __CFString { }*)arg1;
- (void)setIntegerValue:(long long)arg1 forKey:(struct __CFString { }*)arg2;
- (long long)integerValueForKey:(struct __CFString { }*)arg1 defaultValue:(long long)arg2;
- (void)setOverrideValues:(id)arg1;
- (void)_didWriteKey:(struct __CFString { }*)arg1;
- (bool)booleanValueForKey:(struct __CFString { }*)arg1 defaultValue:(bool)arg2;
- (id)preferencesValueForKey:(id)arg1;
- (void)removeOverrideForKey:(id)arg1;
- (void)set_shouldSynchronizeOnNextRead:(bool)arg1;
- (bool)_shouldSynchronizeOnNextRead;
- (id)initWithUIKitNotifications;
- (void)applicationWillEnterBackground:(id)arg1;
- (bool)isAddingFriendsRestricted;
- (bool)isMultiplayerGamingRestricted;
- (bool)isStoreDemoModeEnabled;
- (bool)useInternalHeader;
- (bool)useTestProtocols;
- (unsigned int)logFilter;
- (id)initWithoutUIKitNotifications;
- (double)minimumCacheTTL;
- (long long)environment;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)invalidate;
- (void)synchronize;
- (bool)HTTPShouldUsePipelining;
- (void)dealloc;
- (void)setEnvironment:(long long)arg1;

@end
