/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface SSSQLiteDatabase : NSObject  {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    bool_readOnly;
    bool_isInTransaction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _setupBlock;

    struct __CFDictionary { } *_statementCache;
    bool_takesTaskCompletionAssertions;
    struct SBSProcessAssertion { } *_taskAssertion;
    long long _taskAssertionCount;
}

@property(copy) id setupBlock;
@property bool takesTaskCompletionAssertions;

+ (void)_setTakesTaskCompletionAssertions:(bool)arg1;
+ (bool)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 didFinish:(bool*)arg3 isCorrupt:(bool*)arg4;
+ (bool)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;

- (id)setupBlock;
- (bool)takesTaskCompletionAssertions;
- (void)setTakesTaskCompletionAssertions:(bool)arg1;
- (void)endTaskCompletionAssertion;
- (void)beginTaskCompletionAssertion;
- (long long)userVersion;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { }*)arg1;
- (void)dispatchBlockSync:(id)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id)arg2;
- (long long)countChanges;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (bool)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (bool)_resetDatabaseWithPath:(id)arg1;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (int)_openFlags;
- (long long)userVersionForDatabase:(id)arg1;
- (bool)setUserVersion:(long long)arg1 forDatabase:(id)arg2;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(bool)arg2;
- (void)_resetCorruptDatabase;
- (void)_accessDatabaseUsingBlock:(id)arg1;
- (void)_endTaskCompletionAssertion;
- (int)_openDatabase;
- (void)_beginTaskCompletionAssertion;
- (bool)setUserVersion:(long long)arg1;
- (void)dispatchBlockAsync:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(bool)arg2;
- (bool)executeSQL:(id)arg1;
- (void)performTransactionWithBlock:(id)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(bool)arg2 usingBlock:(id)arg3;
- (bool)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (void)setSetupBlock:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (void)dealloc;

@end
