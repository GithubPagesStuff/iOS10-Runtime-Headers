/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPUtils : NSObject

+ (id)SPURLQueryAllowedCharacterSet;
+ (id)UIColorFromString:(id)arg1;
+ (bool)appExtensionFirstUnlock;
+ (id)companionConnectionClientIdentifier:(bool)arg1;
+ (id)deserializeObject:(id)arg1;
+ (void)dispatchAsyncToMainThread:(id /* block */)arg1;
+ (void)dispatchSyncToMainThread:(id /* block */)arg1;
+ (unsigned long long)folderSizeAtPath:(id)arg1 volumeBlockSize:(unsigned long long)arg2;
+ (bool)isApplicationCompanionConnectionClientIdentifier:(id)arg1;
+ (bool)isRTL;
+ (bool)isRunningInAnyDemoMode;
+ (bool)isRunningInF201DemoMode;
+ (bool)isRunningInF5DemoMode;
+ (id)localizedStringForSystemLanguage:(id)arg1 fromBundlePath:(id)arg2;
+ (id)machTime;
+ (id)serializeObject:(id)arg1;
+ (bool)subclassForObject:(id)arg1 overridesSelector:(SEL)arg2 fromSuperclass:(Class)arg3;
+ (id)uniqueNumber;
+ (unsigned long long)userVolumeBlockSize;

@end
