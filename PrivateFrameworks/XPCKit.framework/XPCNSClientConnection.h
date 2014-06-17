/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class XPCClientConnection, <XPCNSClientConnectionDelegate>;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {
    XPCClientConnection *_clientConnection;
    <XPCNSClientConnectionDelegate> *_delegate;
}

@property(readonly) <XPCNSClientConnectionDelegate> * delegate;


- (void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(id)arg3;
- (void)shutDownCompletionBlock:(id)arg1;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(id)arg4;
- (id)delegate;
- (void).cxx_destruct;

@end
