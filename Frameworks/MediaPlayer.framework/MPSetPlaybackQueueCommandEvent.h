/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPRemotePlaybackQueue;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent  {
    MPRemotePlaybackQueue *_playbackQueue;
}

@property(readonly) MPRemotePlaybackQueue * playbackQueue;


- (id)playbackQueue;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (void).cxx_destruct;

@end
