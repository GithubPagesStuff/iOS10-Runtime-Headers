/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaPlayerItem, UIView, NSMutableArray, SUClientInterface;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate> {
    UIView *_backgroundContainerView;
    SUClientInterface *_clientInterface;
    SUMediaPlayerItem *_mediaItem;
    NSMutableArray *_operations;
    long long _playerState;
}

@property(copy,readonly) SUMediaPlayerItem * mediaPlayerItem;
@property(retain) SUClientInterface * clientInterface;

+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;
+ (bool)_URLIsITunesU:(id)arg1;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;
+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;

- (id)mediaPlayerItem;
- (id)_backgroundContainerView;
- (void)_enqueueOperation:(id)arg1;
- (void)_showBackgroundImage:(id)arg1;
- (void)_dequeueOperation:(id)arg1;
- (void)_setIsActivePlayer:(bool)arg1;
- (void)_loadBackgroundImage;
- (void)_prepareMediaItem;
- (void)_insertBackgroundContainerView;
- (void)_bookmarkCurrentTime;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)_mediaTypesAvailableNotification:(id)arg1;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)copyScriptViewController;
- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;

@end
