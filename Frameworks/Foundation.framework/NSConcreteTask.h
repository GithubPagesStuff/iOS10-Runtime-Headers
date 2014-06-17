/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, NSMutableDictionary, NSPort, NSObject<OS_dispatch_semaphore>;

@interface NSConcreteTask : NSTask  {
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_dictionary;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    NSObject<OS_dispatch_source> *_dsrc;
    NSPort *_tmpPort;
    long long _suspendCount;
    int _pid;
    int _platformExitInfo;
    bool_hasExeced;
    bool_isRunning;
    bool_hasPostedDeathNotification;
    bool_terminationRun;
    BOOL _qos;
}


- (id)environment;
- (int)processIdentifier;
- (id)arguments;
- (bool)resume;
- (bool)isRunning;
- (id)init;
- (bool)suspend;
- (long long)suspendCount;
- (void)finalize;
- (void)dealloc;
- (void)setStartsNewProcessGroup:(bool)arg1;
- (int)_procid;
- (void)terminateTask;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (id)preferredArchitectures;
- (void)setPreferredArchitectures:(id)arg1;
- (void)waitUntilExit;
- (long long)_platformExitInformation;
- (void)_withTaskDictionary:(id)arg1;
- (void)_setTerminationHandler:(id)arg1;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)launchPath;
- (void)terminate;
- (void)interrupt;
- (void)setLaunchPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)launch;
- (long long)terminationReason;
- (int)terminationStatus;
- (id)terminationHandler;
- (void)launchWithDictionary:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (long long)qualityOfService;
- (id)currentDirectoryPath;
- (void)setTerminationHandler:(id)arg1;

@end
