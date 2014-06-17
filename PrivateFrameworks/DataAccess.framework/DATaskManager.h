/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <DATask>, NSTimer, NSMutableSet, NSArray, NSMutableArray, DAAccount;

@interface DATaskManager : NSObject  {
    DAAccount *_account;
    int _state;
    <DATask> *_activeModalTask;
    <DATask> *_activeQueuedTask;
    NSMutableArray *_queuedExclusiveTasks;
    <DATask> *_activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_mQueuedTasks;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    NSTimer *_managerIdleTimer;
    NSTimer *_userInitiatedSyncTimer;
}

@property DAAccount * account;
@property(retain) <DATask> * activeModalTask;
@property(retain) <DATask> * activeQueuedTask;
@property(readonly) NSArray * queuedTasks;
@property(readonly) NSArray * allTasks;
@property(retain) NSMutableArray * queuedExclusiveTasks;
@property(retain) <DATask> * activeExclusiveTask;
@property(retain) NSMutableSet * independentTasks;
@property(retain) NSMutableSet * heldIndependentTasks;
@property(retain) NSMutableSet * modalHeldIndependentTasks;
@property(retain) NSMutableArray * mQueuedTasks;
@property(retain) <DATask> * modalHeldActiveQueuedTask;
@property(retain) NSMutableArray * queuedModalTasks;
@property int state;
@property(retain) NSTimer * managerIdleTimer;
@property(retain) NSTimer * userInitiatedSyncTimer;


- (void)setQueuedModalTasks:(id)arg1;
- (void)setMQueuedTasks:(id)arg1;
- (void)setModalHeldIndependentTasks:(id)arg1;
- (void)setHeldIndependentTasks:(id)arg1;
- (void)setIndependentTasks:(id)arg1;
- (void)setQueuedExclusiveTasks:(id)arg1;
- (bool)taskIsModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)_logSyncEnd;
- (void)cancelAllTasks;
- (void)submitQueuedTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1;
- (bool)isShutdown;
- (bool)_useFakeDescriptions;
- (id)queuedTasks;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_clearUserInitiatedSyncTimer;
- (bool)_hasTasksIndicatingARunningSync;
- (void)_useOpportunisticSocketsAgain;
- (bool)_hasTasksForcingNetworkConnection;
- (void)_scheduleStartModal:(id)arg1;
- (void)_reactivateHeldTasks;
- (void)setActiveModalTask:(id)arg1;
- (void)_startModal:(id)arg1;
- (void)_performTask:(id)arg1;
- (void)setModalHeldActiveQueuedTask:(id)arg1;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (bool)_taskInQueueForcesNetworkConnection:(id)arg1;
- (bool)_taskForcesNetworking:(id)arg1;
- (id)queuedModalTasks;
- (id)activeModalTask;
- (id)modalHeldIndependentTasks;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)setUserInitiatedSyncTimer:(id)arg1;
- (id)userInitiatedSyncTimer;
- (void)setManagerIdleTimer:(id)arg1;
- (id)managerIdleTimer;
- (void)cancelTask:(id)arg1;
- (id)allTasks;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)setActiveQueuedTask:(id)arg1;
- (id)heldIndependentTasks;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_makeStateTransition;
- (void)_schedulePerformTask:(id)arg1;
- (void)setActiveExclusiveTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(bool)arg2;
- (id)_version;
- (void)_populateVersionDescriptions;
- (id)modalHeldActiveQueuedTask;
- (id)activeQueuedTask;
- (id)mQueuedTasks;
- (id)independentTasks;
- (id)activeExclusiveTask;
- (id)queuedExclusiveTasks;
- (id)stateString;
- (id)identityPersist;
- (id)userAgent;
- (id)accountPersistentUUID;
- (bool)useSSL;
- (id)initWithAccount:(id)arg1;
- (id)deviceType;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)accountID;
- (id)server;
- (void)shutdown;
- (id)init;
- (id)password;
- (id)user;
- (long long)port;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (void).cxx_destruct;

@end
