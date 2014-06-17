/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject  {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableDictionary *_filesToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)defaultInstance;

- (void)doCleanupForURL:(id)arg1;
- (id)temporaryLinksDirectoryForStore:(id)arg1;
- (bool)registerURLForCleanup:(id)arg1;
- (void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2;
- (void)_deleteIfNecessary:(id)arg1;
- (id)_init__;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;

@end
