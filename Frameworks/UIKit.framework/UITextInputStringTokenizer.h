/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder<UITextInput>;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
    UIResponder<UITextInput> *_textInput;
}


- (id)initWithTextInput:(id)arg1;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(bool)arg3;
- (bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (long long)_indexForTextPosition:(id)arg1;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

@end
