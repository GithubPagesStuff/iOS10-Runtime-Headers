/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFSet : NSMutableSet  {
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long long)_trueCount;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)removeObject:(id)arg1;
- (void)getObjects:(id*)arg1;
- (id)member:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)finalize;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (Class)classForCoder;

@end
