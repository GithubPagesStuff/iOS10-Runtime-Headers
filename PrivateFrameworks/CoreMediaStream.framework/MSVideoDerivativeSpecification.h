/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject  {
    bool_useCellular;
    bool_powerRequired;
    double _bitRate;
    NSString *_videoType;
    unsigned long long _mediaAssetType;
}

@property(readonly) bool useCellular;
@property(readonly) bool powerRequired;
@property(readonly) double bitRate;
@property(readonly) NSString * videoType;
@property(readonly) unsigned long long mediaAssetType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (id)videoType;
- (bool)powerRequired;
- (bool)useCellular;
- (unsigned long long)mediaAssetType;
- (double)bitRate;
- (id)initWithDictionary:(id)arg1;

@end
