/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSDictionary, MCProfile, NSArray;

@interface MCPayload : NSObject  {
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    long long _version;
    NSString *_persistentResourceID;
    bool_mustInstallNonInteractively;
}

@property(readonly) MCProfile * profile;
@property(retain,readonly) NSString * friendlyName;
@property(retain,readonly) NSString * type;
@property(retain,readonly) NSString * payloadDescription;
@property(retain) NSString * displayName;
@property(retain,readonly) NSString * identifier;
@property(retain,readonly) NSString * organization;
@property(retain,readonly) NSString * UUID;
@property(readonly) long long version;
@property(retain) NSString * persistentResourceID;
@property(readonly) NSDictionary * restrictions;
@property bool mustInstallNonInteractively;
@property(retain,readonly) NSArray * installationWarnings;

+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)wrapperPayloadDictionary;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)badFieldTypeErrorWithField:(id)arg1;

- (id)payloadDescription;
- (void)setPersistentResourceID:(id)arg1;
- (void)setMustInstallNonInteractively:(bool)arg1;
- (bool)mustInstallNonInteractively;
- (id)persistentResourceID;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValuePairs;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)organization;
- (id)friendlyName;
- (void)setDisplayName:(id)arg1;
- (id)restrictions;
- (long long)version;
- (id)identifier;
- (id)UUID;
- (id)profile;
- (id)title;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;

@end
