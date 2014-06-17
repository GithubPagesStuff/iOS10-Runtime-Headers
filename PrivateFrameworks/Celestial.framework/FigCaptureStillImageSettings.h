/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString, NSDictionary;

@interface FigCaptureStillImageSettings : NSObject <NSCoding> {
    long long _settingsID;
    int _payloadType;
    unsigned int _outputFormat;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    bool_outputMirroring;
    int _outputOrientation;
    bool_thumbnailEnabled;
    unsigned int _thumbnailFormat;
    unsigned int _thumbnailWidth;
    unsigned int _thumbnailHeight;
    bool_thumbnailMirroring;
    int _thumbnailOrientation;
    bool_noiseReductionEnabled;
    float _scaleFactor;
    unsigned int _shutterSound;
    int _flashMode;
    int _HDRMode;
    bool_providesEV0Image;
    int _SISMode;
    NSString *_colorPrimaries;
    NSString *_transferFunction;
    NSString *_yCbCrMatrix;
    NSDictionary *_vtCompressionProperties;
    int _bracketType;
    unsigned int _bracketImageCount;
    struct { long long x1; int x2; unsigned int x3; long long x4; } *_exposureDurations;
    float *_ISOs;
    float *_exposureTargetBiases;
    long long _stillImageStartTime;
}

@property long long settingsID;
@property int payloadType;
@property unsigned int outputFormat;
@property unsigned int outputWidth;
@property unsigned int outputHeight;
@property bool outputMirroring;
@property int outputOrientation;
@property(readonly) NSDictionary * outputPixelBufferAttributes;
@property bool thumbnailEnabled;
@property unsigned int thumbnailFormat;
@property unsigned int thumbnailWidth;
@property unsigned int thumbnailHeight;
@property bool thumbnailMirroring;
@property int thumbnailOrientation;
@property(readonly) NSDictionary * thumbnailPixelBufferAttributes;
@property bool noiseReductionEnabled;
@property float scaleFactor;
@property unsigned int shutterSound;
@property int flashMode;
@property int HDRMode;
@property bool providesEV0Image;
@property int SISMode;
@property(copy) NSString * colorPrimaries;
@property(copy) NSString * transferFunction;
@property(copy) NSString * yCbCrMatrix;
@property(copy) NSDictionary * vtCompressionProperties;
@property(readonly) int bracketType;
@property(readonly) unsigned int bracketImageCount;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; }* exposureDurations;
@property(readonly) float* ISOs;
@property(readonly) float* exposureTargetBiases;
@property long long stillImageStartTime;


- (void)setOutputFormat:(unsigned int)arg1;
- (void)setStillImageStartTime:(long long)arg1;
- (long long)stillImageStartTime;
- (int)bracketType;
- (id)vtCompressionProperties;
- (void)setYCbCrMatrix:(id)arg1;
- (id)yCbCrMatrix;
- (void)setTransferFunction:(id)arg1;
- (id)transferFunction;
- (void)setColorPrimaries:(id)arg1;
- (id)colorPrimaries;
- (int)SISMode;
- (bool)providesEV0Image;
- (unsigned int)shutterSound;
- (int)thumbnailOrientation;
- (bool)thumbnailMirroring;
- (bool)thumbnailEnabled;
- (int)payloadType;
- (void)setSettingsID:(long long)arg1;
- (id)thumbnailPixelBufferAttributes;
- (id)outputPixelBufferAttributes;
- (unsigned int)thumbnailHeight;
- (unsigned int)thumbnailWidth;
- (unsigned int)thumbnailFormat;
- (void)_teardownBracketStorage;
- (unsigned int)outputHeight;
- (unsigned int)outputWidth;
- (void)setOutputHeight:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned int)arg1;
- (long long)settingsID;
- (int)HDRMode;
- (float*)exposureTargetBiases;
- (float*)ISOs;
- (struct { long long x1; int x2; unsigned int x3; long long x4; }*)exposureDurations;
- (void)setBracketType:(int)arg1 imageCount:(unsigned int)arg2;
- (unsigned int)bracketImageCount;
- (void)setPayloadType:(int)arg1;
- (void)setVtCompressionProperties:(id)arg1;
- (void)setSISMode:(int)arg1;
- (void)setProvidesEV0Image:(bool)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setNoiseReductionEnabled:(bool)arg1;
- (void)setThumbnailOrientation:(int)arg1;
- (int)outputOrientation;
- (void)setThumbnailMirroring:(bool)arg1;
- (bool)outputMirroring;
- (void)setThumbnailHeight:(unsigned int)arg1;
- (void)setThumbnailWidth:(unsigned int)arg1;
- (void)setThumbnailFormat:(unsigned int)arg1;
- (void)setThumbnailEnabled:(bool)arg1;
- (void)setOutputOrientation:(int)arg1;
- (void)setOutputMirroring:(bool)arg1;
- (bool)noiseReductionEnabled;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)outputFormat;
- (float)scaleFactor;

@end
