/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, NSCharacterSet;

@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding> {
    NSCharacterSet *_characterSet;
    bool_inverted;
    long long _baseIdentifier;
    NSString *_charactersAddedToBase;
}

@property(readonly) NSCharacterSet * characterSet;
@property(readonly) long long baseIdentifier;
@property(copy) NSString * charactersAddedToBase;
@property(readonly) bool inverted;

+ (bool)supportsSecureCoding;

- (void)setCharactersAddedToBase:(id)arg1;
- (void)clearCachedCharacterSet;
- (id)characterSet;
- (id)invertedSetDescription;
- (id)initWithCharactersInString:(id)arg1;
- (id)initWithBaseCharacterSet:(long long)arg1;
- (id)newCharacterSetFromDescription;
- (id)charactersAddedToBase;
- (bool)inverted;
- (long long)baseIdentifier;
- (id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 inverted:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

@end
