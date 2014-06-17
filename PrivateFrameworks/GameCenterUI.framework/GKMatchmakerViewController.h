/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString, GKHostedMatchmakerViewController, GKRemoteMatchmakerViewController, GKMatch, NSMutableArray, <GKMatchmakerViewControllerDelegate>, GKInvite, GKMatchRequest;

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate> {
    bool_hosted;
    <GKMatchmakerViewControllerDelegate> *_matchmakerDelegateWeak;
    GKMatchRequest *_matchRequest;
    GKHostedMatchmakerViewController *_hostedViewController;
    GKRemoteMatchmakerViewController *_remoteViewController;
    GKInvite *_acceptedInvite;
    GKMatch *_match;
    NSMutableArray *_hostedPlayers;
}

@property <GKMatchmakerViewControllerDelegate> * matchmakerDelegate;
@property(retain,readonly) GKMatchRequest * matchRequest;
@property(getter=isHosted) bool hosted;
@property(copy) NSString * defaultInvitationMessage;
@property(retain) GKHostedMatchmakerViewController * hostedViewController;
@property(retain) GKRemoteMatchmakerViewController * remoteViewController;
@property(retain) GKInvite * acceptedInvite;
@property(retain) GKMatch * match;
@property(retain) NSMutableArray * hostedPlayers;

+ (bool)_preventsAppearanceProxyCustomization;

- (void)setHosted:(bool)arg1;
- (void)setHostedPlayers:(id)arg1;
- (id)hostedPlayers;
- (id)acceptedInvite;
- (void)setBrowsingForNearbyPlayers:(bool)arg1;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)startMatchingWithRequest:(id)arg1;
- (void)setHostedPlayerReady:(id)arg1;
- (id)defaultInvitationMessage;
- (void)addPlayersToMatch:(id)arg1;
- (void)setHostedPlayer:(id)arg1 didConnect:(bool)arg2;
- (id)initWithInvite:(id)arg1;
- (void)setMatchmakerDelegate:(id)arg1;
- (void)invitedPlayer:(id)arg1 responded:(long long)arg2;
- (void)finishWithPlayers;
- (void)finishWithMatch;
- (id)matchmakerDelegate;
- (void)setHostedPlayer:(id)arg1 connected:(bool)arg2;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)createMatchForAcceptedInvite;
- (void)inviterCancelledNotification:(id)arg1;
- (void)playersToInvite:(id)arg1;
- (void)setupNotifications;
- (id)matchRequest;
- (void)setHostedViewController:(id)arg1;
- (id)hostedViewController;
- (id)initWithMatchRequest:(id)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)_setupChildViewController;
- (void)setMatch:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;
- (void)setAcceptedInvite:(id)arg1;
- (bool)isHosted;
- (id)match;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)sendData:(id)arg1;

@end
