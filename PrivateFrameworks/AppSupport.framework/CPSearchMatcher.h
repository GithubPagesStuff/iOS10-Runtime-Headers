/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject  {
    int _options;
    NSArray *_components;
    NSArray *_asciiComponents;
    NSData *_wholeSearchStringData;
    NSData *_context;
}


- (id)initWithSearchString:(id)arg1 options:(int)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (bool)matches:(id)arg1 matchType:(int)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (bool)matchesUTF8String:(const char *)arg1;
- (bool)matchesASCIIString:(const char *)arg1 matchType:(int)arg2;
- (bool)matchesUTF8String:(const char *)arg1 matchType:(int)arg2;
- (void)dealloc;
- (bool)matches:(id)arg1;

@end
