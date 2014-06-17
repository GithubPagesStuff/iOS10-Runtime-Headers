/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject  {
    NSObject<OS_dispatch_queue> *isolation;
    NSMutableIndexSet *unusedIndexes;
    long long usedMax;
    unsigned long long _fetchTimestamp;
}

+ (void)recycleThumbnailIndexes:(id)arg1;
+ (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
+ (void)getAvailableThumbnailIndexWithHandler:(id)arg1;
+ (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(id)arg2;
+ (unsigned long long)nextAvailableThumbnailIndex;
+ (id)sharedInstance;

- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;
- (void)getAvailableThumbnailIndexesFromDatabase;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(id)arg2;
- (id)init;

@end
