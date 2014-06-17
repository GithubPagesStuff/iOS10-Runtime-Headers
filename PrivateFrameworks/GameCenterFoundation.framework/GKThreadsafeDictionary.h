/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

@property(retain) NSMutableDictionary * dictionary;


- (id)objectForKey:(id)arg1 objectProducerBlock:(id)arg2;
- (void)readFromDictionary:(id)arg1;
- (void)writeToDictionary:(id)arg1;
- (id)dictionary;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)allKeys;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;
- (id)description;
- (void)setDictionary:(id)arg1;

@end
