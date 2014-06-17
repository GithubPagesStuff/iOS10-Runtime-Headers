/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPAVItem;

@interface MPArrayQueueItem : NSObject  {
    MPAVItem *_item;
    NSString *_path;
    double _startTime;
    double _stopTime;
    NSString *_videoID;
}

@property(readonly) MPAVItem * item;
@property(copy) NSString * path;
@property double startTime;
@property double stopTime;
@property(copy) NSString * videoID;


- (void)setStopTime:(double)arg1;
- (id)initWithMPAVItem:(id)arg1;
- (id)videoID;
- (double)stopTime;
- (void)setVideoID:(id)arg1;
- (id)init;
- (void)setStartTime:(double)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (double)startTime;
- (void).cxx_destruct;
- (id)item;

@end
