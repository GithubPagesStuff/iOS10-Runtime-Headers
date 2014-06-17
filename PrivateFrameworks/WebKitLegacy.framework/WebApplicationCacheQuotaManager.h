/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}


- (id)origin;
- (unsigned long long)quota;
- (id)initWithOrigin:(id)arg1;
- (unsigned long long)usage;
- (void)setQuota:(unsigned long long)arg1;

@end
