/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSURL;

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSString *_id_str;
    NSURL *_objectID;
}

@property(retain) NSString * id_str;
@property(retain) NSURL * objectID;

+ (id)userRecordWithScreenName:(id)arg1;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)id_str;
- (void)setId_str:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
