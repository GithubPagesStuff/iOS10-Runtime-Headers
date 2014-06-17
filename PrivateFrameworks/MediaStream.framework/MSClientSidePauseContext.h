/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSString, NSXPCConnection, MSTimerGate, NSObject<OS_dispatch_queue>;

@interface MSClientSidePauseContext : NSObject  {
    NSString *_UUID;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSXPCConnection *_server;
    MSTimerGate *_gate;
}

@property(retain) NSObject<OS_dispatch_queue> * timerQueue;
@property(retain) NSXPCConnection * server;
@property(retain) MSTimerGate * gate;


- (void)setServer:(id)arg1;
- (void)setTimerQueue:(id)arg1;
- (void)timerQueuePing;
- (void)timerQueueTimerFired;
- (id)initWithServer:(id)arg1;
- (void)setGate:(id)arg1;
- (id)gate;
- (id)timerQueue;
- (void)resume;
- (id)server;
- (void).cxx_destruct;

@end
