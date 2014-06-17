/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AARequest, AAResponse, NSHTTPURLResponse, NSMutableData, NSURLConnection, NSObject<OS_dispatch_queue>;

@interface AARequester : NSOperation  {
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    bool_isExecuting;
    bool_isFinished;
    bool_canceled;
    bool_isCanceled;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property(getter=isExecuting) bool isExecuting;
@property(getter=isFinished) bool finished;
@property(getter=isCanceled) bool canceled;
@property(retain) NSObject<OS_dispatch_queue> * handlerQueue;


- (void)setHandlerQueue:(id)arg1;
- (id)handlerQueue;
- (void)setCanceled:(bool)arg1;
- (void)_callHandler;
- (id)initWithRequest:(id)arg1 handler:(id)arg2;
- (void)setIsExecuting:(bool)arg1;
- (bool)isCanceled;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)setFinished:(bool)arg1;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;
- (bool)isExecuting;
- (bool)isFinished;

@end
