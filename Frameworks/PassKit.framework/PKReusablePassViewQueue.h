/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject  {
    NSMutableSet *_passViews;
}


- (void)enqueueReusablePassView:(id)arg1;
- (id)dequeueReusablePassView;
- (id)initWithCount:(unsigned long long)arg1;
- (void)dealloc;

@end
