/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_queue>;

@interface IMRemoteObjectBroadcaster : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultBroadcaster;

- (void)flushProxy:(id)arg1;
- (bool)isSendQueueEmpty;
- (id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;
- (id)_queue;
- (id)init;
- (void)dealloc;

@end
