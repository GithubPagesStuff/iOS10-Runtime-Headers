/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPerformanceLogger : MSASModelBase  {
}

+ (void)nukeCompletionBlock:(id)arg1;
+ (id)sharedLogger;

- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)_logSqliteErrorLine:(int)arg1;
- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(id)arg3;
- (void)startOperation:(id)arg1 itemGUID:(id)arg2;
- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;
- (bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)init;

@end
