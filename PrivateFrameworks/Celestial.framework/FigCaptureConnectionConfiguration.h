/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <NSCoding, NSCopying> {
    NSString *_connectionID;
    unsigned int _mediaType;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    bool_enabled;
}

@property(copy) NSString * connectionID;
@property unsigned int mediaType;
@property(retain) FigCaptureSourceConfiguration * sourceConfiguration;
@property(retain) FigCaptureSinkConfiguration * sinkConfiguration;
@property bool enabled;

+ (void)initialize;

- (id)sourceConfiguration;
- (bool)enabled;
- (id)connectionID;
- (void)setSinkConfiguration:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setConnectionID:(id)arg1;
- (id)sinkConfiguration;
- (void)setEnabled:(bool)arg1;
- (unsigned int)mediaType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
