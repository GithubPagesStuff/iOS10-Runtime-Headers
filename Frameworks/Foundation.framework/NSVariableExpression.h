/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSVariableExpression : NSExpression  {
    NSString *_variable;
}

+ (bool)supportsSecureCoding;

- (id)variable;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)CKExpressionValue;

@end
