/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableData;

@interface NSArchiver : NSCoder  {
    void *mdata;
    void *pointerTable;
    void *stringTable;
    void *ids;
    void *map;
    void *replacementTable;
    void *reserved;
}

@property(retain,readonly) NSMutableData * archiverData;

+ (id)archivedDataWithRootObject:(id)arg1;
+ (void)initialize;
+ (bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)classNameEncodedForTrueClassName:(id)arg1;
+ (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;

- (id)initForWritingWithMutableData:(id)arg1;
- (id)data;
- (void)encodeObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)finalize;
- (void)dealloc;
- (void)encodeDataObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (long long)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)archiverData;
- (id)classNameEncodedForTrueClassName:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeConditionalObject:(id)arg1;

@end
