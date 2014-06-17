/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding> {
    struct __CFPhoneNumber { } *_phoneNumberRef;
}

@property(readonly) NSString * digits;
@property(readonly) NSString * countryCode;
@property(readonly) NSString * formattedRepresentation;
@property(readonly) NSString * formattedInternationalRepresentation;
@property(readonly) NSString * unformattedInternationalRepresentation;
@property struct __CFPhoneNumber { }* phoneNumberRef;

+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)countryCode;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (void)setPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)unformattedInternationalRepresentation;
- (id)formattedInternationalRepresentation;
- (id)formattedRepresentation;
- (id)digits;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
