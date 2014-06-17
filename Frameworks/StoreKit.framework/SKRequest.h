/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class <SKRequestDelegate>, SKPaymentQueueClient;

@interface SKRequest : NSObject  {
    id _requestInternal;
}

@property <SKRequestDelegate> * delegate;
@property(copy) SKPaymentQueueClient * paymentQueueClient;


- (void)setPaymentQueueClient:(id)arg1;
- (void)_sendXPCMessage;
- (void)_startWithMessage:(id)arg1 replyBlock:(id)arg2;
- (id)paymentQueueClient;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_shutdownRequest;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)cancel;
- (void)dealloc;

@end
