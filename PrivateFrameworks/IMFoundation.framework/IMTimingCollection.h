/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface IMTimingCollection : NSObject  {
    NSMutableDictionary *_timings;
    NSObject<OS_dispatch_queue> *_queue;
}


- (bool)hasKey:(id)arg1;
- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
