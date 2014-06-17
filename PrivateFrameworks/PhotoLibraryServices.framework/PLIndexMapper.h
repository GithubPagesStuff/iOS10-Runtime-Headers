/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLIndexMapperDataSource>;

@interface PLIndexMapper : NSObject  {
    <PLIndexMapperDataSource> *_dataSource;
}


- (id)indexesForBackingIndexes:(id)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (unsigned long long)backingIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForBackingIndex:(unsigned long long)arg1;
- (bool)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;
- (id)initWithDataSource:(id)arg1;

@end
