/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol  {
    const struct CFURLProtocolInstanceCallbacks { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); void *x14; } *_callbacks;
    struct CFURLProtocolClient { 
        long long version; 
        void *client; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*wasRedirected)(); 
        int (*cacheResponseIsValid)(); 
        int (*didReceiveResponse)(); 
        int (*didLoadData)(); 
        int (*didFinishLoading)(); 
        int (*didFail)(); 
        int (*didReceiveAuthenticationChallenge)(); 
    } _cfurlClient;
    const void *_info;
}

+ (bool)canInitWithRequest:(id)arg1;
+ (const struct CFURLProtocolImplementation { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*)pimpl;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (struct CFURLProtocolClient { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); }*)cfurlClient;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (id).cxx_construct;

@end
