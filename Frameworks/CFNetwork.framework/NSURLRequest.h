/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSData, NSString, NSURL, GKFairPlaySAPSession, NSDictionary, NSInputStream, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

@property(getter=_gkSAPSession,setter=_gkSetSAPSession:,retain) GKFairPlaySAPSession * _gkSAPSession;
@property(copy,readonly) NSString * HTTPMethod;
@property(copy,readonly) NSDictionary * allHTTPHeaderFields;
@property(copy,readonly) NSData * HTTPBody;
@property(retain,readonly) NSInputStream * HTTPBodyStream;
@property(readonly) bool HTTPShouldHandleCookies;
@property(readonly) bool HTTPShouldUsePipelining;
@property(copy,readonly) NSURL * URL;
@property(readonly) unsigned long long cachePolicy;
@property(readonly) double timeoutInterval;
@property(copy,readonly) NSURL * mainDocumentURL;
@property(readonly) unsigned long long networkServiceType;
@property(readonly) bool allowsCellularAccess;

+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setAllowsAnyHTTPSCertificate:(bool)arg1 forHost:(id)arg2;
+ (double)defaultTimeoutInterval;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (id)requestWithURL:(id)arg1;
+ (bool)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;

- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (double)_timeWindowDuration;
- (double)_timeWindowDelay;
- (unsigned long long)expectedWorkload;
- (id)contentDispositionEncodingFallbackArray;
- (bool)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)HTTPReferrer;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
- (id)boundInterfaceIdentifier;
- (bool)allowsCellularAccess;
- (unsigned long long)networkServiceType;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (double)timeoutInterval;
- (id)allHTTPHeaderFields;
- (bool)HTTPShouldHandleCookies;
- (unsigned long long)cachePolicy;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (bool)_isSafeRequestForBackgroundDownload;
- (bool)_URLHasScheme:(id)arg1;
- (id)mainDocumentURL;
- (id)HTTPMethod;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)URL;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)_web_isConditionalRequest;
- (id)_web_HTTPContentType;
- (id)_web_HTTPReferrer;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_gkSetSAPSession:(id)arg1;
- (id)_gkSAPSession;
- (id)_gkDictionaryKey;
- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;

@end
