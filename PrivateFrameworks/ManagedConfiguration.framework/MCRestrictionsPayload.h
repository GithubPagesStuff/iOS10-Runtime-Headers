/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSMutableDictionary;

@interface MCRestrictionsPayload : MCPayload  {
    NSMutableDictionary *_restrictions;
    NSString *_iCloudPassword;
}

@property(retain) NSString * iCloudPassword;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setICloudPassword:(id)arg1;
- (id)iCloudPassword;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(bool)arg3;
- (id)localizedRestrictionStrings;
- (id)_unionStrings;
- (id)_intersectionStrings;
- (id)_defaultMediaSettings;
- (id)_enforcedFeatureStrings;
- (id)_restrictedFeatureStrings;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)installationWarnings;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)restrictions;
- (void).cxx_destruct;

@end
