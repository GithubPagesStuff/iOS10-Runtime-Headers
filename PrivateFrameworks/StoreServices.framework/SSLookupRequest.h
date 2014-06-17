/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, NSString, SSLookupProperties;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    long long _personalizationStyle;
    SSLookupProperties *_properties;
    long long _resultFilters;
}

@property(copy) NSString * keyProfile;
@property long long localizationStyle;
@property(copy) SSAuthenticationContext * authenticationContext;
@property bool authenticatesIfNeeded;
@property long long personalizationStyle;
@property long long resultFilters;
@property(copy,readonly) SSLookupProperties * _lookupProperties;


- (void)setResultFilters:(long long)arg1;
- (long long)resultFilters;
- (void)setPersonalizationStyle:(long long)arg1;
- (long long)personalizationStyle;
- (void)_setTimeoutInterval:(id)arg1;
- (id)_lookupProperties;
- (void)setAuthenticatesIfNeeded:(bool)arg1;
- (void)startWithLookupBlock:(id)arg1;
- (bool)authenticatesIfNeeded;
- (void)setLocalizationStyle:(long long)arg1;
- (long long)localizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)init;
- (bool)start;
- (void)dealloc;

@end
