/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, MPMediaQuery;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}


- (id)multiverseIdentifier;
- (bool)existsInLibrary;
- (void)endGeneratingGeniusClusterItems;
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id*)arg2;
- (bool)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(id)arg2;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(id)arg3;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(id)arg3;
- (void)addItems:(id)arg1 completionBlock:(id)arg2;
- (void)addItem:(id)arg1 completionBlock:(id)arg2;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(id)arg3;
- (id)itemsQuery;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;
- (id)valuesForProperties:(id)arg1;
- (id)representativeItem;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id)arg3;
- (id)mediaLibrary;
- (id)items;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)count;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllItems;
- (unsigned long long)mediaTypes;

@end
