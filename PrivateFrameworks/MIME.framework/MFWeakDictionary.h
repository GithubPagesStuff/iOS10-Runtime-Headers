/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSLock, NSMutableDictionary;

@interface MFWeakDictionary : NSMutableDictionary  {
    unsigned long long _gen;
    NSLock *_lock;
    NSMutableDictionary *_dictionary;
}


- (id)_copyDictionary;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)dealloc;

@end
