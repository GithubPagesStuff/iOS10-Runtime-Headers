/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCheapMutableString : NSMutableString  {
    union { 
        unsigned short *fat; 
        char *thin; 
    } contents;
    struct { 
        unsigned int isFat : 1; 
        unsigned int freeWhenDone : 1; 
        unsigned int refs : 30; 
    } flags;
    unsigned long long numCharacters;
    void *_reserved;
}


- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)cStringLength;
- (const char *)cString;
- (void)finalize;
- (void)dealloc;
- (void)setContentsNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3 isUnicode:(bool)arg4;
- (const char *)lossyCString;
- (unsigned long long)fastestEncoding;

@end
