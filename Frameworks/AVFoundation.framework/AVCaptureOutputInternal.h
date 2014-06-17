/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSession, NSString, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface AVCaptureOutputInternal : NSObject  {
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    AVCaptureSession *session;
    NSString *sinkID;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } metadataTransform;
    double rollAdjustment;
    boolphysicallyMirrorsVideo;
}


- (id)init;
- (void)dealloc;

@end
