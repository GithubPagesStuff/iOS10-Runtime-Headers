/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_xpc_object>, PLXPCTransaction, NSError;

@interface PLDaemonJob : NSObject  {
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
    NSObject<OS_xpc_object> *_connection;
}

@property(readonly) bool clientWantsReply;
@property NSObject<OS_xpc_object> * xpcReply;
@property(retain,readonly) NSObject<OS_xpc_object> * connection;
@property(readonly) bool replyIsError;
@property(retain,readonly) NSError * replyError;
@property NSObject<OS_xpc_object> * xpcReply;
@property(retain,readonly) NSObject<OS_xpc_object> * connection;

+ (void)runDaemonSideWithXPCEvent:(id)arg1 connection:(id)arg2;

- (id)replyError;
- (bool)replyIsError;
- (bool)clientWantsReply;
- (void)sendToAssetsdWithReply;
- (void)sendToAssetsd;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)handleReply;
- (void)setXpcReply:(id)arg1;
- (id)xpcReply;
- (void)archiveXPCToDisk:(id)arg1;
- (bool)shouldArchiveXPCToDisk;
- (void)encodeToXPCObject:(id)arg1;
- (id)connection;
- (void)run;
- (void)dealloc;

@end
