/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult  {
}

@property(readonly) NSRegularExpression * regularExpression;
@property(readonly) NSArray * rangeArray;


- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)rangeArray;
- (id)initWithRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
- (id)regularExpression;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

@end
