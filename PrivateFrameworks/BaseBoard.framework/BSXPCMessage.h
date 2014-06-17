/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface BSXPCMessage : NSObject  {
    NSObject<OS_xpc_object> *_message;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _replyHandler;

    NSObject<OS_dispatch_queue> *_replyQueue;
}

+ (id)messageWithPacker:(id)arg1 replyHandler:(id)arg2 replyQueue:(id)arg3;
+ (id)message:(long long)arg1 withPacker:(id)arg2;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(id)arg3;
+ (const char *)messageTypeKey;
+ (id)message:(long long)arg1 withPacker:(id)arg2 replyHandler:(id)arg3 replyQueue:(id)arg4;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(id)arg3 replyHandler:(id)arg4 replyQueue:(id)arg5;
+ (void)sendMessageWithPacker:(id)arg1 toConnection:(id)arg2 replyHandler:(id)arg3 replyQueue:(id)arg4;
+ (void)sendMessageWithPacker:(id)arg1 toConnection:(id)arg2;

- (void)forcefullyInvokeReplyHandler:(id)arg1;
- (id)initWithMessage:(id)arg1 replyHandler:(id)arg2 replyQueue:(id)arg3;
- (id)initWithMessage:(long long)arg1 packer:(id)arg2 replyHandler:(id)arg3 replyQueue:(id)arg4;
- (void)sendToConnection:(id)arg1;
- (id)initWithMessagePacker:(id)arg1 replyHandler:(id)arg2 replyQueue:(id)arg3;
- (void)dealloc;

@end
