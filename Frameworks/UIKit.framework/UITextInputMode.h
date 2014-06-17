/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UITextInputMode : NSObject <NSSecureCoding> {
}

@property(retain,readonly) NSString * primaryLanguage;

+ (bool)supportsSecureCoding;
+ (id)currentInputMode;
+ (id)activeInputModes;

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)primaryLanguage;

@end
