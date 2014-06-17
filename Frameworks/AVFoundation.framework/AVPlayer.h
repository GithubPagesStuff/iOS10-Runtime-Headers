/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVPlayerInternal, NSError;

@interface AVPlayer : NSObject  {
    AVPlayerInternal *_player;
}

@property(setter=_setDisplaysUsedForPlayback:,copy) NSArray * _displaysUsedForPlayback;
@property(readonly) long long _externalProtectionStatus;
@property(getter=isAudioPlaybackEnabledAtAllRates,readonly) bool audioPlaybackEnabledAtAllRates;
@property float minRateForAudioPlayback;
@property float maxRateForAudioPlayback;
@property bool allowsPixelBufferPoolSharing;
@property bool disallowsAMRAudio;
@property bool appliesMediaSelectionCriteriaAutomatically;
@property(copy) NSString * audioOutputDeviceUniqueID;
@property bool allowsOutOfBandTextTrackRendering;
@property(readonly) long long status;
@property(readonly) NSError * error;

+ (bool)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (bool)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (bool)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (bool)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (bool)automaticallyNotifiesObserversOfVibrationPattern;
+ (bool)automaticallyNotifiesObserversOfUserVolume;
+ (id)keyPathsForValuesAffectingRate;
+ (bool)automaticallyNotifiesObserversOfRate;
+ (bool)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)initialize;

- (long long)status;
- (void)setMuted:(bool)arg1;
- (id)currentItem;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)play;
- (void)setRate:(float)arg1;
- (float)rate;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setAllowsOutOfBandTextTrackRendering:(bool)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(bool)arg1;
- (void)setAutoSwitchStreamVariants:(bool)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (id)audioOutputDeviceUniqueID;
- (id)_audioOutputDeviceUniqueID;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (bool)appliesMediaSelectionCriteriaAutomatically;
- (bool)_appliesMediaSelectionCriteriaAutomatically;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(bool)arg1;
- (bool)disallowsHardwareAcceleratedVideoDecoder;
- (void)setDisallowsAMRAudio:(bool)arg1;
- (bool)disallowsAMRAudio;
- (bool)_disallowsHardwareAcceleratedVideoDecoder;
- (bool)_disallowsAMRAudio;
- (void)setAllowsPixelBufferPoolSharing:(bool)arg1;
- (bool)allowsPixelBufferPoolSharing;
- (bool)_allowsPixelBufferPoolSharing;
- (bool)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setCALayerDestinationIsTVOut:(bool)arg1;
- (void)_setClientPriority:(long long)arg1;
- (long long)_clientPriority;
- (void)_setClientName:(id)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(bool)arg1;
- (id)_clientName;
- (bool)_shouldDetachVideoLayersFromFigPlayer;
- (bool)_hasAssociatedOnscreenAVPlayerLayer;
- (bool)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (bool)_carplayIsActive;
- (bool)_hasAssociatedAVPlayerLayerInPIPMode;
- (bool)_CALayerDestinationIsTVOut;
- (float)maxRateForAudioPlayback;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (float)minRateForAudioPlayback;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (bool)isAudioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (id)_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;
- (bool)_outputObscuredDueToInsufficientExternalProtection;
- (long long)_externalProtectionStatus;
- (long long)_extractVerifiedFPExternalProtectionStatus:(id)arg1;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (bool)_shouldLogPerformanceData;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)_avPlayerLayers;
- (id)_pixelBufferAttributeMediator;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(bool)arg1;
- (bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (bool)isAirPlayVideoActive;
- (void)setAllowsAirPlayVideo:(bool)arg1;
- (bool)allowsAirPlayVideo;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (bool)isClosedCaptionDisplayEnabled;
- (long long)actionAtItemEnd;
- (void)_setUserVolume:(float)arg1;
- (float)_userVolume;
- (void)prerollOperationDidComplete:(bool)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(id)arg2;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)_removeAllItems;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_currentItemStatusIsReadyToPlay;
- (bool)_isChangingValueForKey:(id)arg1;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1;
- (id)_copyPerformanceDataForCurrentItem;
- (id)_fpNotificationNames;
- (id)_videoLayers;
- (id)_subtitleLayers;
- (id)_closedCaptionLayers;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachClosedCaptionLayersFromFigPlayer;
- (void)_detachVideoLayersFromFigPlayer;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (bool)_usesAudioOnlyModeForExternalPlayback;
- (bool)_airPlayVideoActive;
- (bool)_externalPlaybackActive;
- (bool)_usesExternalPlaybackWhileExternalScreenIsActive;
- (bool)_allowsExternalPlayback;
- (bool)_isClosedCaptionDisplayEnabled;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(bool)arg2;
- (long long)_actionAtItemEnd;
- (long long)_defaultActionAtItemEnd;
- (bool)_isMuted;
- (float)_playerVolume;
- (id)playerAVAudioSession;
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)arg1;
- (int)_createPrerollID;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToDate:(id)arg1 completionHandler:(id)arg2;
- (void)seekToDate:(id)arg1;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (float)_rate;
- (void)_setCurrentItem:(id)arg1;
- (void)_createPlayer:(long long)arg1 item:(id)arg2 preparationRequested:(bool)arg3 completionHandler:(id)arg4;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (bool)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachVideoLayersToFigPlayer;
- (id)_propertyStorage;
- (void)_addFPListeners;
- (bool)_attachItem:(id)arg1 andPerformOperation:(long long)arg2 withObject:(id)arg3;
- (bool)_removeItem:(id)arg1;
- (void)_coordinateWithRemovalOfItem:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (struct OpaqueFigPlayer { }*)_copyFigPlayer;
- (id)_items;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_removeFPListeners;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (bool)_iapdExtendedModeIsActive;
- (void)_willEnterForeground:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (void)setActionAtItemEnd:(long long)arg1;
- (bool)_insertItem:(id)arg1 afterItem:(id)arg2;
- (id)initWithPlayerItem:(id)arg1;
- (bool)allowsOutOfBandTextTrackRendering;
- (bool)preparesItemsForPlaybackAsynchronously;
- (bool)autoSwitchStreamVariants;
- (id)externalPlaybackVideoGravity;
- (id)expectedAssetTypes;
- (void)_addLayer:(id)arg1;
- (id)_stateDispatchQueue;
- (void)_conformVideoLayer:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_noteDisplaySize:(struct CGSize { double x1; double x2; })arg1 forPlayerLayer:(id)arg2;
- (id)_cachedValueForKey:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (id)_weakReference;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)allowsExternalPlayback;
- (bool)isExternalPlaybackActive;
- (void)setClosedCaptionDisplayEnabled:(bool)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(bool)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (void)removeTimeObserver:(id)arg1;
- (long long)externalPlaybackType;
- (void)_removeAllLayers;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)pause;
- (bool)isMuted;
- (id)init;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)error;
- (void)finalize;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
