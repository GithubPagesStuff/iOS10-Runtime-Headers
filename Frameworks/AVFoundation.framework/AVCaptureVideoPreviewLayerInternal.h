/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSession, NSString, AVWeakReference, CALayer, AVCaptureConnection;

@interface AVCaptureVideoPreviewLayerInternal : NSObject  {
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    CALayer *sublayer;
    struct CGSize { 
        double width; 
        double height; 
    } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    struct CGSize { 
        double width; 
        double height; 
    } previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    booldisableActions;
    AVWeakReference *weakReference;
    long long orientation;
    boolautomaticallyAdjustsMirroring;
    boolmirrored;
    boolisPresentationLayer;
    boolvisible;
    boolisPaused;
    boolchromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } captureDeviceTransform;
    double rollAdjustment;
}



@end
