/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, UIImage, <MPVolumeControllerDelegate>, MPAVController;

@interface MPVolumeController : NSObject  {
    MPAVController *_player;
    NSString *_volumeAudioCategory;
    bool_volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    bool_debugVolumeWarning;
    bool_volumeWarningEnabled;
    float _volumeValue;
    float _EUVolumeLimit;
    <MPVolumeControllerDelegate> *_delegate;
    long long _volumeWarningState;
}

@property <MPVolumeControllerDelegate> * delegate;
@property(readonly) float volumeValue;
@property bool muted;
@property(retain) MPAVController * player;
@property(copy) NSString * volumeAudioCategory;
@property(readonly) bool volumeWarningEnabled;
@property(readonly) long long volumeWarningState;
@property(readonly) float EUVolumeLimit;


- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_forcefullySetVolumeValue:(float)arg1;
- (void)_volumeDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (bool)_isPlayerInValidState;
- (void)_internalSetVolumeValue:(float)arg1;
- (float)volumeValue;
- (void)_setVolumeWarningState:(long long)arg1;
- (float)_volumeFromAVController;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (float)EUVolumeLimit;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)volumeAudioCategory;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)updateVolumeValue;
- (void)updateVolumeWarningState;
- (long long)volumeWarningState;
- (bool)volumeWarningEnabled;
- (float)setVolumeValue:(float)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)setMuted:(bool)arg1;
- (bool)muted;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;

@end
