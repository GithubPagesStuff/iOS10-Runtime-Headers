/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKCustomProtocol : NSURLProtocol  {
    unsigned long long _customProtocolID;
}

@property(readonly) unsigned long long customProtocolID;

+ (bool)canInitWithRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (unsigned long long)customProtocolID;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)stopLoading;
- (void)startLoading;

@end
