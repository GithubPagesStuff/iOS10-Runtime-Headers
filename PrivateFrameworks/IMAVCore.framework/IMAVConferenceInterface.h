/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableDictionary, AVConference, NSLock, NSMutableArray;

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {
    NSMutableArray *_avConferencesToCleanup;
    NSMutableDictionary *_avConferences;
    NSLock *_avConferencesLock;
    bool_duringInit;
    bool_pendingCleanup;
}

@property(readonly) AVConference * controller;

+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(bool)arg2 orientationChanged:(bool)arg3 aspectChanged:(bool)arg4 contentRectChanged:(bool)arg5 cameraWillSwitch:(bool)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize { double x1; double x2; })arg9 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg10;
+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(bool)arg2 orientationChanged:(bool)arg3 aspectChanged:(bool)arg4 cameraWillSwitch:(bool)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize { double x1; double x2; })arg8;
+ (bool)_forceRelayMode;
+ (bool)_useMultipleAVConference;

- (id)_imAVChatParticipantForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;
- (bool)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;
- (id)_existingConferenceForAVChatGUID:(id)arg1;
- (id)_conferenceForAVChat:(id)arg1;
- (void)_queueAVConferenceForCleanup:(id)arg1;
- (id)_existingConferenceForAVChat:(id)arg1;
- (void)_cleanupAVInterface;
- (id)_avChatForConference:(id)arg1;
- (id)_avChatForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2;
- (bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg2 localPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg3;
- (id)_controller;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (bool)supportsRelay;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (void*)localVideoLayer;
- (void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2;
- (void*)remoteVideoBackLayerForChat:(id)arg1;
- (void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2;
- (void*)remoteVideoLayerForChat:(id)arg1;
- (bool)supportsLayers;
- (id)getNatIPFromICEData:(id)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (bool)stopPreview;
- (bool)startPreviewWithError:(id*)arg1;
- (unsigned long long)capabilitiesOfCPU;
- (unsigned long long)capabilitiesOfNetwork;
- (void)avChat:(id)arg1 setSendingVideo:(bool)arg2;
- (bool)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(bool)arg2;
- (bool)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(bool)arg2;
- (bool)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(bool)arg2;
- (bool)isMuteForAVChat:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(bool)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (id)natTypeForAVChat:(id)arg1;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)initAVInterface;
- (bool)isAVInterfaceReady;
- (int)endConferenceForAVChat:(id)arg1;
- (void)chatStateUpdated;
- (void)_avChatDealloc:(id)arg1;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2;
- (unsigned long long)capabilities;
- (void)conference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(bool)arg3;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)serverDiedForConference:(id)arg1;
- (void)conference:(id)arg1 remoteVideoPaused:(bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;
- (void)conference:(id)arg1 didStartSession:(bool)arg2 withUserInfo:(id)arg3;
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(bool)arg3;
- (id)init;
- (void)dealloc;
- (id)controller;

@end
