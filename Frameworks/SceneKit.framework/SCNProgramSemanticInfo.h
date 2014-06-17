/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {
    NSString *_semantic;
    NSDictionary *_options;
}

@property(copy) NSString * semantic;
@property(retain) NSDictionary * options;

+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)setSemantic:(id)arg1;
- (id)semantic;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
