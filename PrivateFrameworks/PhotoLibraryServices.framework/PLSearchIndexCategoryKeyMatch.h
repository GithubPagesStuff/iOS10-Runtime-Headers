/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface PLSearchIndexCategoryKeyMatch : NSObject  {
    struct { 
        struct { 
            int (*retain)(); 
            int (*release)(); 
        } callbacks; 
        void **stackBuf; 
        void **buf; 
        long long elemsMax; 
        long long elems; 
    } _categoryStringRanges;
    struct { 
        unsigned char tokens; 
        unsigned char matchedTokens; 
        unsigned char matchedTokensExact; 
    } _matchScore;
    unsigned long long _category;
    NSString *_categoryString;
}

@property(readonly) unsigned long long category;
@property(copy,readonly) NSString * categoryString;


- (id)categoryString;
- (bool)isDeepEqual:(id)arg1;
- (void)_addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithCategory:(unsigned long long)arg1 categoryString:(id)arg2 matchScore:(struct { unsigned char x1; unsigned char x2; unsigned char x3; }*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)_rangesCount;
- (unsigned long long)category;
- (long long)compare:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (double)score;

@end
