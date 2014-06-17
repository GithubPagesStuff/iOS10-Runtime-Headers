/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSTimer, MFSMTPConnection;

@interface SMTPAccount : DeliveryAccount  {
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long long _lastTimerSetTime;
    unsigned int _supportsPipelining : 1;
    unsigned int _supportsOutboxCopy : 1;
    unsigned int _useCellDataOnly : 1;
}

+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)saslProfileName;
+ (bool)isCommonPortNumber:(unsigned int)arg1;
+ (void*)legacyKeychainProtocol;
+ (unsigned int)defaultPortNumber;
+ (id)accountTypeString;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)newDefaultInstance;

- (void)setDeliveryClass:(Class)arg1;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (bool)_isAppleServiceDeliveryHostname:(id)arg1;
- (void)setTimer;
- (void)connectionExpired:(id)arg1;
- (void)disconnect:(id)arg1;
- (void)setSupportsPipelining:(bool)arg1;
- (id)connectionSettingsForAuthentication:(bool)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(bool)arg2 directSSL:(bool)arg3;
- (bool)supportsPipelining;
- (id)errorForResponse:(id)arg1;
- (void)setSupportsOutboxCopy:(bool)arg1;
- (id)authenticatedConnection:(bool)arg1;
- (bool)supportsOutboxCopy;
- (bool)canBeFallbackAccount;
- (Class)deliveryClass;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)releaseAllForcedConnections;
- (struct __CFString { }*)connectionServiceType;
- (id)certUIService;
- (bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)preferredAuthScheme;
- (void)releaseAllConnections;
- (void)checkInConnection:(id)arg1;
- (void)dealloc;
- (id)serviceName;
- (Class)connectionClass;

@end
