/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLConnectionInternal, NSURLRequest;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal *_internal;
}

@property(copy,readonly) NSURLRequest * originalRequest;
@property(copy,readonly) NSURLRequest * currentRequest;

+ (bool)canHandleRequest:(id)arg1;
+ (void)_setSweeperInterval:(unsigned long long)arg1;
+ (unsigned long long)_sweeperInterval;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
+ (bool)_collectsTimingData;
+ (void)_setCollectsTimingData:(bool)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;
+ (void)_resourceLoadLoop:(id)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (id)_geo_sendSynchronousRequest:(id)arg1 connectionProperties:(id)arg2 returningResponse:(id*)arg3 error:(id*)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 connectionProperties:(id)arg3 completionHandler:(id)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 connectionProperties:(id)arg2 completionHandler:(id)arg3;
+ (id)_geo_sendAttributedSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;
+ (void)_geo_sendAttributedAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)_cfInternal;
- (id)_dlInternal;
- (id)connectionProperties;
- (void)download;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;
- (void)setDefersCallbacks:(bool)arg1;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)_timingData;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(bool)arg3 maxContentLength:(long long)arg4 startImmediately:(bool)arg5 connectionProperties:(id)arg6;
- (void)start;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (id)currentRequest;
- (id)originalRequest;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (bool)defersCallbacks;
- (id)_geo_initWithAttributedRequest:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;

@end
