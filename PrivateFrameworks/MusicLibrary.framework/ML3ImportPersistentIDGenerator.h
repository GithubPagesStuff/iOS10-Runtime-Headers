/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator  {
    NSMutableDictionary *_pregeneratedIdMappings;
}


- (void)removePersistentIDFromIdMapping:(long long)arg1;
- (long long)nextPersistentIDForImportItem:(id)arg1;
- (long long)nextPersistentIDForTrackAtIndex:(unsigned int)arg1 fromDataSource:(struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithDatabaseConnection:(id)arg1;
- (void).cxx_destruct;

@end
