/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSObject<OS_dispatch_queue>, MSASServerSideModel, MSTimerGate;

@interface MSASGroupedQueue : NSObject  {
    bool_isShuttingDown;
    bool_isAssertingBusyAssertion;
    int _maxGroupedCallbackEventBatchCount;
    MSASServerSideModel *_model;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
    MSTimerGate *_idleTimerGate;
    MSTimerGate *_stalenessTimerGate;
}

@property MSASServerSideModel * model;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property int maxGroupedCallbackEventBatchCount;
@property double maxGroupedCallbackEventIdleInterval;
@property double maxGroupedCallbackEventStaleness;
@property(readonly) bool isAssertingBusyAssertion;
@property bool isShuttingDown;
@property(retain) MSTimerGate * idleTimerGate;
@property(retain) MSTimerGate * stalenessTimerGate;


- (bool)isAssertingBusyAssertion;
- (void)workQueueRestartIdleTimer;
- (void)workQueueRestartStalenessTimer;
- (void)setStalenessTimerGate:(id)arg1;
- (id)stalenessTimerGate;
- (void)setIdleTimerGate:(id)arg1;
- (id)idleTimerGate;
- (void)workQueueClearStalenessTimer;
- (void)workQueueClearIdleTimer;
- (void)memberQueueSetIsAssertingBusyAssertion:(bool)arg1;
- (bool)memberQueueIsAssertingBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)assertBusyAssertion;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueFlushQueue;
- (void)setIsShuttingDown:(bool)arg1;
- (void)flushQueueCompletionBlock:(id)arg1;
- (bool)hasEnqueuedItems;
- (void)shutDownFlush:(bool)arg1 completionBlock:(id)arg2;
- (void)setMaxGroupedCallbackEventStaleness:(double)arg1;
- (double)maxGroupedCallbackEventStaleness;
- (void)setMaxGroupedCallbackEventIdleInterval:(double)arg1;
- (double)maxGroupedCallbackEventIdleInterval;
- (void)setMaxGroupedCallbackEventBatchCount:(int)arg1;
- (int)maxGroupedCallbackEventBatchCount;
- (bool)isShuttingDown;
- (id)model;
- (id)init;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;
- (void)setModel:(id)arg1;

@end
