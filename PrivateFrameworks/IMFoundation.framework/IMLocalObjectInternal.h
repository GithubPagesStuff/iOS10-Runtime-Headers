/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSLock, NSString, NSRecursiveLock, NSProtocolChecker, IMMessageContext, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface IMLocalObjectInternal : NSObject  {
    IMMessageContext *_currentMessageContext;
    NSRecursiveLock *_lock;
    id _target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_deathLock;
    NSString *_portName;
    NSProtocolChecker *_protocolChecker;
    NSMutableArray *_componentQueue;
    NSLock *_componentQueueLock;
    NSRecursiveLock *_componentQueueProcessingLock;
    bool_pendingComponentQueueProcessing;
    bool_busyForwarding;
}


- (void)dealloc;

@end
