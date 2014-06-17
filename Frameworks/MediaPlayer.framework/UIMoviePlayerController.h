/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMovieAccessLog, NSDate, UINavigationController, MPAVController, _UIHostedWindow, MPVideoView, <MPVideoControllerProtocol>, UIViewController, UIView, MPNowPlayingObserver, NSString, MPAVItem, MPTransitionController, MPMovieErrorLog, UIMovieView, NSArray, UIImage;

@interface UIMoviePlayerController : NSObject  {
    id _delegate;
    MPAVItem *_item;
    NSString *_moviePath;
    MPAVController *_player;
    UIImage *_posterImage;
    NSString *_youTubeVideoID;
    UIViewController *_topViewController;
    <MPVideoControllerProtocol> *_activeVideoController;
    MPVideoView *_videoView;
    MPTransitionController *_transitionController;
    long long _transitionCount;
    UINavigationController *_portraitNavigationController;
    struct __CFBag { } *_ignoredChangeTypes;
    long long _pendingInterfaceOrientation;
    MPAVItem *_pendingItem;
    MPAVItem *_pendingItemWithDifferentType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _layoutRect;
    long long _lastSetUIInterfaceOrientation;
    long long _interfaceOrientation;
    long long _interfaceOrientationFromDevice;
    NSString *_playbackErrorDescription;
    unsigned long long _autoRotationMask;
    unsigned int _displayableParts;
    unsigned int _unmodifiedDisplayableParts;
    unsigned int _desiredParts;
    unsigned long long _audioControlsStyle;
    unsigned long long _playableContentTypeOverride;
    double _timeWhenResignedActive;
    double _timeToSnapshot;
    NSArray *_closedCaptionData;
    struct { 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int wantsControlsOverlayVis : 1; 
        unsigned int wantsControlsOverlayAnim : 1; 
        unsigned int wantsControlsOverlayDisableAutohide : 1; 
        unsigned int wantsFullscreen : 1; 
        unsigned int alwaysFullscreen : 1; 
        unsigned int canAnimateControlsOverlay : 1; 
        unsigned int autoplayWhenLikelyToKeepUp : 1; 
        unsigned int disallowsVideoOut : 1; 
        unsigned int exited : 1; 
        unsigned int generatingOrientationNotifications : 1; 
        unsigned int forStreaming : 1; 
        unsigned int isExternalTransformationActive : 1; 
        unsigned int controlsVisibleBeforeExternalTransformation : 1; 
        unsigned int isActive : 1; 
        unsigned int resigningActive : 1; 
        unsigned int didResignActive : 1; 
        unsigned int uiPrepared : 1; 
        unsigned int isChangingMoviePath : 1; 
        unsigned int alwaysAllowHidingControlsOverlay : 1; 
        unsigned int schedulePortraitLoadingIndicator : 1; 
        unsigned int clientClearedMoviePath : 1; 
        unsigned int canCommitOverlayChanges : 1; 
        unsigned int usingDebugTestPath : 1; 
        unsigned int allowsWirelessPlayback : 1; 
        unsigned int useHostedWindowWhenFullscreen : 1; 
    } _mpcBitfield;
    MPNowPlayingObserver *_nowPlayingController;
}

@property unsigned long long options;
@property(copy) NSString * moviePath;
@property(readonly) UIView * view;
@property(retain) MPAVItem * item;
@property id delegate;
@property unsigned long long playableContentType;
@property(readonly) bool isPreparedForPlayback;
@property float playbackRate;
@property(readonly) unsigned long long playbackState;
@property bool stopAtEnd;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) bool muted;
@property(readonly) float volume;
@property(readonly) bool areClosedCaptionsAvailable;
@property(readonly) unsigned long long bufferingState;
@property(readonly) double playableDuration;
@property(readonly) double playableStartTime;
@property(readonly) double playableEndTime;
@property(readonly) double seekableStartTime;
@property(readonly) double seekableEndTime;
@property bool limitReadAhead;
@property(readonly) NSDate * currentDate;
@property bool useApplicationAudioSession;
@property(readonly) long long fileSize;
@property(copy) NSString * movieTitle;
@property(copy) NSString * movieSubtitle;
@property bool useHostedWindowWhenFullscreen;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property(readonly) bool videoOutActive;
@property(readonly) bool canContinuePlayingInBackground;
@property(readonly) bool canContinuePlayingWhenLocked;
@property(copy) NSString * youTubeVideoID;
@property(retain) NSString * audioSessionModeOverride;
@property(readonly) UIMovieView * movieView;
@property unsigned long long audioControlsStyle;
@property(copy) NSString * playbackErrorDescription;
@property(readonly) struct CGSize { double x1; double x2; } naturalSize;
@property bool disallowsVideoOut;
@property(retain) UIImage * posterImage;
@property(retain) UIImage * backgroundPlaceholderImage;
@property(getter=isFullscreen) bool fullscreen;
@property(readonly) UIView * fullscreenView;
@property bool closedCaptioningEnabled;
@property bool disableAlternateTextTrackRendering;
@property(readonly) UIView * alternateTextTrackView;
@property(readonly) MPMovieAccessLog * accessLog;
@property(readonly) MPMovieErrorLog * errorLog;
@property bool useLegacyControls;
@property bool alwaysAllowHidingControlsOverlay;

