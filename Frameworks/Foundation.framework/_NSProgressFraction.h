/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressFraction : NSObject <NSSecureCoding, NSCopying> {
    long long _completed;
    long long _total;
    bool_overflowed;
}

@property long long completed;
@property long long total;
@property(readonly) bool overflowed;

+ (id)fractionWithDouble:(double)arg1;
+ (id)fractionWithCompleted:(long long)arg1 total:(long long)arg2;
+ (bool)supportsSecureCoding;

- (double)fractionCompleted;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTotal:(long long)arg1;
- (void)setCompleted:(long long)arg1;
- (id)fractionByMultiplyingFraction:(id)arg1;
- (void)divideByValue:(long long)arg1;
- (id)fractionBySubtractingFraction:(id)arg1;
- (id)fractionByAddingFraction:(id)arg1;
- (bool)overflowed;
- (id)initWithCompleted:(long long)arg1 total:(long long)arg2;
- (bool)isIndeterminate;
- (void)multiplyByFraction:(id)arg1;
- (void)subtractFraction:(id)arg1;
- (void)addFraction:(id)arg1;
- (void)_simplifyFromDouble:(double)arg1;
- (id)fractionBySimplifying;
- (long long)completed;
- (long long)total;
- (void)simplify;
- (bool)isFinished;

@end
