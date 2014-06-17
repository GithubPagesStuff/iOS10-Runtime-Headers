/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet  {
    bool_needsSorting;
    bool_needsReversing;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
    long long _containerPID;
    unsigned long long _entityLimit;
}


- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (id)sortedBackingStoreForDisplayOrdering;
- (void)_loadCurrentFullResults;
- (bool)_updateToLibraryCurrentRevision;
- (unsigned long long)entityLimit;
- (id)initWithQuery:(id)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
