/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate  {
    bool_emojiCandidate;
    bool_extensionCandidate;
    bool_isForShortcutConversion;
    NSString *_candidate;
    NSString *_input;
    NSNumber *_mecabraCandidatePointerValue;
}

@property(retain) NSNumber * mecabraCandidatePointerValue;

+ (int)type;
+ (bool)supportsSecureCoding;

- (void)setMecabraCandidatePointerValue:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)mecabraCandidatePointerValue;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(bool)arg4 isEmoji:(bool)arg5 isShortcut:(bool)arg6;
- (bool)isEmojiCandidate;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (id)input;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)candidate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isFullwidthCandidate;

@end
