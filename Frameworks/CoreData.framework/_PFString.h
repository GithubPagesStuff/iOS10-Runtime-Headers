/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFString : NSString  {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (bool)accessInstanceVariablesDirectly;

- (unsigned long long)length;
- (void)getCharacters:(unsigned short*)arg1;
- (bool)isEqualToString:(id)arg1;
- (const char *)_fastCStringContents:(bool)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)cStringLength;
- (const char *)UTF8String;
- (const char *)cString;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)copy;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getCString:(char *)arg1;

@end
