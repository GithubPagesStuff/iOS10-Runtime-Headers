/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableData : NSMutableData  {
    unsigned int _reserved : 1;
    unsigned int _needToZero : 1;
    unsigned int _hasVM : 1;
    unsigned int _retainCount : 29;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
}


- (id)init;
- (unsigned long long)length;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (const void*)bytes;
- (void)appendData:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_freeBytes;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id)arg4;
- (id)initWithLength:(unsigned long long)arg1;

@end
