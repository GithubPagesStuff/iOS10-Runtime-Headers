/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSConditionLock;

@interface MFCountryConfiguration : NSObject  {
    int _lock;
    NSConditionLock *_generatorLock;
    NSString *_lastCountryCode;
    NSString *_countryCode;
}

@property(copy,readonly) NSString * countryCode;

+ (id)sharedConfiguration;

- (void)updateCurrentCountry;
- (id)_countryCodeWithGenerator:(id)arg1;
- (id)_networkCountryCode;
- (id)_cellSimCountryCode;
- (id)countryCode;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
