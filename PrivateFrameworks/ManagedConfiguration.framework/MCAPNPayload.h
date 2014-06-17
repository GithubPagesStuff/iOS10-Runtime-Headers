/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray;

@interface MCAPNPayload : MCPayload  {
    NSArray *_apnInfos;
    bool_wasInstalled;
}

@property bool wasInstalled;

+ (id)apnDomainName;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setWasInstalled:(bool)arg1;
- (bool)wasInstalled;
- (id)apnDefaults;
- (id)_strippedAPNDefaults;
- (void)_finishInitializationWithContents:(id)arg1;
- (bool)_checkForValidContents:(id)arg1 outError:(id*)arg2;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValuePairs;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end
