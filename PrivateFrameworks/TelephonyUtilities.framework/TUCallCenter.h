/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class TUCall, TUCallModelState, NSMutableArray, TUCallCenterCallsCache;

@interface TUCallCenter : NSObject  {
    TUCall *_incomingCall;
    NSMutableArray *_displayedCalls;
    NSMutableArray *_conferenceParticipantCalls;
    TUCallCenterCallsCache *_callsCache;
    TUCallModelState *_callModelState;
}

@property(retain) TUCall * incomingCall;
@property(retain) NSMutableArray * displayedCalls;
@property(retain) NSMutableArray * conferenceParticipantCalls;
@property(retain) TUCallCenterCallsCache * callsCache;
@property(retain) TUCallModelState * callModelState;

+ (bool)emergencyCallBackModeIsActive;
+ (bool)isInCallServiceProcess;
+ (bool)isIMAVChatHostProcess;
+ (bool)shouldDisableAppFeatures;
+ (id)_sharedInstanceWithDaemonDelegate:(id)arg1;
+ (void*)sharedAddressBook;
+ (id)sharedInstance;

- (void)setCallModelState:(id)arg1;
- (void)endEmergencyCallBackMode;
- (void)filteredInvitationToIMAVChat:(id)arg1;
- (void)createdOutgoingIMAVChat:(id)arg1;
- (void)invitedToIMAVChat:(id)arg1;
- (void)handleChatGeneratedConferenceInviteDictionary:(id)arg1;
- (void)handleCallerIDChanged:(id)arg1;
- (void)handleCallSubTypeChanged:(id)arg1;
- (void)handleCallAudioUpdatedForCall:(id)arg1 userInfo:(id)arg2;
- (bool)canTakeCallsPrivate;
- (void)disconnectAllCalls;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (void)resumeCall:(id)arg1;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)answerAndEnableHoldMusicForCall:(id)arg1;
- (id)dialVoicemail;
- (id)dialEmergency:(id)arg1;
- (id)dial:(id)arg1 service:(int)arg2;
- (unsigned long long)callCountOnDefaultPairedDevice;
- (id)callGroupsOnDefaultPairedDevice;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)currentCallGroups;
- (void)handleFilteredCall:(id)arg1;
- (id)_videoCallUserInfoForUserInfo:(id)arg1;
- (void)_handleCallEnded:(id)arg1 withReason:(unsigned int)arg2 error:(int)arg3;
- (void)handleCallFailed:(id)arg1;
- (void)handleCallerUnavailableForCall:(id)arg1 reason:(unsigned int)arg2 error:(int)arg3;
- (id)_callerUnavailableUserInfoForCall:(id)arg1 reason:(unsigned int)arg2 error:(int)arg3;
- (void)handleFilteredCall:(id)arg1 userInfo:(id)arg2;
- (id)_callStatusUserInfoForUserInfo:(id)arg1;
- (void)handleCallStatusChanged:(id)arg1 userInfo:(id)arg2;
- (void)answerCallWithHoldMusic:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(bool)arg3;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2;
- (id)_dialTelephonyCall:(id)arg1 callID:(int)arg2 sourceIdentifier:(id)arg3;
- (id)_dialFaceTimeCall:(id)arg1 isVideo:(bool)arg2 callID:(int)arg3 sourceIdentifier:(id)arg4;
- (bool)canInitiateCalls;
- (id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3;
- (id)sourceAccount:(bool)arg1;
- (id)callsOnDefaultPairedDevice;
- (id)_allCalls;
- (id)_callGroupsFromCalls:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (void)_callStatusChangedInternal:(id)arg1;
- (void)handleChatVideoStalledDidChange:(id)arg1;
- (void)handleChatVideoQualityDidChange:(id)arg1;
- (void)handleChatRemotePauseDidChange:(id)arg1;
- (void)handleChatRemoteScreenDidChange:(id)arg1;
- (void)handleChatRemoteVideoDidChange:(id)arg1;
- (void)handleChatFirstRemoteFrameArrived:(id)arg1;
- (void)handleChatFirstPreviewFrameArrived:(id)arg1;
- (void)daemonConnected:(id)arg1;
- (void)handleChatInvitationSent:(id)arg1;
- (void)handleChatConferenceMetadataUpdated:(id)arg1;
- (void)handleChatStateChanged:(id)arg1;
- (id)initWithDaemonDelegate:(id)arg1;
- (id)videoCallWithStatus:(int)arg1;
- (id)currentVideoCall;
- (id)allNonFinalVideoCalls;
- (id)currentVideoCalls;
- (id)activeVideoCall;
- (id)incomingVideoCall;
- (void)setCallsCache:(id)arg1;
- (id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4;
- (id)callModelState;
- (void)handleCallStatusOnDefaultPairedDeviceChanged:(id)arg1;
- (void)handleCallConnected:(id)arg1;
- (id)callWithCallUUID:(id)arg1;
- (void)swapCalls;
- (id)proxyCallWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(bool)arg5 conferenceIdentifier:(id)arg6;
- (void)requestHandoffForAllCalls;
- (void)handleCallStatusChanged:(id)arg1;
- (void)_handleCallControlFailure:(id)arg1;
- (void)forceUpdateOfCallList;
- (void)forceDisconnectOfCall:(id)arg1;
- (void)forceCallOutOfConference:(id)arg1;
- (void)forceCallIntoConference:(id)arg1;
- (void)forceCallActive:(id)arg1;
- (id)displayedCallsNotIncludingIncomingCall;
- (id)displayedCall;
- (bool)canMergeCalls;
- (bool)justAnIncomingCallExists;
- (bool)inOutgoingCall;
- (bool)inCall;
- (id)_callControlFailureUserInfoForUserInfo:(id)arg1;
- (void)_resetState;
- (void)_updateCallCount:(id)arg1 force:(bool)arg2;
- (id)conferenceCall;
- (void)_removeActiveCall:(id)arg1;
- (void)_addActiveCall:(id)arg1;
- (void)_updateActiveCalls:(id)arg1;
- (id)_currentCalls:(bool)arg1;
- (void)resumeCallChangeNotifications;
- (void)_setConferenceParticipants:(id)arg1;
- (void)_setActiveCalls:(id)arg1;
- (void)suspendCallChangeNotifications;
- (void)_setIncomingCall:(id)arg1;
- (void)_postConferenceParticipantsChanged;
- (void)_postDisplayedCallsChanged;
- (id)conferenceParticipantCalls;
- (id)displayedCalls;
- (void)setIncomingCall:(id)arg1;
- (void)setConferenceParticipantCalls:(id)arg1;
- (void)setDisplayedCalls:(id)arg1;
- (void)answerCall:(id)arg1;
- (void)disconnectCall:(id)arg1;
- (id)callsCache;
- (unsigned long long)currentVideoCallCount;
- (int)currentCallCount;
- (bool)isAmbiguous;
- (bool)isSendToVoicemailAllowed;
- (bool)isHoldAndAnswerAllowed;
- (bool)isEndAndAnswerAllowed;
- (bool)isHardPauseAvailable;
- (bool)isTakingCallsPrivateAllowed;
- (int)ambiguityState;
- (bool)isAddCallAllowed;
- (bool)isHoldAllowed;
- (bool)isMergeable;
- (bool)isSwappable;
- (void)handleCallModelStateChanged:(id)arg1;
- (id)incomingCall;
- (id)displayedCallFromCalls:(id)arg1;
- (id)currentCalls;
- (void)dealloc;

@end
