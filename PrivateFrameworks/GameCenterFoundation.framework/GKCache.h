/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableDictionary, GKLinkedList;

@interface GKCache : NSObject <GKCache> {
    NSMutableDictionary *_dictionary;
    GKLinkedList *_cacheList;
    unsigned long long _maxCount;
    unsigned long long _count;
}

@property(retain) NSMutableDictionary * dictionary;
@property(retain) GKLinkedList * cacheList;
@property unsigned long long maxCount;
@property unsigned long long count;


- (void)setCacheList:(id)arg1;
- (id)cacheList;
- (void)setMaxCount:(unsigned long long)arg1;
- (unsigned long long)maxCount;
- (id)dictionary;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithMaxCount:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)dealloc;
- (void)setDictionary:(id)arg1;
- (void)setCount:(unsigned long long)arg1;

@end
