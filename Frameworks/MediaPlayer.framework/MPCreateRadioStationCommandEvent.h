/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent  {
    bool_requestingPlaybackInitialization;
    NSURL *_stationURL;
}

@property(readonly) NSURL * stationURL;
@property(getter=isRequestingPlaybackInitialization,readonly) bool requestingPlaybackInitialization;


- (bool)isRequestingPlaybackInitialization;
- (id)stationURL;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (void).cxx_destruct;

@end
