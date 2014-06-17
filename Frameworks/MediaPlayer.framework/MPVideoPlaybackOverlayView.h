/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPKnockoutButton, <MPVideoOverlayDelegate>, UILabel, MPAVController, _UIBackdropView, UIStatusBar, UIButton, UIView, NSLayoutConstraint, MPDetailSlider, UIPopoverController, MPAVItem, UIActivityIndicatorView, <MPVideoControllerProtocol>, UINavigationBar, NSArray, MPAudioAndSubtitlesController, MPVolumeSlider;

@interface MPVideoPlaybackOverlayView : UIView <MPAudioAndSubtitlesControllerDelegate, UIPopoverControllerDelegate, MPVideoOverlay, MPDetailSliderDelegate> {
    MPDetailSlider *_scrubber;
    _UIBackdropView *_bottomBarBackdropView;
    MPKnockoutButton *_playPauseButton;
    MPKnockoutButton *_fullscreenButton;
    _UIBackdropView *_topBarBackdropView;
    UIStatusBar *_statusBar;
    UIButton *_doneButton;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
    UIButton *_scaleButton;
    UILabel *_scrubInstructions1;
    UILabel *_scrubInstructions2;
    MPVolumeSlider *_volumeSlider;
    MPKnockoutButton *_leftButton;
    MPKnockoutButton *_rightButton;
    UIButton *_audioAndSubtitlesButton;
    UIView *_topBarLayoutGuide;
    UIView *_topBarItemsGuide;
    UIView *_bottomBarTopLayoutGuide;
    UIView *_bottomBarBottomLayoutGuide;
    UIView *_bottomBarItemsGuide;
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;
    UIPopoverController *_audioAndSubtitlesPopover;
    bool_ticking;
    bool_ignoreTouchUp;
    bool_shouldResumePlayback;
    int _seekDirection;
    NSLayoutConstraint *_topBarBottomConstraint;
    NSLayoutConstraint *_bottomBarHeightConstraint;
    NSLayoutConstraint *_topItemsTrailingConstraint;
    NSLayoutConstraint *_bottomItemsRightConstraint;
    NSLayoutConstraint *_volumeSliderRightConstraint;
    NSLayoutConstraint *_volumeSliderWidthConstraint;
    NSArray *_topItemsConstraints;
    NSArray *_bottomItemsConstraints;
    NSArray *_topItems;
    NSArray *_bottomItems;
    boolallowsWirelessPlayback;
    boolnavigationBarHidden;
    bool_automaticallyHandleTransportControls;
    bool_allowsExitFromFullscreen;
    <MPVideoOverlayDelegate> *_delegate;
    MPAVController *_player;
    MPAVItem *_item;
    unsigned long long disabledParts;
    unsigned long long desiredParts;
    unsigned long long visibleParts;
    <MPVideoControllerProtocol> *videoViewController;
    long long _style;
}

@property long long style;
@property bool automaticallyHandleTransportControls;
@property bool allowsDetailScrubbing;
@property bool allowsExitFromFullscreen;
@property(readonly) double bottomBarHeight;
@property <MPVideoControllerProtocol> * videoViewController;
@property bool allowsWirelessPlayback;
@property bool navigationBarHidden;
@property(retain) MPAVController * player;
@property(retain,readonly) UINavigationBar * navigationBar;
@property <MPVideoOverlayDelegate> * delegate;
@property(retain) MPAVItem * item;
@property unsigned long long desiredParts;
@property unsigned long long visibleParts;
@property unsigned long long disabledParts;


- (bool)allowsExitFromFullscreen;
- (bool)automaticallyHandleTransportControls;
- (double)bottomBarHeight;
- (void)setAllowsExitFromFullscreen:(bool)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (id)videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(bool)arg3;
- (void)_updateLoadingIndicator;
- (void)_registerForItemNotifications:(id)arg1;
- (void)_startSeeking;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_notifyDelegateOfUserEvent:(long long)arg1;
- (void)_notifyDelegateOfUserEventCancel:(long long)arg1;
- (void)audioAndSubtitleControllerRequestsDismissal:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_notifyDelegateOfUserEventBegin:(long long)arg1;
- (void)_showScrubInstructions;
- (void)_notifyDelegateOfUserEventEnd:(long long)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)_imageNamed:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_observeControl:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 animateAlongside:(id)arg3 completionBlock:(id)arg4;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (bool)updateTimeBasedValues;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_configureTransportControls;
- (void)_updateVolumeSlider;
- (void)_itemChanged:(id)arg1;
- (void)_configureAuxiliaryButtons:(bool)arg1;
- (void)_updateScaleButton;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (bool)allowsDetailScrubbing;
- (unsigned long long)disabledParts;
- (void)_itemReadyToPlay:(id)arg1;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setAutomaticallyHandleTransportControls:(bool)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (unsigned long long)desiredParts;
- (unsigned long long)visibleParts;
- (bool)navigationBarHidden;
- (bool)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)style;
- (void)removeFromSuperview;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)updateConstraints;
- (id)navigationBar;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
