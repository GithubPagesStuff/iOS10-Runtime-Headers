/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray;

@interface OITSUSharedLocale : NSObject  {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)sharedLocale;
+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)datePreferencesChanged:(id)arg1;
- (id)init;
- (struct __CFLocale { }*)currentLocale;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
