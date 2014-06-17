/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_localizedCountryName;
    NSString *_dialingPrefix;
}

@property(retain) NSString * countryCode;
@property(retain) NSString * countryName;
@property(retain) NSString * localizedCountryName;
@property(retain) NSString * dialingPrefix;

+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;
+ (id)allCountries;
+ (void)_loadCountriesIfNeeded;
+ (id)countryInfoWithDictionary:(id)arg1;

- (id)dialingPrefix;
- (void)setDialingPrefix:(id)arg1;
- (id)localizedCountryName;
- (void)setLocalizedCountryName:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (id)countryName;
- (void)setCountryName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
