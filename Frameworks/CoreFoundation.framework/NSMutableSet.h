/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableSet : NSSet  {
}

+ (id)setWithCapacity:(unsigned long long)arg1;
+ (id)nonRetainingSet;
+ (id)_vk_newWeakSet;

- (void)unionOrderedSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)intersectOrderedSet:(id)arg1;
- (void)removeObjectsPassingTest:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)_mutate;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)removeObject:(id)arg1;
- (void)setObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)setArray:(id)arg1;
- (void)unionSet:(id)arg1;
- (Class)classForCoder;
- (void)filterUsingPredicate:(id)arg1;
- (void)CDVAddItemParserMappingWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;
- (id)mf_uniquedObject:(id)arg1;
- (void)pl_addObjectIfNotNil:(id)arg1;
- (void)xorSet:(id)arg1;
- (void)addNonNilObject:(id)arg1;
- (void)addMessageEntry:(id)arg1;

@end
