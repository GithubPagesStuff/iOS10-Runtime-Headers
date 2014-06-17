/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration  {
    int _outputFormat;
    int _outputWidth;
    int _outputHeight;
    bool_videoStabilizationEnabled;
    int _videoStabilizationMethod;
    bool_mirroringEnabled;
    int _orientation;
    int _retainedBufferCount;
    int _videoStabilizationgMethod;
}

@property int outputFormat;
@property int outputWidth;
@property int outputHeight;
@property bool videoStabilizationEnabled;
@property int videoStabilizationMethod;
@property bool mirroringEnabled;
@property int orientation;
@property int retainedBufferCount;


- (void)setOutputFormat:(int)arg1;
- (int)retainedBufferCount;
- (bool)mirroringEnabled;
- (int)videoStabilizationMethod;
- (bool)videoStabilizationEnabled;
- (int)outputHeight;
- (int)outputWidth;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (void)setVideoStabilizationEnabled:(bool)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (int)orientation;
- (void)setMirroringEnabled:(bool)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)outputFormat;

@end
