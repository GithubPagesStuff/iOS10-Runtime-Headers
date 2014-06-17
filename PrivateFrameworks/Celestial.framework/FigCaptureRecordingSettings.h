/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSCoding> {
    long long _settingsID;
    NSURL *_outputURL;
    NSString *_outputFileType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _maxDuration;
    long long _maxFileSize;
    long long _minFreeDiskSpaceLimit;
}

@property long long settingsID;
@property(copy) NSURL * outputURL;
@property(copy) NSString * outputFileType;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property long long maxFileSize;
@property long long minFreeDiskSpaceLimit;


- (id)outputURL;
- (long long)minFreeDiskSpaceLimit;
- (long long)maxFileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (id)outputFileType;
- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (void)setMaxFileSize:(long long)arg1;
- (void)setMaxDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setSettingsID:(long long)arg1;
- (long long)settingsID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
