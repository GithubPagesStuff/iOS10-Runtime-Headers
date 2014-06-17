/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFLock, NSString, NSURL, NSMutableDictionary, DeliveryAccount, ACAccount, ACAccountStore;

@interface CastleIMAPAccount : IMAPAccount  {
    MFLock *_appleAccountLock;
    ACAccount *_appleAccount;
    DeliveryAccount *_deliveryAccount;
    unsigned int _readyForPushRegistration : 1;
    NSMutableDictionary *_aliasChanges;
    NSString *_updatedDefaultEmail;
}

@property(retain,readonly) NSString * personID;
@property(retain,readonly) NSString * authToken;
@property(readonly) ACAccount * appleAccount;
@property(readonly) ACAccountStore * accountStore;
@property(readonly) NSString * deliveryHostname;
@property(readonly) unsigned int deliveryPortNumber;
@property(readonly) bool deliveryUsesSSL;
@property(readonly) NSURL * aliasLookupURL;

+ (id)newChildAccountWithParentAccount:(id)arg1 error:(id*)arg2;
+ (id)emailAddressHostPart;
+ (bool)usernameIsEmailAddress;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (bool)isPredefinedAccountType;
+ (id)accountTypeString;
+ (id)accountTypeIdentifier;
+ (id)displayedAccountTypeString;

- (void)_accountsChanged:(id)arg1;
- (id)_aliasesFromOldData:(id)arg1;
- (id)passwordFromKeychain;
- (void)_removePasswordInKeychain;
- (void)setPasswordInKeychain:(id)arg1;
- (id)_prepareAliasData;
- (id)_defaultEmailAddressFromData:(id)arg1;
- (id)_emailsFromData:(id)arg1;
- (id)_aliasesFromData:(id)arg1;
- (id)_headerStringFromDate:(id)arg1;
- (id)_aliasUserAgent;
- (id)_aliasAuthorizationHeader;
- (id)aliasLookupURL;
- (bool)_updateEmailAddressAndAliases;
- (void)setLocallyEnabled:(bool)arg1 forEmailAddress:(id)arg2;
- (void)setLocalDefaultEmailAddress:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (bool)deliveryUsesSSL;
- (unsigned int)deliveryPortNumber;
- (id)deliveryHostname;
- (id)_fromEmailAddressesIncludingDisabled:(bool)arg1;
- (id)_mailPropertyFromAppleAccountForKey:(id)arg1;
- (void)_resetAppleAccount;
- (id)fromEmailAddresses;
- (bool)canAttemptPushRegistration;
- (id)iconString;
- (void)handleOverQuotaResponse:(id)arg1;
- (void)handleAlertResponse:(id)arg1;
- (bool)shouldRegisterForPush;
- (bool)canReceiveNewMailNotifications;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (void)startListeningForNotifications;
- (void)pushUpdateForAliasData;
- (void)setEnabled:(bool)arg1 forEmailAddress:(id)arg2;
- (id)statisticsKind;
- (id)firstEmailAddress;
- (bool)updateEmailAliases;
- (id)fromEmailAddressesIncludingDisabled;
- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (id)emailAddressesAndAliasesList;
- (id)uniqueIdForPersistentConnection;
- (bool)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (bool)shouldDisplayHostnameInErrorMessages;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (unsigned long long)credentialAccessibility;
- (bool)allowsTrustPrompt;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setUsesSSL:(bool)arg1;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (bool)usesSSL;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (bool)supportsArchiving;
- (id)displayUsername;
- (id)appleAccount;
- (id)personID;
- (id)emailAddresses;
- (id)authToken;
- (void)setDisplayName:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)accountStore;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (void)dealloc;
- (id)displayName;

@end
