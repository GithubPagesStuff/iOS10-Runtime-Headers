/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController  {
    id _internal;
    bool_statusBarWasHidden;
}

@property(readonly) MPMoviePlayerController * moviePlayer;


- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;
- (id)moviePlayer;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)_canReloadView;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (bool)canBecomeFirstResponder;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)shouldAutorotate;
- (bool)prefersStatusBarHidden;

@end
