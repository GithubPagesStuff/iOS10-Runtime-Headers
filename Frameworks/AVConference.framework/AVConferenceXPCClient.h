/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSObject<OS_xpc_object>, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AVConferenceXPCClient : NSObject  {
    NSObject<OS_xpc_object> *connection;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
}

@property(readonly) NSObject<OS_xpc_object> * connection;
@property(readonly) NSMutableDictionary * registeredBlocks;

+ (id)AVConferenceXPCClientSingleton;

- (id)registeredBlocks;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 timeout:(unsigned int)arg3;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 fileDescriptor:(int)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (id)createNSDictionaryFromNSError:(id)arg1;
- (void)registerBlockForService:(char *)arg1 block:(id)arg2 queue:(id)arg3;
- (id)createTimeoutDictionary;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 fileDescriptor:(int)arg3 timeout:(unsigned int)arg4;
- (id)createXPCDictionaryFromNSDictionary:(id)arg1;
- (void)createConnectionToServer;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 fileDescriptor:(int)arg3 reply:(id)arg4 queue:(id)arg5;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id)arg3 queue:(id)arg4;
- (id)createNSErrorFromNSDictionary:(id)arg1;
- (id)createNSDictionaryFromXPCDictionary:(id)arg1;
- (void)closeConnectionToServer;
- (id)createServerDiedDictionary;
- (void)deregisterFromService:(char *)arg1;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;
- (void)registerBlockForService:(char *)arg1 block:(id)arg2;
- (id)connection;
- (id)init;
- (void)dealloc;

@end
