/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSConditionLock;

@interface MFInvocationQueue : NSObject  {
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _numThreads;
    unsigned long long _maxThreads;
    int _threadPriorityTrigger;
    double _threadRecycleTimeout;
    struct __CFSet { } *_lowPriorityThreads;
    bool_isForeground;
}

@property unsigned long long maxThreadCount;
@property int threadPriorityTrigger;
@property double threadRecycleTimeout;
@property(readonly) unsigned long long invocationCount;
@property(readonly) unsigned long long threadCount;

+ (void)flushAllInvocationQueues;
+ (unsigned long long)totalInvocationCount;
+ (id)sharedInvocationQueue;

- (id)copyDiagnosticInformation;
- (double)threadRecycleTimeout;
- (void)setThreadPriorityTrigger:(int)arg1;
- (int)threadPriorityTrigger;
- (unsigned long long)threadCount;
- (void)applicationWillResume;
- (unsigned long long)invocationCount;
- (unsigned long long)maxThreadCount;
- (void)_adjustThreadPrioritiesIsForeground:(bool)arg1;
- (void)_processInvocation:(id)arg1;
- (void)_drainQueue:(id)arg1;
- (id)initWithMaxThreadCount:(unsigned long long)arg1;
- (void)didCancel:(id)arg1;
- (void)setThreadRecycleTimeout:(double)arg1;
- (void)addInvocation:(id)arg1;
- (void)setMaxThreadCount:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (void)removeAllItems;
- (void)applicationWillSuspend;

@end
