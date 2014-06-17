/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    unsigned long long _diskCapacity;
    unsigned long long _memoryCapacity;
    NSString *_persistentIdentifier;
}

@property unsigned long long diskCapacity;
@property unsigned long long memoryCapacity;
@property(copy) NSString * persistentIdentifier;


- (void)setPersistentIdentifier:(id)arg1;
- (id)persistentIdentifier;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (unsigned long long)diskCapacity;
- (unsigned long long)memoryCapacity;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
