/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaQuery;

@interface MPQueryPlaybackContext : MPPlaybackContext  {
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
    unsigned long long _startIndex;
}

@property(copy) NSArray * prefixMediaItems;
@property(readonly) MPMediaQuery * query;
@property unsigned long long startIndex;


- (id)initWithQuery:(id)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (unsigned long long)startIndex;
- (void)setPrefixMediaItems:(id)arg1;
- (id)prefixMediaItems;
- (id)query;
- (void).cxx_destruct;

@end
