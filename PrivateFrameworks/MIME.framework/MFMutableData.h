/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
    void *_bytes;
    unsigned long long _length;
    unsigned long long _mappedLength;
    unsigned long long _capacity;
    unsigned long long _threshold;
    char *_path;
    int _fd;
    unsigned long long _flushFrom;
    bool_flush;
    bool_immutable;
    bool_vm;
}


- (void)mf_makeImmutable;
- (void)setMappingThreshold:(unsigned int)arg1;
- (id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(bool)arg3;
- (void)_flushToDisk:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)_mapMutableData:(bool)arg1;
- (bool)mf_immutable;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;
- (unsigned long long)length;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)setLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (const void*)bytes;
- (void)appendData:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (id)initWithLength:(unsigned long long)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;

@end
