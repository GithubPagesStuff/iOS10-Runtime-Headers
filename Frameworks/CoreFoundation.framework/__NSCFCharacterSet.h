/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCharacterSet : NSMutableCharacterSet  {
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (id)bitmapRepresentation;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (id)invertedSet;
- (void)encodeWithCoder:(id)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)finalize;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)characterIsMember:(unsigned short)arg1;
- (Class)classForCoder;

@end
