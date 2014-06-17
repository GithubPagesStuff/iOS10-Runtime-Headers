/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVConferenceXPCClient, VideoAttributes, NSObject<AVConferencePreviewClientDelegate>, CALayer, NSObject<OS_dispatch_queue>;

@interface AVConferencePreview : NSObject  {
    boolclientWantsPreview;
    unsigned int connectionAttempts;
    AVConferenceXPCClient *connection;
    CALayer *caLayerFront;
    CALayer *caLayerBack;
    VideoAttributes *localVideoAttributes;
    struct CGSize { 
        double width; 
        double height; 
    } localScreenPortraitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    } localScreenLandscapeAspectRatio;
    NSObject<AVConferencePreviewClientDelegate> *delegate;
    NSObject<OS_dispatch_queue> *avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewNotificationQueue;
}

@property(retain) NSObject<AVConferencePreviewClientDelegate> * delegate;

+ (id)AVConferencePreviewSingleton;

- (bool)isPreviewRunning;
- (void)setLocalVideoLayer:(id)arg1 front:(bool)arg2;
- (id)localVideoLayer:(bool)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (unsigned int)localCamera;
- (void)startPreview;
- (void)stopPreview;
- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)setLocalCamera:(unsigned int)arg1;
- (void)pausePreview;
- (void)connectLayer:(id)arg1 withSlot:(unsigned int)arg2;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(id)arg2;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStopPreview;
- (void)didPausePreview;
- (void)didStartPreview;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
