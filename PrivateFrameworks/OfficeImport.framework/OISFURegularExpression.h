/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFURegularExpression : NSObject <NSCopying, NSCoding> {
    NSString *_expressionString;
    void *_reserved;
}

+ (id)regularExpressionWithString:(id)arg1;
+ (void)initialize;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchedRangeForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 subexpressionRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 count:(unsigned int)arg4;
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchedRangeForCString:(const char *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 subexpressionRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 count:(unsigned int)arg4;
- (unsigned long long)numberOfSubexpressions;
- (id)expressionString;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExpressionString:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
