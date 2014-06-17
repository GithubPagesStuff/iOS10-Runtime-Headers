/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {
    int _type;
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_parameters;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSDictionary * parameters;
@property int type;

+ (id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1;
+ (int)_privacySettingTypeFromTypeIdentifier:(id)arg1;
+ (id)postPrivacySettingsForPrivacyOptions:(id)arg1;
+ (id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4;
+ (bool)supportsSecureCoding;

- (id)parametersFormValueString;
- (id)_parametersJSONStringRepresentation;
- (void)setParameters:(id)arg1;
- (id)parameters;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)name;
- (void)setType:(int)arg1;
- (void)setName:(id)arg1;
- (int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
