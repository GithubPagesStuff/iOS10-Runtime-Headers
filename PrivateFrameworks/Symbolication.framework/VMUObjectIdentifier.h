/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMapTable, NSHashTable, VMUClassInfoMap, VMUNonOverlappingRangeArray;

@interface VMUObjectIdentifier : NSObject  {
    unsigned int _task;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    } _symbolicator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _memoryReader;

    VMUClassInfoMap *_isaToClassInfo;
    VMUClassInfoMap *_cfTypeIDtoClassInfo;
    VMUClassInfoMap *_unrealizedClassInfos;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _isaTranslator;

    unsigned long long *_nonPointerIndexMapping;
    void *_remoteObjectBuffer;
    unsigned long long _remoteObjectBufferSize;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    struct VMULabelUniquingDataForStringType { id x1; id x2; } *_stringToLabelStringUniquingData;
    NSMapTable *_numberToLabelStringUniquingMap;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
}


- (id)classInfoForCFType:(struct __CFRuntimeBase { unsigned long long x1; unsigned char x2[4]; unsigned int x3; }*)arg1;
- (id)classInfoForIsaPointer:(unsigned long long)arg1;
- (id)classInfoForObject:(unsigned long long)arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)labelForNSSet:(id)arg1;
- (id)labelForNSConcreteHashTable:(id)arg1;
- (id)labelForNSDictionary:(id)arg1;
- (id)labelForNSArray:(id)arg1;
- (id)labelForNSDate:(id)arg1;
- (id)labelForNSNumber:(id)arg1;
- (id)labelForNSPathStore2:(id)arg1;
- (id)labelForNSConcreteAttributedString:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;
- (id)nullClassInfo;
- (void)enumerateAllClassInfosWithBlock:(id)arg1;
- (id)objcRuntimeMallocBlocksHash;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)CFTypeCount;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1;
- (id)labelForNSString:(id)arg1;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)osMajorMinorVersionString;
- (id)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (void)enumerateRealizedClassInfosWithBlock:(id)arg1;
- (void)findObjCclasses;
- (void)findCFTypes;
- (id)initWithTask:(unsigned int)arg1;
- (void)dealloc;

@end