+ (Class)preferredWindowClass;
+ (struct CGSize { double x1; double x2; })fillSizeForMovieBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 movieNaturalSize:(struct CGSize { double x1; double x2; })arg2 interfaceOrientation:(long long)arg3 destinationTVOut:(bool)arg4;
+ (void)allInstancesResignActiveForced:(bool)arg1;
+ (void)allInstancesResignActive;

- (id)playerView;
- (bool)isFullScreen;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fullScreen:(bool)arg2;
- (id)initWithPlayerSize:(struct CGSize { double x1; double x2; })arg1 isFullScreen:(bool)arg2 options:(unsigned long long)arg3;
- (id)initWithPlayerSize:(struct CGSize { double x1; double x2; })arg1 isFullScreen:(bool)arg2;
- (id)youTubeVideoID;
- (id)playbackErrorDescription;
- (unsigned long long)audioControlsStyle;
- (id)_backgroundPlaceholderView;
- (void)videoControllerDidEndScrubbing:(id)arg1;
- (void)videoControllerDidBeginScrubbing:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoControllerFrameAfterFullscreenExit:(id)arg1;
- (void)videoControllerDidCreateFullscreenView:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1 reason:(long long)arg2;
- (void)viewControllerFailedToPlay:(id)arg1 withError:(id)arg2;
- (void)resignActiveAndEndAirPlay;
- (void)setUseLegacyControls:(bool)arg1;
- (bool)useLegacyControls;
- (void)setYouTubeVideoID:(id)arg1;
- (void)endExternalTransformation;
- (void)beginExternalTransformation;
- (void)prepareAndSetupUI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAudioControlsStyle:(unsigned long long)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 disableAutohide:(bool)arg2 animate:(bool)arg3;
- (void)setDisplayable:(bool)arg1 movieParts:(unsigned int)arg2 animated:(bool)arg3;
- (void)setDesiredMovieParts:(unsigned int)arg1 animated:(bool)arg2;
- (void)setAutoRotationMask:(unsigned long long)arg1;
- (unsigned long long)autoRotationMask;
- (bool)setInterfaceOrientation:(long long)arg1 animated:(bool)arg2 forced:(bool)arg3;
- (void)performTransition:(id)arg1;
- (void)viewController:(id)arg1 endIgnoringChangeType:(unsigned long long)arg2;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned long long)arg2;
- (bool)areClosedCaptionsAvailable;
- (double)seekableEndTime;
- (double)seekableStartTime;
- (double)playableEndTime;
- (double)playableStartTime;
- (void)setPlaybackRate:(float)arg1;
- (void)prepareForPlayback;
- (bool)isPreparedForPlayback;
- (void)setPlayableContentType:(unsigned long long)arg1;
- (bool)useHostedWindowWhenFullscreen;
- (void)setManagesStatusBar:(bool)arg1;
- (void)setDisallowsVideoOut:(bool)arg1;
- (void)setMoviePath:(id)arg1;
- (id)moviePath;
- (bool)canContinuePlayingWhenLocked;
- (bool)canContinuePlayingInBackground;
- (id)alternateTextTrackView;
- (void)unlockMoviePlaybackResources;
- (id)initWithPlayerSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_canAutoRotateToInterfaceOrientation:(long long)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_alternateTracksAvailableNotification:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_mutedDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_registerForNotifications;
- (void)_autoRotateToInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)_setTVOutEnabled:(bool)arg1;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_exitPlayer:(int)arg1;
- (int)_exitReasonForMPViewControllerExitReason:(long long)arg1;
- (void)resignActive;
- (id)fullscreenView;
- (void)_autoRotateToCurrentOrientationAnimated:(bool)arg1;
- (id)posterImage;
- (id)backgroundPlaceholderImage;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (void)_prepareAndSetupUIForClient;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setDisplayableMovieParts:(unsigned int)arg1 animated:(bool)arg2;
- (void)_beginDeviceOrientationNotifications;
- (void)_reloadForTransitionFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 animated:(bool)arg3;
- (bool)_shouldIgnoreChangeType:(unsigned long long)arg1;
- (void)_setActiveViewController:(id)arg1 forTransition:(bool)arg2;
- (id)newViewControllerForItem:(id)arg1 interfaceOrientation:(long long)arg2 reusingController:(id)arg3;
- (void)_transitionFinished:(id)arg1;
- (void)beginTransition;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)endTransition;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (bool)setOrientation:(long long)arg1 animated:(bool)arg2 forced:(bool)arg3;
- (void)setItem:(id)arg1 animated:(bool)arg2;
- (bool)_noteStoppedIgnoringChangeType:(unsigned long long)arg1;
- (void)portraitScaleButtonAction:(id)arg1;
- (void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(bool)arg3;
- (void)portraitDoneButtonAction:(id)arg1;
- (void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(bool)arg2;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)_updateEnabledParts;
- (unsigned long long)_convertedVisiblePartsMask:(unsigned int)arg1;
- (unsigned long long)_convertedPartsMask:(unsigned int)arg1;
- (void)setCanAnimateControlsOverlay:(bool)arg1;
- (void)_initializeVideoViewController:(id)arg1 orientation:(long long)arg2;
- (void)setPosterImage:(id)arg1;
- (void)_finishInitializeActiveViewController:(id)arg1 forTransition:(bool)arg2;
- (id)_portraitNavigationController:(bool)arg1;
- (void)_prepareAndSetupUI;
- (bool)stopAtEnd;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2;
- (unsigned long long)playableContentType;
- (void)_updatePlayableContentTypeOverride;
- (void)setClosedCaptioningEnabled:(bool)arg1;
- (bool)closedCaptioningEnabled;
- (void)setClosedCaptions:(id)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(bool)arg1;
- (id)_activeVideoController;
- (bool)disallowsVideoOut;
- (id)_topViewController;
- (id)movieView;
- (void)setDisableAlternateTextTrackRendering:(bool)arg1;
- (bool)disableAlternateTextTrackRendering;
- (bool)videoOutActive;
- (void)_updateForStreamingOptions;
- (void)tearDownUI;
- (void)_endDeviceOrientationNotifications;
- (id)initWithPlayerSize:(struct CGSize { double x1; double x2; })arg1 options:(unsigned long long)arg2;
- (void)debugSetup;
- (void)_alternateTextTrackDidOutputNotification:(id)arg1;
- (void)_alternateTextTrackWillChangeNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_serverDeathNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)delayedDebugSetup;
- (bool)useApplicationAudioSession;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (bool)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)viewControllerRequestsExit:(id)arg1 reason:(long long)arg2;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (bool)videoControllerShouldAutohide:(id)arg1;
- (void)setUseApplicationAudioSession:(bool)arg1;
- (unsigned int)hostedWindowContextID;
- (id)hostedWindow;
- (void)setInlinePlaybackUsesTVOut:(bool)arg1;
- (void)setUseHostedWindowWhenFullscreen:(bool)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(bool)arg1;
- (bool)alwaysAllowHidingControlsOverlay;
- (void)setAudioSessionModeOverride:(id)arg1;
- (id)movieTitle;
- (id)movieSubtitle;
- (id)audioSessionModeOverride;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (void)_ensureActive;
- (unsigned long long)bufferingState;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)setStopAtEnd:(bool)arg1;
- (double)playableDuration;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setFullscreen:(bool)arg1;
- (bool)isFullscreen;
- (unsigned long long)playbackState;
- (float)playbackRate;
- (void)_unregisterForNotifications;
- (void)setCurrentTime:(double)arg1;
- (bool)muted;
- (double)currentTime;
- (void)play;
- (float)volume;
- (void)setLimitReadAhead:(bool)arg1;
- (bool)limitReadAhead;
- (id)currentDate;
- (bool)seekToDate:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)errorLog;
- (id)accessLog;
- (id)view;
- (void)pause;
- (long long)interfaceOrientation;
- (void)setDelegate:(id)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (id)delegate;
- (long long)fileSize;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)stop;
- (double)duration;
- (void)setItem:(id)arg1;
- (id)backgroundView;

@end
