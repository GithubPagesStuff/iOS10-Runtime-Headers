/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse  {
    NSHTTPURLResponseInternal *_httpInternal;
}

@property(readonly) long long statusCode;
@property(copy,readonly) NSDictionary * allHeaderFields;

+ (id)localizedStringForStatusCode:(long long)arg1;
+ (bool)isErrorStatusCode:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)sl_twitterResponseObjectErrorCode:(id)arg1;

- (struct __SecTrust { }*)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust { }*)arg1;
- (id)_clientCertificateState;
- (id)_clientCertificateChain;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (id)allHeaderFields;
- (long long)statusCode;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)_peerCertificateChain;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)expirationDate;
- (id)_dateFromExpires;
- (bool)_getCacheControlMaxAge:(double*)arg1;
- (double)expirationInterval;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (long long)maxExpectedContentLength;
- (double)_maxAge;
- (id)getSAPSignature;
- (int)sl_twitterResponseType:(id)arg1;

@end
