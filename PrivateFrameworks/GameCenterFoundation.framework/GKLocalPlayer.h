/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView, NSString, NSDate, NSInvocation, NSDictionary, GKEventEmitter<GKLocalPlayerListener>, UIViewController, GKInvite, UIViewController<GKAuthenticateViewController>;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener> {
    bool_authenticated;
    bool_authenticating;
    bool_authenticatingCurrentAccount;
    bool_didAuthenticate;
    bool_validatingAccount;
    bool_enteringForeground;
    bool_appUnrecognized;
    bool_newToGameCenter;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authenticateHandler;

    GKInvite *_acceptedInvite;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authenticationCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _validateAccountCompletionHandler;

    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSString *_lastUsernameAttempted;
    NSString *_lastAccountNameAuthenticated;
    NSInvocation *_currentFriendRequestInvocation;
    unsigned long long _failedLogins;
    NSDictionary *_authenticateAlertDictionary;
    long long _environment;
    NSString *_lastAuthPlayerID;
    NSDate *_lastAuthDate;
    GKEventEmitter<GKLocalPlayerListener> *_eventEmitter;
    UIViewController *_rootViewController;
    UIViewController *_activeViewController;
    UIViewController<GKAuthenticateViewController> *_signInViewController;
}

@property(getter=isAuthenticated) bool authenticated;
@property(getter=isUnderage,readonly) bool underage;
@property(copy) id authenticateHandler;
@property(getter=isAuthenticating) bool authenticating;
@property(retain) NSString * accountName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) GKInvite * acceptedInvite;
@property(readonly) bool canChangePhoto;
@property(retain) NSString * lastUsernameAttempted;
@property(retain) NSString * lastAccountNameAuthenticated;
@property(getter=isPurpleBuddyAccount) bool purpleBuddyAccount;
@property(getter=isAppUnrecognized) bool appUnrecognized;
@property(readonly) long long environment;
@property(readonly) bool allowNearbyMultiplayer;
@property(getter=isNewToGameCenter) bool newToGameCenter;
@property(readonly) NSString * facebookUserID;
@property(readonly) NSString * iCloudUserID;
@property(getter=isFindable,readonly) bool findable;
@property(retain) GKEventEmitter<GKLocalPlayerListener> * eventEmitter;
@property(copy) id authenticationCompletionHandler;
@property(copy) id validateAccountCompletionHandler;
@property(retain) UIAlertView * loginAlertView;
@property UIAlertView * currentAlert;
@property(retain) NSInvocation * currentFriendRequestInvocation;
@property(retain) NSString * lastAuthPlayerID;
@property(retain) NSDate * lastAuthDate;
@property bool didAuthenticate;
@property bool validatingAccount;
@property bool enteringForeground;
@property bool authenticatingCurrentAccount;
@property unsigned long long failedLogins;
@property(retain) UIViewController * rootViewController;
@property(retain) UIViewController * activeViewController;
@property(retain) UIViewController<GKAuthenticateViewController> * signInViewController;
@property(retain) NSDictionary * authenticateAlertDictionary;

+ (id)localPlayer;
+ (bool)supportsSecureCoding;
+ (id)accountName;
+ (bool)hasAuthenticatedAccount;

- (id)currentFriendRequestInvocation;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (id)loginAlertView;
- (void)setAuthenticateHandler:(id)arg1;
- (bool)didAuthenticate;
- (void)setLastAuthDate:(id)arg1;
- (void)setupMultiplayerNotifications;
- (void)setNewToGameCenter:(bool)arg1;
- (void)setAuthenticateAlertDictionary:(id)arg1;
- (void)setEnteringForeground:(bool)arg1;
- (void)setValidateAccountCompletionHandler:(id)arg1;
- (id)validateAccountCompletionHandler;
- (bool)validatingAccount;
- (void)setLoginAlertView:(id)arg1;
- (void)setCurrentAlert:(id)arg1;
- (id)currentAlert;
- (void)setSignInViewController:(id)arg1;
- (id)activeViewController;
- (void)setActiveViewController:(id)arg1;
- (id)signInViewController;
- (void)setLastAuthPlayerID:(id)arg1;
- (void)setValidatingAccount:(bool)arg1;
- (void)setAuthenticating:(bool)arg1;
- (void)setDidAuthenticate:(bool)arg1;
- (bool)enteringForeground;
- (id)authenticateHandler;
- (bool)isNewToGameCenter;
- (id)lastAuthPlayerID;
- (id)lastAuthDate;
- (id)acceptedInvite;
- (void)unregisterAllListeners;
- (void)setAppUnrecognized:(bool)arg1;
- (bool)isAppUnrecognized;
- (id)authenticateAlertDictionary;
- (void)setFailedLogins:(unsigned long long)arg1;
- (unsigned long long)failedLogins;
- (void)setLastAccountNameAuthenticated:(id)arg1;
- (id)lastAccountNameAuthenticated;
- (void)setAuthenticatingCurrentAccount:(bool)arg1;
- (bool)authenticatingCurrentAccount;
- (void)setLastUsernameAttempted:(id)arg1;
- (id)lastUsernameAttempted;
- (void)setAuthenticationCompletionHandler:(id)arg1;
- (id)authenticationCompletionHandler;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id)arg1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id)arg2;
- (bool)hasEmailAddress:(id)arg1;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id)arg8;
- (void)loadFriendRequests:(id)arg1;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)showSettings;
- (bool)canChangePhoto;
- (void)loadGameRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)setAcceptedInvite:(id)arg1;
- (void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(id)arg2;
- (void)declineFriendRequestsFromPlayers:(id)arg1 handler:(id)arg2;
- (void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;
- (void)_addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (id)friends;
- (bool)isAuthenticating;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)setupForCloudSavedGames;
- (void)setEventEmitter:(id)arg1;
- (void)reset:(id)arg1;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id)arg1;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id)arg3;
- (void)fetchSavedGamesWithCompletionHandler:(id)arg1;
- (id)eventEmitter;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (long long)environment;
- (void)setAuthenticated:(bool)arg1;
- (bool)isAuthenticated;
- (void)setStatus:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)rootViewController;
- (void)setPhoto:(id)arg1 withCompletionHandler:(id)arg2;
- (void)deletePhoto;
- (void)signOutWithCompletionHandler:(id)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)presentError:(id)arg1 forMode:(long long)arg2;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (void)showViewController:(id)arg1 wrapInNavController:(bool)arg2;
- (void)removeActiveViewControllerAnimated:(bool)arg1 completionHandler:(id)arg2;
- (void)showAuthenticateViewController;
- (void)showAuthorizeViewController;
- (void)handleUnderlyingErrorForAuthenticateError:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)completeAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (void)validateAccountWithCompletionHandler:(id)arg1;
- (void)startLegacyAuthenticationWithCompletionHandler:(id)arg1;
- (void)startAuthentication;
- (void)cancelAuthentication;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (bool)alertUserInStoreDemoModeEnabled;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)showSignInAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showCreateAccountRestrictedAlert;
- (void)showLoginFailedAlert;
- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showAlertForTag:(unsigned long long)arg1;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
