/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation  {
    SUMediaPlayerItem *_mediaItem;
}

@property(copy,readonly) SUMediaPlayerItem * mediaPlayerItem;


- (bool)_runHEADRequest:(id*)arg1;
- (id)mediaPlayerItem;
- (id)initWithMediaPlayerItem:(id)arg1;
- (void)run;
- (id)init;
- (void)dealloc;

@end
