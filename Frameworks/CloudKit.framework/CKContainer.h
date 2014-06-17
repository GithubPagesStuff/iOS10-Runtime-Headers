/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerID, NSXPCConnection, CKRecordID, CKOperationCallbackManager, CKDatabase, NSOperationQueue, NSString, CKAccountInfo, CKOperationFlowControlManager, ACAccountStore;

@interface CKContainer : NSObject  {
    bool_connectionIsInvalid;
    bool_shouldSendClientIDs;
    int _statusReportToken;
    int _killSwitchToken;
    CKContainerID *_containerID;
    CKRecordID *_containerScopedUserID;
    CKDatabase *_privateCloudDatabase;
    CKDatabase *_publicCloudDatabase;
    NSXPCConnection *_xpcConnection;
    NSOperationQueue *_convenienceOperationQueue;
    NSOperationQueue *_throttlingOperationQueue;
    CKOperationCallbackManager *_callbackManager;
    CKOperationFlowControlManager *_flowControlManager;
    NSString *_fakeBundleID;
    CKAccountInfo *_accountInfoOverride;
    ACAccountStore *_accountStore;
}

@property(readonly) NSString * containerIdentifier;
@property(retain) CKContainerID * containerID;
@property(retain) CKRecordID * containerScopedUserID;
@property(retain) CKDatabase * privateCloudDatabase;
@property(retain) CKDatabase * publicCloudDatabase;
@property(retain) NSXPCConnection * xpcConnection;
@property bool connectionIsInvalid;
@property bool shouldSendClientIDs;
@property(retain) NSOperationQueue * convenienceOperationQueue;
@property(retain) NSOperationQueue * throttlingOperationQueue;
@property(retain) CKOperationCallbackManager * callbackManager;
@property(retain) CKOperationFlowControlManager * flowControlManager;
@property(retain) NSString * fakeBundleID;
@property(copy) CKAccountInfo * accountInfoOverride;
@property(retain) ACAccountStore * accountStore;
@property int statusReportToken;
@property int killSwitchToken;

+ (id)containerWithIdentifier:(id)arg1;
+ (id)defaultContainer;
+ (void)getAccountOverrides:(id)arg1;

- (void)removePresenceObserver:(id)arg1 inShareWithID:(id)arg2;
- (void)addPresenceObserver:(id)arg1 inShareWithID:(id)arg2;
- (void)updateCurrentUserStatus:(long long)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)fetchLikesForItem:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)setLike:(bool)arg1 forItem:(id)arg2 inShareWithID:(id)arg3 completionHandler:(id)arg4;
- (void)deleteCommentWithID:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)saveComment:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)fetchCommentsForItem:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)respondToInvitation:(id)arg1 accept:(bool)arg2 completionHandler:(id)arg3;
- (void)fetchAllReceivedInvitationsWithCompletionHandler:(id)arg1;
- (void)deleteShareWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveShare:(id)arg1 completionHandler:(id)arg2;
- (void)fetchAllSharesWithCompletionHandler:(id)arg1;
- (void)fetchShareWithID:(id)arg1 completionHandler:(id)arg2;
- (void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(id)arg2;
- (void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(id)arg2;
- (void)discoverAllContactUserInfosWithCompletionHandler:(id)arg1;
- (void)fetchUserRecordIDWithCompletionHandler:(id)arg1;
- (void)setKillSwitchToken:(int)arg1;
- (int)killSwitchToken;
- (void)setStatusReportToken:(int)arg1;
- (int)statusReportToken;
- (void)setAccountInfoOverride:(id)arg1;
- (void)setFlowControlManager:(id)arg1;
- (void)setCallbackManager:(id)arg1;
- (void)setThrottlingOperationQueue:(id)arg1;
- (void)setConvenienceOperationQueue:(id)arg1;
- (void)setPublicCloudDatabase:(id)arg1;
- (id)publicCloudDatabase;
- (void)setPrivateCloudDatabase:(id)arg1;
- (id)privateCloudDatabase;
- (void)setContainerScopedUserID:(id)arg1;
- (id)containerScopedUserID;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)throttlingOperationQueue;
- (void)setFakeBundleID:(id)arg1;
- (id)daemonWithErrorHandler:(id)arg1;
- (id)convenienceOperationQueue;
- (void)_synchronouslySendContextInformation;
- (bool)shouldSendClientIDs;
- (void)releaseFlowControlLimitationForOperationWithID:(id)arg1;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (id)flowControlManager;
- (id)callbackManager;
- (void)tossConfigWithCompletionHandler:(id)arg1;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id)arg3;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)accountStatusWithCompletionHandler:(id)arg1;
- (bool)connectionIsInvalid;
- (void)setShouldSendClientIDs:(bool)arg1;
- (void)setConnectionIsInvalid:(bool)arg1;
- (id)accountInfoOverride;
- (id)fakeBundleID;
- (id)_untrustedEntitlementForKey:(id)arg1;
- (id)containerID;
- (long long)_untrustedDatabaseEnvironment;
- (void)_setupWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (id)_checkSelfContainerIdentifier;
- (id)statusReport;
- (void)_checkSelfCloudServicesEntitlement;
- (id)_initWithContainerIdentifier:(id)arg1;
- (id)CKPropertiesDescription;
- (void)setContainerID:(id)arg1;
- (id)containerIdentifier;
- (id)accountStore;
- (void)setAccountStore:(id)arg1;
- (id)connection;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (void)addOperation:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
