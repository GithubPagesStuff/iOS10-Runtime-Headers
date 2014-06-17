/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <NSCoding, NSCopying> {
    NSString *_sinkID;
    int _sinkType;
    bool_videoDataDiscardsLateVideoFrames;
}

@property(copy) NSString * sinkID;
@property int sinkType;
@property bool videoDataDiscardsLateVideoFrames;

+ (int)sinkTypeForString:(id)arg1;
+ (id)stringForSinkType:(int)arg1;
+ (void)initialize;

- (bool)videoDataDiscardsLateVideoFrames;
- (int)sinkType;
- (id)sinkID;
- (void)setVideoDataDiscardsLateVideoFrames:(bool)arg1;
- (void)setSinkType:(int)arg1;
- (void)setSinkID:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
