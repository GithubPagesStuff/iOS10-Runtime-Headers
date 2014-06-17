/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, NSMutableArray;

@interface AVCaptureStillImageOutputInternal_FigRecorder : NSObject  {
    NSMutableArray *stillImageRequests;
    boolsquareCropEnabled;
    struct CGSize { 
        double width; 
        double height; 
    } previewImageSize;
    unsigned int imageDataFormatType;
    float jpegQuality;
    booljpegQualitySpecified;
    long long HDRCaptureMode;
    boolEV0CaptureEnabled;
    boolnoiseReductionEnabled;
    boolsuspendsVideoProcessingDuringCapture;
    NSDictionary *outputSettings;
    boolisCapturingPhoto;
    boolrawCaptureEnabled;
    boolSISSupported;
    boolSISEnabled;
    boolSISActive;
    unsigned int shutterSoundID;
}


- (id)init;
- (void)dealloc;

@end
