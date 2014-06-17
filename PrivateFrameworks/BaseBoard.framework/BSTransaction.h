/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSHashTable, NSString, NSDate, <BSLogging>, NSSet, NSMutableDictionary, NSArray, NSMutableSet, NSMutableArray, BSTransaction, NSObject<OS_dispatch_queue>;

@interface BSTransaction : NSObject <BSWatchdogProviding> {
    BSTransaction *_parentTransaction;
    NSMutableSet *_lifeAssertions;
    bool_failed;
    bool_interrupted;
    unsigned long long _state;
    NSString *_failureReason;
    NSDate *_startTime;
    NSMutableDictionary *_milestonesToHandlers;
    NSMutableArray *_childTransactions;
    NSMutableSet *_milestones;
    NSHashTable *_observers;
    NSMutableArray *_auditHistory;
    bool_buildAuditHistory;
    <BSLogging> *_debugLogger;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(retain,readonly) NSSet * milestones;
@property(retain,readonly) NSArray * childTransactions;
@property(getter=isInterrupted,readonly) bool interrupted;
@property(getter=isInterruptable,readonly) bool interruptable;
@property(getter=isRunning,readonly) bool running;
@property(getter=isComplete,readonly) bool complete;
@property(getter=isFailed,readonly) bool failed;
@property(copy) id completionBlock;
@property(retain) BSTransaction * parentTransaction;
@property(readonly) unsigned long long state;


- (bool)isFailed;
- (void)setParentTransaction:(id)arg1;
- (id)parentTransaction;
- (id)_stringForInterruptReason:(id)arg1;
- (void)_forceInterrupt;
- (bool)_isParentTransactionComplete;
- (bool)_isRootTransactionComplete;
- (id)debugLogger;
- (id)auditHistory;
- (bool)buildAuditHistory;
- (void)setBuildAuditHistory:(bool)arg1;
- (void)_evaluateCompletion;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(id)arg2;
- (void)evaluateMilestone:(id)arg1 withEvaluator:(id)arg2;
- (bool)removeMilestone:(id)arg1;
- (void)addMilestone:(id)arg1;
- (bool)isInterrupted;
- (void)removeAllChildTransactions;
- (void)removeChildTransaction:(id)arg1;
- (void)removeAllChildTransactionsOfClass:(Class)arg1;
- (id)childTransactionsOfClass:(Class)arg1;
- (bool)hasChildTransactionsOfClass:(Class)arg1;
- (void)addChildTransaction:(id)arg1;
- (id)childTransactions;
- (id)milestones;
- (bool)shouldWatchdog:(id*)arg1;
- (double)watchdogTimeout;
- (id)_loggingProem;
- (void)_removeLifeAssertion:(id)arg1;
- (void)_addLifeAssertion:(id)arg1;
- (void)_enumerateObserversWithBlock:(id)arg1;
- (bool)_shouldComplete;
- (bool)_areChildTransactionsComplete;
- (void)removeAllMilestones;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_noteChildTransactionCompleted:(id)arg1;
- (void)_notifyObserversOfCompletion;
- (void)_didComplete;
- (void)_noteCompleted;
- (void)failWithReason:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_willRemoveChildTransaction:(id)arg1;
- (void)_didAddChildTransaction:(id)arg1;
- (void)_setParentTransaction:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (id)_stringForState:(unsigned long long)arg1;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_parentTransaction;
- (void)setDebugLogger:(id)arg1;
- (void)_noteTransactionStateInAuditHistory;
- (void)_checkAndReportIfCompleted;
- (id)_descriptionForDebugging:(bool)arg1 indentLevel:(unsigned long long)arg2;
- (void)_didSatisfyMilestone:(id)arg1;
- (bool)isWaitingForMilestone:(id)arg1;
- (bool)_removeMilestones:(id)arg1 ignoringAuditHistory:(bool)arg2;
- (bool)removeMilestones:(id)arg1;
- (bool)isRunning;
- (id)_stringForMilestones:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)_failNow;
- (void)_addAuditHistory:(id)arg1;
- (void)_interruptWithReason:(id)arg1 force:(bool)arg2;
- (void)interruptWithReason:(id)arg1;
- (bool)isInterruptable;
- (bool)_canBeInterrupted;
- (bool)_isRootTransaction;
- (void)_preventTransactionCompletionForReason:(id)arg1 andExecuteBlock:(id)arg2;
- (void)_didBegin;
- (void)begin;
- (unsigned long long)_state;
- (void)_begin;
- (void)_willBegin;
- (void)_removeChildTransaction:(id)arg1;
- (void)_addChildTransaction:(id)arg1;
- (bool)isComplete;
- (void)_enumerateChildTransactionsWithBlock:(id)arg1;
- (void)_setParentTransaction:(id)arg1 assertIfNecessary:(bool)arg2;
- (void)_debugLogWithFormat:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)queue;
- (id)init;
- (id)debugDescription;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)state;
- (void)dealloc;
- (id)description;
- (void)interrupt;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;

@end
