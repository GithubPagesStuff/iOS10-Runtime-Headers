/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, AVMetadataItem, NSDictionary;

@interface MPTimedMetadata : NSObject  {
    AVMetadataItem *_metadataItem;
}

@property(readonly) NSString * key;
@property(readonly) NSString * keyspace;
@property(readonly) id value;
@property(readonly) double timestamp;
@property(readonly) NSDictionary * allMetadata;


- (id)allMetadata;
- (id)keyspace;
- (id)_initWithMetadataItem:(id)arg1;
- (double)timestamp;
- (id)value;
- (id)init;
- (id)key;
- (void).cxx_destruct;

@end
