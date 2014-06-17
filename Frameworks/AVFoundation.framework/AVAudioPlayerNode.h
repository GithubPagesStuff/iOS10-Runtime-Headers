/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing> {
}

@property(getter=isPlaying,readonly) bool playing;
@property float volume;


- (id)playerTimeForNodeTime:(id)arg1;
- (id)nodeTimeForPlayerTime:(id)arg1;
- (void)prepareWithFrameCount:(unsigned int)arg1;
- (void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned int)arg3 atTime:(id)arg4 completionHandler:(id)arg5;
- (void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(id)arg3;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)scheduleBuffer:(id)arg1 completionHandler:(id)arg2;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 completionHandler:(id)arg3;
- (void)playAtTime:(id)arg1;
- (void)play;
- (bool)isPlaying;
- (void)didAttachToEngine:(id)arg1;
- (void)pause;
- (id)init;
- (void)stop;

@end
