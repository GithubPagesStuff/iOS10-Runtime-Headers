/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSError, MPMediaItem, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    MPMediaItem *_mediaItem;
    SSKeybagRequest *_request;
    NSError *_error;
}

@property(retain) MPMediaItem * mediaItem;
@property(retain) SSKeybagRequest * request;
@property(retain) NSError * error;


- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (void)resolveError:(id)arg1;
- (id)mediaItem;
- (id)request;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (void).cxx_destruct;

@end
