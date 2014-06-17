/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding> {
    NSString *_key;
    id _oldValue;
    id _newValue;
    NSString *_message;
}

@property(retain) NSString * key;
@property(retain) id valueOld;
@property(retain) id valueNew;
@property(retain) NSString * message;

+ (id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
+ (bool)supportsSecureCoding;

- (bool)isEqualToDiffHunk:(id)arg1;
- (void)setValueNew:(id)arg1;
- (void)setValueOld:(id)arg1;
- (id)valueNew;
- (id)valueOld;
- (void)setMessage:(id)arg1;
- (id)message;
- (long long)compare:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)key;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setKey:(id)arg1;

@end
